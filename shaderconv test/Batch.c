// This is where the shader source code will be batched.

#include <stdio.h>
#include <stdlib.h>

#include "shaderconv.h"
#include "shader.h"






int main(void){
 
 
 //  Reading the file.
 //  Here, A represents the text to be processed, 
 //  and B represents the text that has been processed.
 
 
 
 char * ptrA;
 int countA;
 FILE * fpA;
 size_t resultA;
 
 fpA = fopen ( "pack.c", "rb" );
 if (fpA == NULL)
 {
  fputs ("File error 1", stderr);
  exit (1);
 }
 
 fseek (fpA, 0, SEEK_END);
 countA = ftell (fpA);		// Getting the number of file bytes.
 rewind (fpA);
 
 ptrA = (char*) malloc (sizeof(char)*countA);	// Allocate A memory block.
 if (ptrA == NULL)
 {
  fputs ("Memory error", stderr); 
  exit (2);
 }
 
 resultA = fread (ptrA, 1, countA, fpA);		// Read the file to the A memory block.
 if (resultA != countA)
 {
  fputs ("Reading error", stderr);
  exit (3);
 }
 
// printf("%s \n %d \n", ptrA, countA);	// Print the text in the A memory block and the size.
 
 fclose (fpA);
 
 int countB = countA*2+500*2;
 //char * ptrB = (char *)malloc(countB+1);
 //memmove(ptrB, ptrA, countA);
 //ptrB[countB]='\0';

 
 
 
 // char m[] = "#version 120\n\n #version 130  \n #version 120";        printf("Calling %d \n", __LINE__);
 
	int pot;        printf("Calling %d \n", __LINE__);
	char ** ptr_arr = (char **)malloc(500*sizeof(char*));        printf("Calling %d \n", __LINE__);
	int num_GLAPI = 0;        printf("Calling %d \n", __LINE__);
	pot = find("GLAPI ", "GLAPI ", &ptrA, ptr_arr, &num_GLAPI);        printf("Calling %d \n", __LINE__);
	
	char ** arr_cut_in = (char **)malloc(num_GLAPI*sizeof(char*));        printf("Calling %d \n", __LINE__);
	char ** arr_string = (char **)malloc(num_GLAPI*sizeof(char*));        printf("Calling %d \n", __LINE__);
	
	int len_GLAPI = strlen("GLAPI ");        printf("Calling %d \n", __LINE__);
	int len_return = strlen("return ");        printf("Calling %d \n", __LINE__);
	int isreturn = 0;        printf("Calling %d \n", __LINE__);
	char * ptr;        printf("Calling %d \n", __LINE__);
	char * ptr_end;        printf("Calling %d \n", __LINE__);
	for(int n=0; n<num_GLAPI; n++){
		ptr = ptr_arr[n];        printf("Calling %d \n", __LINE__);
		ptr += len_GLAPI;        printf("Calling %d \n", __LINE__);
		if(*ptr=='G' && *(ptr+1)=='L'){
			isreturn = 440;        printf("Calling %d \n", __LINE__);
		}else{
			isreturn = 0;        printf("Calling %d \n", __LINE__);
		}
		
		while(*ptr!='g' && *(ptr+1)!='l'){
			ptr++;        //printf("Calling %d \n", __LINE__);
		}
		
		ptr_end = ptr;        printf("Calling %d \n", __LINE__);
		while(*ptr_end!=';'){
			ptr_end++;        //printf("Calling %d \n", __LINE__);
		}
		arr_cut_in[n] = ptr_end+1;        printf("Calling %d \n", __LINE__);
		
		int len = ptr_end - ptr;        printf("Calling %d \n", __LINE__);
		len++;        printf("Calling %d \n", __LINE__);
		len += 0;        printf("Calling %d  len = %d \n", __LINE__, len);
		char * ptr_cut = (char *)malloc(len+1);        printf("Calling %d \n", __LINE__);
		ptr_cut[len] = '\0';        printf("Calling %d \n", __LINE__);
		arr_string[n] = ptr_cut;        printf("Calling %d \n", __LINE__);
		
		int name_len = len_name(ptr);        printf("Calling %d \n", __LINE__);
		memmove(ptr_cut, "\n\n ", 3);        printf("Calling %d \n", __LINE__);
		ptr_cut += 3;        printf("Calling %d \n", __LINE__);
		if(isreturn){
			memmove(ptr_cut, "return ", len_return);        printf("Calling %d  isreturn = %d \n", __LINE__, isreturn);
			ptr_cut += len_return;        printf("Calling %d \n", __LINE__);
		}
		memmove(ptr_cut, ptr, name_len+2);        printf("Calling %d \n", __LINE__);				// copy "glFunctionName ("
		ptr += name_len+2;        printf("Calling %d \n", __LINE__);
		ptr_cut += name_len+2;
		len -= name_len+2;        printf("Calling %d \n", __LINE__);
		while(*ptr!=';'){				// copy each parameter name.
			if(*ptr=='G' && *(ptr+1)=='L'){
				while(*ptr!=' '){
					ptr++;        printf("Calling %d \n", __LINE__);
				}
				continue;
			}
			if(*ptr==' ' || *ptr=='*'){
				ptr++;        printf("Calling %d \n", __LINE__);
				continue;
			}
			if(strncmp(ptr, "const", 5)==0){
				ptr += 5;        printf("Calling %d \n", __LINE__);
				continue;
			}
			if(strncmp(ptr, "void", 4)==0){
				ptr += 4;        printf("Calling %d \n", __LINE__);
				continue;
			}
			name_len = len_name(ptr);        //printf("Calling %d \n", __LINE__);
			name_len++;        //printf("Calling %d \n", __LINE__);
			memmove(ptr_cut, ptr, name_len);        printf("Calling %d \n", __LINE__);
			ptr += name_len;        //printf("Calling %d \n", __LINE__);
			ptr_cut += name_len;        //printf("Calling %d \n", __LINE__);
			
		}
		
		memmove(ptr_cut, ";\n\n}\n", 5);
		ptr_cut += 5;        printf("Calling %d \n", __LINE__);
		*ptr_cut = '\0';        printf("Calling %d \n", __LINE__);
		
	}
	
	cut_in_common(arr_cut_in, arr_string, num_GLAPI, &ptrA);        printf("Calling %d \n", __LINE__);
	
	for(int n=0; n<num_GLAPI; n++){
		free(arr_string[n]);        //printf("Calling %d \n", __LINE__);
	}
	
	free(arr_string);        printf("Calling %d \n", __LINE__);
	free(arr_cut_in);        printf("Calling %d \n", __LINE__);
	free(ptr_arr);        printf("Calling %d \n", __LINE__);
	
	
	
	
	

 

 //int countB;
 countA = strlen(ptrA);
 //int countB;
 //countB = strlen(ptrB);
 

 
 FILE * fpB;
 size_t resultB;
 
 fpB = fopen ( "pack_.c", "wb" );
 if (fpB == NULL)
 {
  fputs ("File error 2", stderr);
  exit (4);
 }
 
 
 resultB = fwrite (ptrA, 1, countA, fpB);		// Write the file from the B memory block.
 if (resultB != countA)
 {
  fputs ("Writing error", stderr);
  exit (5);
 }
 
// printf("%s \n %d \n", ptrB, countB);	// Print the text in the B memory block and the size.
 
 fclose (fpB);
 
 
 
 free(ptrA);
 //free(ptrB);
 
 return 0;
 
}
 
 



 
 
 
 
 
 
 
 
 










