
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "shaderconv.h"
#include "shader.h"

//#include <android/log.h>
//#define Printf(...) __android_log_print(ANDROID_LOG_INFO, "LIBGL", __VA_ARGS__)

#define Printf(...) printf(__VA_ARGS__)


#define SHADOW 0x00
#define TEXTURE 0x0f


#define replace_gl_FragData(N)  \
	char * gl_FragData ##N  = strstr(*glshader_converted, "gl_FragData[" #N "]"); \
	if(gl_FragData ##N ){ \
		pot = replace("gl_FragData[" #N "]", "FragData" #N "", glshader_converted); \
		ptr_cut_in = *glshader_converted + cut_in_offset; \
		cut_in(ptr_cut_in, "layout(location = " #N ") out mediump vec4 FragData" #N ";\n", glshader_converted); \
	}



void shader_conv_(char **glshader_source, char **glshader_converted){				Printf("\n&&&&\n\nStart %d !\n\n&&&&\n", __LINE__);
	
	
	int vsh = 0;
	int pot = 0;			// A variable that stores the value returned by pot = replace().
	
	if(strstr(*glshader_converted, "gl_Position"))
  		vsh = 1;
	else
  		vsh = 0;
  	
  	int cut_in_offset = strstr(*glshader_converted, "0 es") + 5 - *glshader_converted;				Printf("Calling %d  cut_in_offset = %d !", __LINE__, cut_in_offset);
  	char * ptr_cut_in = *glshader_converted + cut_in_offset;
  	
  	// ======== some auxiliary things
  	//pot = replace("__VERSION__", "440", glshader_converted);//				Printf("Calling %d !", __LINE__);
  	pot = replace("const ", "", glshader_converted);
  	// ======== Handling the first half of an implicit type conversion.
    //num_add_f(glshader_converted);
  	// ======== from int to float
  	int_to_float(glshader_converted, vsh);//				Printf("Calling %d !", __LINE__);
  	
	// ======== Keyword
	if(vsh){
		/*
		ptr_cut_in = *glshader_converted + cut_in_offset;
		cut_in(ptr_cut_in, "#define attribute in\n", glshader_converted);//				Printf("Calling %d !", __LINE__);
		ptr_cut_in = *glshader_converted + cut_in_offset;
		cut_in(ptr_cut_in, "#define varying out\n", glshader_converted);//				Printf("Calling %d !", __LINE__);
		*/
		pot = replace("attribute", "in", glshader_converted);//				Printf("Calling %d !", __LINE__);
		pot = replace("varying", "out", glshader_converted);
	}else{
		//ptr_cut_in = *glshader_converted + cut_in_offset;
		//cut_in(ptr_cut_in, "#define varying in\n", glshader_converted);//				Printf("Calling %d !", __LINE__);
		pot = replace("varying", "in", glshader_converted);//				Printf("Calling %d !", __LINE__);
	}
	
	// ======== Built-in variable
	
	if(!vsh){
		char * gl_FragColor = strstr(*glshader_converted, "gl_FragColor");//				Printf("Calling %d !", __LINE__);
		if(gl_FragColor){
			pot = replace("gl_FragColor", "FragColor", glshader_converted);//				Printf("Calling %d !", __LINE__);
			ptr_cut_in = *glshader_converted + cut_in_offset;
			cut_in(ptr_cut_in, "out mediump vec4 FragColor;\n", glshader_converted);//				Printf("Calling %d !", __LINE__);
		}
		
		// ======== Fix MRT and OptiFine 
		int fix_mrt = 0;//				Printf("Calling %d !", __LINE__);
		//fix_mrt = drawbuffer_fix(glshader_source, glshader_converted, cut_in_offset);//				Printf("Calling %d !", __LINE__);		// You can comment out this statement to disable it.
		if(!fix_mrt){
    		char * gl_FragData = strstr(*glshader_converted, "gl_FragData");//				Printf("Calling %d !", __LINE__);
    		if(gl_FragData){//				Printf("Calling %d !", __LINE__);
    			replace_gl_FragData(0)
    			replace_gl_FragData(1)
    			replace_gl_FragData(2)
    			replace_gl_FragData(3)
    			replace_gl_FragData(4)
    			replace_gl_FragData(5)
    			replace_gl_FragData(6)
    			replace_gl_FragData(7)
    		}
		}
	}
	
	
	// ======== Built-in function
	
	char * isshadow = strstr(*glshader_converted, "shadow");				printf("shadow = %p \n", isshadow);
	if(isshadow){
	    func_build_in(glshader_converted, cut_in_offset, SHADOW);//				Printf("Calling %d !", __LINE__);
	}
	
	pot = replace("texture2D", "texture", glshader_converted);
	
	func_name_conv("texture", glshader_converted);//				Printf("Calling %d !", __LINE__);						// Prevent conflict between variable name and function name.
	
	
	
	//ptr_cut_in = *glshader_converted + cut_in_offset;
	//cut_in(ptr_cut_in, "#define texture2DProj textureProj\n#define texture2DLod textureLod\n#define texture2D texture\n", glshader_converted);//				Printf("Calling %d !", __LINE__);
	
	//pot = replace("texture2D", "texture", glshader_converted);
	
	
	// ======== Integer type compatibility
	pot = replace("[", "[int(", glshader_converted);//				Printf("Calling %d !", __LINE__);
	pot = replace("]", ")]", glshader_converted);//				Printf("Calling %d !", __LINE__);
	
	// ======== some fix
	//pot = replace("#li", "//#li", glshader_converted);				// #line
	
	// >>>>fixed for GLSL3.x
	
	
					Printf("\n&&&&\n\nEnd %d !\n\n&&&&\n", __LINE__);
	return;
}






static char _texture2DLod[]=
"vec4 _texture2DLod(sampler2D tex, vec2 coord, int level){\n"
" return textureLod(tex, coord, float(level));\n"
"}"
"vec4 _texture2DLod(sampler2D tex, vec2 coord, float level){\n"
" return textureLod(tex, coord, level);\n"
"}"
"vec4 _texture2D(sampler2D tex, vec2 coord){\n"
" return texture(tex, coord);\n"
"}"
"vec4 _texture2D(sampler2D tex, vec2 coord, int LOD){\n"
" return texture(tex, coord, float(LOD));\n"
"}"
;
static char _shadow2D[]=
"vec3 shadow2DLod(sampler2DShadow shadow, vec3 coord, int level){\n"
" return vec3(textureLod(shadow, coord, float(level)), 0.0, 0.0);\n"
"}"
"vec3 shadow2DLod(sampler2DShadow shadow, vec3 coord, float level){\n"
" return vec3(textureLod(shadow, coord, level), 0.0, 0.0);\n"
"}"
"vec3 shadow2D(sampler2DShadow shadow, vec3 coord){\n"
" return vec3(texture(shadow, coord), 0.0, 0.0);\n"
"}"
;


void func_build_in(char **converted, int cut_in_offset, int type){				Printf("\n&&&&\n\nStart %d !\n\n&&&&\n", __LINE__);
	char * ptr_cut_in = *converted + cut_in_offset;
	switch(type){
		case SHADOW:
			cut_in(ptr_cut_in, _shadow2D, converted);//				Printf("Calling %d !", __LINE__);
			break;
		case TEXTURE:
			cut_in(ptr_cut_in, _texture2DLod, converted);//				Printf("Calling %d !", __LINE__);
			break;
	}				Printf("\n&&&&\n\nEnd %d !\n\n&&&&\n", __LINE__);
	return;
}




void num_add_f(char **source){				Printf("\n&&&&\n\nStart %d !\n\n&&&&\n", __LINE__);
	char * ptr = *source;
	int lenS = strlen(*source);				Printf("Calling %d ! lenS = %d", __LINE__, lenS);
	int num = 0;
	int max = (int)(lenS*0.4);
	char ** ptr_arr = (char **)malloc((max+1)*sizeof(char*));//				Printf("Calling %d !", __LINE__);			// Pointer array.
	lenS--;
	int start=0;
	for(int n=0; n<lenS; n++){
		if( ptr[n]=='#' ){
			if( ptr[n+1]=='d' ){				// if #define
				continue;
			}else{
				while( ptr[n]!='\n' && n<lenS ){					// If the preprocessing directive is not #define,
					n++;
				}
				continue;
			}
		}
		if(n==0){continue;}
		if( (ptr[n]>='0' && ptr[n]<='9') || ptr[n]=='.' ){				// If the character is a number,
			if( ptr[n]=='.' ){
				if( !(ptr[n-1]>='0' && ptr[n-1]<='9') ){			// ...).rgb
					start=0;
					continue;				//#define ENTITY_LEAVES        8.0.0
				}
			}
			if( ptr[n+1]=='f' ){				// Check to see if there is an existing f,
				if(start){
    				ptr[n+1]=' ';				// "0f" >> "0 "
    				ptr_arr[num] = ptr+n+1;
    				num++;
    				start=0;
				}
				continue;
			}
			if( (ptr[n-1]>='0' && ptr[n-1]<='9') || ptr[n-1]=='.' ){				// If the character is still preceded by a number,
				continue;
			}						// If the current position is not in a contiguous number queue,
			if( !( (ptr[n-1]>='a' && ptr[n-1]<='z') || (ptr[n-1]>='A' && ptr[n-1]<='Z') || ptr[n-1]=='_' || ptr[n-1]=='[' || ptr[n-1]==']' ) ){				// If the character is not preceded by the name of a variable or function or array.
				start=1;
				continue;
			}else{
				start=0;
				continue;
			}
		}else{				// _gl4es_MultiTexCoord0.fstpq
			if(start){
				ptr_arr[num] = ptr+n;				// if so, the number will be suffixed with f to make it a floating point number.
				num++;
				start=0;				// update the start.
				continue;
			}else{
				continue;
			}
		}
	}				Printf("Calling %d  \n\n num = %d !", __LINE__, num);
	if(num>0){
		char ** f_arr = (char **)malloc(num*sizeof(char*));//				Printf("Calling %d !", __LINE__);
    	char f_A[] = "0";
    	char f_B[] = ".0";
    	char f_C[] = "";
    	char * ptr_f = NULL;
    	int isfloat = 0;
    	for(int n=0; n<num; n++){
    		isfloat = 0;
    		ptr_f = ptr_arr[n];
    		if( !( (*ptr_f>='a' && *ptr_f<='z') || (*ptr_f>='A' && *ptr_f<='Z') || *ptr_f=='_' ) ){
				while( !( (*ptr_f>='0' && *ptr_f<='9') || *ptr_f=='.' ) ){				// Corrected Offset.
					ptr_f--;
				}
				for(int m=0; *(ptr_f-m)!='\n'; m++){
					if( *(ptr_f-m)>='0' && *(ptr_f-m)<='9' ){
						continue;
					}
					if( *(ptr_f-m)=='.' ){
						isfloat=1;
						break;				//#define ENTITY_LEAVES        8.0.0
					}
					break;
				}
				if(isfloat){				// If the number has a decimal point,
					f_arr[n]=f_A;
				}else{
					f_arr[n]=f_B;
				}
    		}else{
    			f_arr[n]=f_C;
    		}
    	}
    	cut_in_common(ptr_arr, f_arr, num, source);//				Printf("Calling %d !", __LINE__);
    	free(f_arr); f_arr=NULL;				Printf("Calling %d  free = %p !", __LINE__, f_arr);
    }
	free(ptr_arr); ptr_arr=NULL;				Printf("Calling %d  free = %p !", __LINE__, ptr_arr);
					Printf("\n&&&&\n\nEnd %d !\n\n&&&&\n", __LINE__);
	return;
}



void int_to_float(char **source, int vsh){				Printf("\n&&&&\n\nStart %d !\n\n&&&&\n", __LINE__);
	// >>>> replace "int" to "float"
	int pot;
	int len_highp = strlen("highp");
	int len_mediump = strlen("mediump");
	int len_lowp = strlen("lowp");
	int len_uniform = strlen("uniform");
	int len_attribute = strlen("attribute");
	int lenS = strlen(*source);
	
	// >>>> uniform
	cut_in_constructor("uniform", source);//				Printf("Calling %d !", __LINE__);
					Printf("Calling %d !  vsh = %d", __LINE__, vsh);
	// >>>> attribute
	if(vsh){
		cut_in_constructor("attribute", source);//				Printf("Calling %d !", __LINE__);
	}
	
	
	
	
	// int
	int len_int = strlen("int");
	int len_s_to_m = 0;
	int num_int = 0;
	int num_int_ = 0;
	char **ptr_int = (char **)malloc( ((int)(lenS/len_int)+1)*sizeof(char*) );
	//char **ptr_int_ = (char **)malloc( ((int)(lenS/len_int)+1)*sizeof(char*) );
	pot = find("int", "int", source, ptr_int, &num_int);
	char *ptrm = NULL;
	for(int n=0; n<num_int; n++){
		ptrm = ptr_int[n];
		*ptrm = '\0';
		len_s_to_m = ptrm - *source;
		for(int m=0; m<len_s_to_m; m++){
			if(m==0){continue;}
			if(*(ptrm-m)=='\n'){break;}
			if(*(ptrm-m)==' '){						// Check backwards from "int" position to see if the string has "uniform" and "attribute", and make sure the path is full of spaces ' '.
				continue;
			}else{
				if(*(ptrm-m-1)=='r' && *(ptrm-m)=='m'){				// First, fuzzy judgment is carried out to reduce the consumption caused by the string comparison function.
					if(*(ptrm-m-len_uniform)=='\n' || *(ptrm-m-len_uniform)==';' || *(ptrm-m-len_uniform)==' '){
    					if(strncmp(ptrm-m-len_uniform+1, "uniform", len_uniform)==0){
    						memmove(ptr_int[n], "###", 3);
    						//ptr_int_[num_int_]=ptr_int[n];
    						num_int_++;
    					}
    				}
				}
				if(*(ptrm-m-1)=='t' && *(ptrm-m)=='e'){
					if(*(ptrm-m-len_attribute)=='\n' || *(ptrm-m-len_attribute)==';' || *(ptrm-m-len_attribute)==' '){
    					if(strncmp(ptrm-m-len_attribute+1, "attribute", len_attribute)==0){
    						memmove(ptr_int[n], "###", 3);
    						//ptr_int_[num_int_]=ptr_int[n];
    						num_int_++;
    					}
    				}
				}
				if(*(ptrm-m-1)=='m' && *(ptrm-m)=='p'){
					if(*(ptrm-m-len_mediump)==' '){
    					if(strncmp(ptrm-m-len_mediump+1, "mediump", len_mediump)==0){
    						memmove(ptr_int[n], "###", 3);
    						//ptr_int_[num_int_]=ptr_int[n];
    						num_int_++;
    					}
    				}
				}
				if(*(ptrm-m-1)=='h' && *(ptrm-m)=='p'){
					if(*(ptrm-m-len_highp)==' '){
    					if(strncmp(ptrm-m-len_highp+1, "highp", len_highp)==0){
    						memmove(ptr_int[n], "###", 3);
    						//ptr_int_[num_int_]=ptr_int[n];
    						num_int_++;
    					}
    				}
				}
				if(*(ptrm-m-1)=='w' && *(ptrm-m)=='p'){
					if(*(ptrm-m-len_lowp)==' '){
    					if(strncmp(ptrm-m-len_lowp+1, "lowp", len_lowp)==0){
    						memmove(ptr_int[n], "###", 3);
    						//ptr_int_[num_int_]=ptr_int[n];
    						num_int_++;
    					}
    				}
				}
			}
		}
		if(*(ptr_int[n])!='#'){
			*(ptr_int[n]) = 'i';
		}
	}
	// ivecn
	int len_ivec = strlen("ivec");
	len_s_to_m = 0;
	int num_ivec = 0;
	int num_ivec_ = 0;
	char **ptr_ivec = (char **)malloc( ((int)(lenS/len_ivec)+1)*sizeof(char*) );
	//char **ptr_ivec_ = (char **)malloc( ((int)(lenS/len_ivec)+1)*sizeof(char*) );
	pot = find("ivec", "ivec", source, ptr_ivec, &num_ivec);
	ptrm = NULL;
	for(int n=0; n<num_ivec; n++){
		if( !(*(ptr_ivec[n]+4)>='2' && *(ptr_ivec[n]+4)<='4') ){				// Check if it is vec2/3/4.
			memmove(ptr_ivec[n], "####", 4);
			ptr_ivec[n]=NULL;
			continue;
		}
		ptrm = ptr_ivec[n];
		*ptrm = '\0';
		len_s_to_m = ptrm - *source;
		for(int m=0; m<len_s_to_m; m++){
			if(m==0){continue;}
			if(*(ptrm-m)=='\n'){break;}
			if(*(ptrm-m)==' '){						// Check backwards from "ivec" position to see if the string has "uniform" and "attribute", and make sure the path is full of spaces ' '.
				continue;
			}else{
				if(*(ptrm-m-1)=='r' && *(ptrm-m)=='m'){				// First, fuzzy judgment is carried out to reduce the consumption caused by the string comparison function.
					if(*(ptrm-m-len_uniform)=='\n' || *(ptrm-m-len_uniform)==';' || *(ptrm-m-len_uniform)==' '){
    					if(strncmp(ptrm-m-len_uniform+1, "uniform", len_uniform)==0){
    						memmove(ptr_ivec[n], "####", 4);
    						//ptr_ivec_[num_ivec_]=ptr_ivec[n];
    						num_ivec_++;
    					}
    				}
				}
				if(*(ptrm-m-1)=='t' && *(ptrm-m)=='e'){
					if(*(ptrm-m-len_attribute)=='\n' || *(ptrm-m-len_attribute)==';' || *(ptrm-m-len_attribute)==' '){
    					if(strncmp(ptrm-m-len_attribute+1, "attribute", len_attribute)==0){
    						memmove(ptr_ivec[n], "####", 4);
    						//ptr_ivec_[num_ivec_]=ptr_ivec[n];
    						num_ivec_++;
    					}
    				}
				}
				if(*(ptrm-m-1)=='m' && *(ptrm-m)=='p'){
					if(*(ptrm-m-len_mediump)==' '){
    					if(strncmp(ptrm-m-len_mediump+1, "mediump", len_mediump)==0){
    						memmove(ptr_ivec[n], "####", 4);
    						//ptr_ivec_[num_ivec_]=ptr_ivec[n];
    						num_ivec_++;
    					}
    				}
				}
				if(*(ptrm-m-1)=='h' && *(ptrm-m)=='p'){
					if(*(ptrm-m-len_highp)==' '){
    					if(strncmp(ptrm-m-len_highp+1, "highp", len_highp)==0){
    						memmove(ptr_ivec[n], "####", 4);
    						//ptr_ivec_[num_ivec_]=ptr_ivec[n];
    						num_ivec_++;
    					}
    				}
				}
				if(*(ptrm-m-1)=='w' && *(ptrm-m)=='p'){
					if(*(ptrm-m-len_lowp)==' '){
    					if(strncmp(ptrm-m-len_lowp+1, "lowp", len_lowp)==0){
    						memmove(ptr_ivec[n], "####", 4);
    						//ptr_ivec_[num_ivec_]=ptr_ivec[n];
    						num_ivec_++;
    					}
    				}
				}
			}
		}
		if(*(ptr_ivec[n])!='#'){
			*(ptr_ivec[n]) = 'i';
		}
	}
					Printf("Calling %d  num_int_ = %d !", __LINE__, num_int_);
					Printf("Calling %d  num_ivec_ = %d !", __LINE__, num_ivec_);
	
	pot = replace("int", "float", source);//				Printf("Calling %d !", __LINE__);				// Replace (any) "int" with a "float".
	pot = replace("ivec", "vec", source);//				Printf("Calling %d !", __LINE__);
	
	pot = replace("####", "ivec", source);//				Printf("Calling %d !", __LINE__);					// Replace previously ignored "###"(int) back to "int".
	pot = replace("###", "int", source);//				Printf("Calling %d !", __LINE__);
	
	free(ptr_int); ptr_int=NULL;				Printf("Calling %d  free = %p !", __LINE__, ptr_int);
	//free(ptr_int_);//				Printf("Calling %d !", __LINE__);
	free(ptr_ivec); ptr_ivec=NULL;				Printf("Calling %d  free = %p !", __LINE__, ptr_ivec);
	//free(ptr_ivec_);//				Printf("Calling %d !", __LINE__);
	
	
					Printf("\n&&&&\n\nEnd %d !\n\n&&&&\n", __LINE__);
	return;
}

int len_name(char *ptr){
	int n = 0;
	while( (ptr[n]>='a' && ptr[n]<='z') || (ptr[n]>='A' && ptr[n]<='Z') || (ptr[n]>='0' && ptr[n]<='9') || ptr[n]=='_' ){
		n++;
	}
	return n;
}

void cut_in_constructor(char *A, char **source){				Printf("\n&&&&\n\nStart %d !\n\n&&&&\n", __LINE__);
	int pot;
	int len_highp = strlen("highp");
	int len_mediump = strlen("mediump");
	int len_lowp = strlen("lowp");
	int lenS = strlen(*source);
	//char * ptr_constructor[256] = {NULL};
	char ** ptr_constructor = (char **)malloc(256*sizeof(char*));
	//char * ptr_cut_in[256] = {NULL};
	char ** ptr_cut_in = (char **)malloc(256*sizeof(char*));
	int num_constructor = 0;
	char ** arr_name = (char **)malloc(256*sizeof(char*));
	char ** arr_name_ = (char **)malloc(256*sizeof(char*));
	int arr_name_len[256];
	// >>>> uniform
	int len_uniform = strlen(A);
	int num_uniform = (int)(lenS/len_uniform*0.4);
	char ** ptr_uniform = (char **)malloc((num_uniform+1)*sizeof(char*));//				Printf("Calling %d !", __LINE__);
	pot = find(A, A, source, ptr_uniform, &num_uniform);				Printf("Calling %d  num_%s = %d !", __LINE__, A, num_uniform);
	char * ptr_u;
	for(int n=0; n<num_uniform; n++){
		ptr_u = ptr_uniform[n];
		ptr_u += len_uniform;
		if(ptr_u[0]==' '){
			if(ptr_u[1]=='h'){
				ptr_u += len_highp+1;
			}
			if(ptr_u[1]=='m'){
				ptr_u += len_mediump+1;
			}
			if(ptr_u[1]=='l'){
				ptr_u += len_lowp+1;
			}
			if(ptr_u[1]=='i'){
				if(ptr_u[2]=='n'){			// int name
					// Collect variable names
					ptr_u += 5;
					char * ptr_name = ptr_u;
					while(*ptr_name==' ' || *ptr_name=='\n'){
						ptr_name++;
					}
					int ptr_name_offset = ptr_name - *source;				// Because the source location is moved after the replace call, the pointer offset value is calculated in advance.
					int name_len = len_name(ptr_name);
					arr_name_len[num_constructor] = name_len;
					char * name = (char *)malloc(name_len+1);
					memmove(name, ptr_name, name_len);
					name[name_len]='\0';
					char * name_ = (char *)malloc(name_len+12);
					memmove(name_, ptr_name, name_len);
					memmove(name_+name_len, "_vgpu(void)", 11);
					name_[name_len+11]='\0';				Printf("Calling %d  \n\n name_ >>>>\n%s\n>>>> \n\n", __LINE__, name_);
					// Replace the variable names to make the constructor work for them.
					//pot = replace(name, name_, source);//				Printf("Calling %d !", __LINE__);
					//pot = replace_common(name_, name, source, 1);//				Printf("Calling %d !", __LINE__);
					// Inserts a type constructor at the declaration of the variable name
					char * constructor = "float %s { return float(%s); } \n ";				// A type conversion constructor.
					int len_constructor = snprintf(NULL, 0, constructor, name_, name);				Printf("Calling %d  \n\n len_constructor = %d !", __LINE__, len_constructor);
					char * constructor_ = (char *)malloc(len_constructor+1);				Printf("Calling %d  constructor_ = %p !", __LINE__, constructor_);
					pot = snprintf(constructor_, len_constructor, constructor, name_, name);
					constructor_[len_constructor]='\0';				Printf("Calling %d  \n\n constructor_ >>>>\n%s\n>>>> \n\n", __LINE__, constructor_);
					ptr_constructor[num_constructor] = constructor_;//				Printf("Calling %d !", __LINE__);				// Here, the constructor pointers are stored in an array of pointers, which are inserted at one time after all the constructors have been created.
					ptr_name = *source + ptr_name_offset;				// Make the position of ptr_name in the new source the same as that of the original source.
					while(*ptr_name != '\n'){
						ptr_name++;//				Printf("Calling %d !", __LINE__);
					}
					ptr_name++;
					ptr_cut_in[num_constructor] = ptr_name;				Printf("Calling %d  ptr_name = %p !", __LINE__, ptr_name);					// Stores the location of the constructor to be inserted.
					arr_name[num_constructor]=name;				Printf("Calling %d  free = %p !", __LINE__, name);
					arr_name_[num_constructor]=name_;				Printf("Calling %d  free = %p !", __LINE__, name_);
					num_constructor++;
					continue;
				}
				if(ptr_u[2]=='v'){				Printf("Calling %d  ivec !", __LINE__);
					if(ptr_u[5]=='2'){				Printf("Calling %d  ivec2 !", __LINE__);			// ivec2
						// Collect variable names
    					ptr_u += 7;
    					char * ptr_name = ptr_u;
    					while(*ptr_name==' ' || *ptr_name=='\n'){
    						ptr_name++;
    					}
    					int ptr_name_offset = ptr_name - *source;
    					int name_len = len_name(ptr_name);
    					arr_name_len[num_constructor] = name_len;
    					char * name = (char *)malloc(name_len+1);
    					memmove(name, ptr_name, name_len);
    					name[name_len]='\0';
    					char * name_ = (char *)malloc(name_len+12);
    					memmove(name_, ptr_name, name_len);
    					memmove(name_+name_len, "_vgpu(void)", 11);
    					name_[name_len+11]='\0';				Printf("Calling %d  \n\n name_ >>>>\n%s\n>>>> \n\n", __LINE__, name_);
    					// Replace the variable names to make the constructor work for them.
    					//pot = replace(name, name_, source);
    					//pot = replace_common(name_, name, source, 1);
    					// Inserts a type constructor at the declaration of the variable name
    					char * constructor = "vec2 %s { return vec2(float(%s.x), float(%s.y)); } \n ";				// A type conversion constructor.
    					int len_constructor = snprintf(NULL, 0, constructor, name_, name, name);				Printf("Calling %d  \n\n len_constructor = %d !", __LINE__, len_constructor);
    					char * constructor_ = (char *)malloc(len_constructor+1);
    					pot = snprintf(constructor_, len_constructor, constructor, name_, name, name);
    					constructor_[len_constructor]='\0';				Printf("Calling %d  \n\n constructor_ >>>>\n%s\n>>>> \n\n", __LINE__, constructor_);
    					ptr_constructor[num_constructor] = constructor_;				// Here, the constructor pointers are stored in an array of pointers, which are inserted at one time after all the constructors have been created.
    					ptr_name = *source + ptr_name_offset;
    					while(*ptr_name != '\n'){
    						ptr_name++;
    					}
    					ptr_name++;
    					ptr_cut_in[num_constructor] = ptr_name;					// Stores the location of the constructor to be inserted.
    					arr_name[num_constructor]=name;				Printf("Calling %d  free = %p !", __LINE__, name);
    					arr_name_[num_constructor]=name_;				Printf("Calling %d  free = %p !", __LINE__, name_);
    					num_constructor++;
    					continue;
    				}
					if(ptr_u[5]=='3'){			// ivec3
						// Collect variable names
    					ptr_u += 7;
    					char * ptr_name = ptr_u;
    					while(*ptr_name==' ' || *ptr_name=='\n'){
    						ptr_name++;
    					}
    					int ptr_name_offset = ptr_name - *source;
    					int name_len = len_name(ptr_name);
    					arr_name_len[num_constructor] = name_len;
    					char * name = (char *)malloc(name_len+1);
    					memmove(name, ptr_name, name_len);
    					name[name_len]='\0';
    					char * name_ = (char *)malloc(name_len+12);
    					memmove(name_, ptr_name, name_len);
    					memmove(name_+name_len, "_vgpu(void)", 11);
    					name_[name_len+11]='\0';				Printf("Calling %d  \n\n name_ >>>>\n%s\n>>>> \n\n", __LINE__, name_);
    					// Replace the variable names to make the constructor work for them.
    					//pot = replace(name, name_, source);
    					//pot = replace_common(name_, name, source, 1);
    					// Inserts a type constructor at the declaration of the variable name
    					char * constructor = "vec3 %s { return vec3(float(%s.x), float(%s.y), float(%s.z)); } \n ";				// A type conversion constructor.
    					int len_constructor = snprintf(NULL, 0, constructor, name_, name, name, name);				Printf("Calling %d  \n\n len_constructor = %d !", __LINE__, len_constructor);
    					char * constructor_ = (char *)malloc(len_constructor+1);
    					pot = snprintf(constructor_, len_constructor, constructor, name_, name, name, name);
    					constructor_[len_constructor]='\0';				Printf("Calling %d  \n\n constructor_ >>>>\n%s\n>>>> \n\n", __LINE__, constructor_);
    					ptr_constructor[num_constructor] = constructor_;				// Here, the constructor pointers are stored in an array of pointers, which are inserted at one time after all the constructors have been created.
    					ptr_name = *source + ptr_name_offset;
    					while(*ptr_name != '\n'){
    						ptr_name++;
    					}
    					ptr_name++;
    					ptr_cut_in[num_constructor] = ptr_name;					// Stores the location of the constructor to be inserted.
    					arr_name[num_constructor]=name;				Printf("Calling %d  free = %p !", __LINE__, name);
    					arr_name_[num_constructor]=name_;				Printf("Calling %d  free = %p !", __LINE__, name_);
						num_constructor++;
						continue;
					}
					if(ptr_u[5]=='4'){			// ivec4
						// Collect variable names
    					ptr_u += 7;
    					char * ptr_name = ptr_u;
    					while(*ptr_name==' ' || *ptr_name=='\n'){
    						ptr_name++;
    					}
    					int ptr_name_offset = ptr_name - *source;
    					int name_len = len_name(ptr_name);
    					arr_name_len[num_constructor] = name_len;
    					char * name = (char *)malloc(name_len+1);
    					memmove(name, ptr_name, name_len);
    					name[name_len]='\0';
    					char * name_ = (char *)malloc(name_len+12);
    					memmove(name_, ptr_name, name_len);
    					memmove(name_+name_len, "_vgpu(void)", 11);
    					name_[name_len+11]='\0';				Printf("Calling %d  \n\n name_ >>>>\n%s\n>>>> \n\n", __LINE__, name_);
    					// Replace the variable names to make the constructor work for them.
    					//pot = replace(name, name_, source);
    					//pot = replace_common(name_, name, source, 1);
    					// Inserts a type constructor at the declaration of the variable name
    					char * constructor = "vec4 %s { return vec4(float(%s.x), float(%s.y), float(%s.z), float(%s.w)); } \n ";				// A type conversion constructor.
    					int len_constructor = snprintf(NULL, 0, constructor, name_, name, name, name, name);				Printf("Calling %d  \n\n len_constructor = %d !", __LINE__, len_constructor);
    					char * constructor_ = (char *)malloc(len_constructor+1);
    					pot = snprintf(constructor_, len_constructor, constructor, name_, name, name, name, name);
    					constructor_[len_constructor]='\0';				Printf("Calling %d  \n\n constructor_ >>>>\n%s\n>>>> \n\n", __LINE__, constructor_);
    					ptr_constructor[num_constructor] = constructor_;				// Here, the constructor pointers are stored in an array of pointers, which are inserted at one time after all the constructors have been created.
    					ptr_name = *source + ptr_name_offset;
    					while(*ptr_name != '\n'){
    						ptr_name++;
    					}
    					ptr_name++;
    					ptr_cut_in[num_constructor] = ptr_name;					// Stores the location of the constructor to be inserted.
    					arr_name[num_constructor]=name;				Printf("Calling %d  free = %p !", __LINE__, name);
    					arr_name_[num_constructor]=name_;				Printf("Calling %d  free = %p !", __LINE__, name_);						
						num_constructor++;
						continue;
					}
					continue;
    			}
				continue;
			}
			continue;
		}
		continue;
	}				Printf("Calling %d !  num_constructor = %d", __LINE__, num_constructor);
	if(num_constructor>0){				Printf("Calling %d  *source = %p  ptr_cut_in[0] = %p !", __LINE__, *source, ptr_cut_in[0]);
    	cut_in_common(ptr_cut_in, ptr_constructor, num_constructor, source);//				Printf("Calling %d !", __LINE__);					// Insert all constructors.
    	if(num_constructor>256){
    		num_constructor=256;
    	}
    	int num_name = 0;
    	char * name = NULL;
    	lenS = strlen(*source);
    	for(int n=0; n<num_constructor; n++){
    		char * aux = (char *)malloc(arr_name_len[n]+1);
    		for(int x=0; x<arr_name_len[n]; x++){
				aux[x]='$';
			}
			aux[arr_name_len[n]]='\0';
    		char ** ptr_name = (char **)malloc( ((int)(lenS/arr_name_len[n]*0.4)+1)*sizeof(char*) );
    		pot = find(arr_name[n], arr_name[n], source, ptr_name, &num_name);
    		for(int m=0; m<num_name; m++){				// Check whether the variable name is a separate variable name.
        		name = ptr_name[m];
        		name--;
        		if( (*name>='a' && *name<='z') || (*name>='A' && *name<='Z') || (*name>='0' && *name<='9') || *name=='_' || *name=='$' ){
        			name++;
        			memmove(name, aux, arr_name_len[n]);
        			name--;
        		}
        		name++;
        		name += arr_name_len[n];
        		if( (*name>='a' && *name<='z') || (*name>='A' && *name<='Z') || (*name>='0' && *name<='9') || *name=='_' || *name=='$'){
        			name -= arr_name_len[n];
        			memmove(name, aux, arr_name_len[n]);
        			name += arr_name_len[n];
        		}
        		name -= arr_name_len[n];
        	}
        	int vec_num = 2;									//constructor type
        	if( *(ptr_constructor[n])=='f' ){ vec_num += 0; }	//float
        	if( *(ptr_constructor[n]+3)=='2' ){ vec_num += 1; }	//vec2
        	if( *(ptr_constructor[n]+3)=='3' ){ vec_num += 2; }	//vec3
        	if( *(ptr_constructor[n]+3)=='4' ){ vec_num += 3; }	//vec4
        	pot = replace(arr_name[n], arr_name_[n], source);
        	pot = replace_common(arr_name_[n], arr_name[n], source, vec_num);				// Replace the variable name at the declaration and the constructor with original one.
        	pot = replace(aux, arr_name[n], source);
        	lenS += num_name*(strlen(arr_name_[n])-arr_name_len[n]);
        	free(arr_name[n]);
        	free(arr_name_[n]);
        	free(aux);
        }
        for(int m=0; m<num_constructor; m++){
    		if(ptr_constructor[m] != NULL){
    			free(ptr_constructor[m]);				Printf("Calling %d  ptr_constructor[%d] = %p !", __LINE__, m, ptr_constructor[m]);
    		}
    	}
    }
    free(ptr_constructor);				Printf("Calling %d  free ptr_constructor %p !", __LINE__, ptr_constructor);
    free(ptr_cut_in);				Printf("Calling %d  free ptr_cut_in %p !", __LINE__, ptr_cut_in);
	free(ptr_uniform);				Printf("Calling %d  free = %p !", __LINE__, ptr_uniform);
	free(arr_name);				Printf("Calling %d  free = %p !", __LINE__, arr_name);
	free(arr_name_);				Printf("Calling %d  free = %p !", __LINE__, arr_name_);
					Printf("\n&&&&\n\nEnd %d !\n\n&&&&\n", __LINE__);
	return;
}




#define replace_N(n, N)  \
				pot = snprintf(c, 5, "%d", n); \
				if((ptr[m])[N]==c[0]){ \
    				pot = snprintf(str, 20, "gl_FragData[%d]", N); \
    				pot = replace(str, "FragData" #n "", converted); \
    				ptr_cut_in = *converted + cut_in_offset; \
    				cut_in(ptr_cut_in, "layout(location = " #n ") out mediump vec4 FragData" #n ";\n", converted); \
    			}

int drawbuffer_fix(char **source, char **converted, int cut_in_offset){
	char * ptr_cut_in;
	int pot=0, count=0, len=0;
	char * ptr[20] = {NULL};
	pot = find("/* DRAWBUFFERS:", "/* DRAWBUFFERS:", source, ptr, &count);				Printf("Calling %d  count = %d !", __LINE__, count);
	for(int n=0; n<count; n++){
		if(Annotation_Detection(ptr[n], *source, 0)){//				Printf("Calling %d !", __LINE__);
			ptr[n] = NULL;						// If the string has been commented out, it is not processed.
		}
	}
	int ptr_num = 0;
	for(int x=0; x<count; x++){
		if(ptr[x] != NULL){
			ptr_num++;//				Printf("Calling %d !", __LINE__);
		}
	}
	if(ptr_num){
    	len = strlen("/* DRAWBUFFERS:");//				Printf("Calling %d !", __LINE__);
    	char str[20] = {' '};
    	char c[5] = {' '};
    	for(int m=0; m<count; m++){
    		if(ptr[m]==NULL){
    			continue;
    		}
    		ptr[m] += len;//				Printf("Calling %d !", __LINE__);
    		if(*(ptr[m]) == ' '){
    			ptr[m]++;//				Printf("Calling %d !", __LINE__);
    		}
    		if(*(ptr[m]) == '0' && (*(ptr[m]+1) == ' ' || *(ptr[m]+1) == '.')){				// If it is /* DRAWBUFFERS: 0 */ , this processing is not done.
    			//				Printf("Calling %d !", __LINE__);
    			return 0;
    		}
    		for(int N=0; ((ptr[m])[N] != ' ' && (ptr[m])[N] != '.') && N<8; N++){
    			/*if((ptr[m])[N]=='0'){
    				pot = snprintf(str, 20, "gl_FragData[%d]", N);
    				pot = replace(str, "FragData0", source);
    				pot = replace_common("0 es", "0 es \nlayout(location = 0) out mediump vec4 FragData0; \n", source, 1);
    			}
    			*///				Printf("Calling %d !", __LINE__);
    			replace_N(0, N)
    			replace_N(1, N)
    			replace_N(2, N)
    			replace_N(3, N)
    			replace_N(4, N)
    			replace_N(5, N)
    			replace_N(6, N)
    			replace_N(7, N)									// The color buffer specified by the shader is processed by vgpu.
    		}
    	}
    	//pot = replace("/* DRAWBUFFERS:", "/*", converted);//				Printf("Calling %d !", __LINE__);				// Delete the shader declaration statement.
		return 1;
	}else{
		return 0;
	}
}



void func_name_conv(char *A, char **source){				Printf("\n&&&&\n\nStart %d !\n\n&&&&\n", __LINE__);
	int pot = 0;
	int count = 0;
	int lenA = strlen(A);
	int lenS = strlen(*source);
	char ** ptrM = (char **)malloc( ((int)(lenS/lenA*0.3)+1)*sizeof(char *) );
	pot = find(A, A, source, ptrM, &count);
	
	char * conv = (char *)malloc(sizeof(char)*lenA+1);
	conv[lenA] = '\0';
	for(int x=0; x<lenA; x++){
		conv[x] = '#';
	}
	
	char * A_ = (char *)malloc(sizeof(char)*lenA+3);
	A_[lenA+2]='\0';
	A_[lenA+1]='_';
	A_[lenA]='_';				// Add '_' at the end of the variable name to avoid duplicate names, and you can add more.
	memmove(A_, A, lenA);
	
	int lenN;			// The length from ptrm to the end of source.
	char * ptrm;
	int isfunc = 0;
	for(int n=0; n<count; n++){
		ptrm = ptrM[n];
		ptrm += lenA;
		lenN = lenS - (ptrm - *source);
		for(int m=0; m<lenN; m++){
			if(ptrm[m]=='('){
				isfunc = 1;
				break;
    		}
			if(ptrm[m]==',' || ptrm[m]==';' || ptrm[m]=='=' || ptrm[m]=='\n'){
				isfunc = 0;
				break;
			}
			if(ptrm[m]=='+' || ptrm[m]=='-' || ptrm[m]=='*' || ptrm[m]=='/'){
				isfunc = 0;
				break;
			}
    	}
    	if(isfunc==0){
    		memmove(ptrM[n], conv, lenA);				// If it is not a function name, replace it with "####...".
    	}
    }
    pot = replace(conv, A_, source);					// "func_name" >> "func_name_"
    free(ptrM); ptrM=NULL;//				Printf("Calling %d !", __LINE__);
    free(conv); conv=NULL;//				Printf("Calling %d !", __LINE__);
    free(A_); A_=NULL;//				Printf("Calling %d !", __LINE__);
    				Printf("\n&&&&\n\nEnd %d !\n\n&&&&\n", __LINE__);
    return;
}