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
 
 fpA = fopen ( "shader.fsh", "rb" );
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
 
 
 char * ptrB = (char *)malloc(countA+1);
 memmove(ptrB, ptrA, countA);
 ptrB[countA]='\0';

 
 
 
 // char m[] = "#version 120\n\n #version 130  \n #version 120";
 
 char * m = ptrA;
 
 //printf("########ShaderSource\n%s\n########\n", m);
 countA = replace("#version 120", "#version 320 es", &ptrB);
 num_add_f(&ptrB);
 //printf("########ConvertShader\n%s\n########\n", ptrB);
 shader_conv_(&ptrA, &ptrB);
 
 int countB;
 countB = strlen(ptrB);
 
 // gles_glShaderSource (shader, count, string1, length1);
 
 //printf("########NewConvertShader\n%s\n\n%d\n########\n", ptrB, countB);
  
 /*for(int x = 0; x < count; x++){
  printf("length1[%d] = %d  \n", x, length1[x]);
 }
 */
 //printf("\nfind() return %d \n", find("#version 320 es", "#version 320 es", &ptrB, NULL, NULL) );
 									// When you just need to find a string, you can write something like this.
 

 
 FILE * fpB;
 size_t resultB;
 
 fpB = fopen ( "_shader.fsh", "wb" );
 if (fpB == NULL)
 {
  fputs ("File error 2", stderr);
  exit (4);
 }
 
 
 resultB = fwrite (ptrB, 1, countB, fpB);		// Write the file from the B memory block.
 if (resultB != countB)
 {
  fputs ("Writing error", stderr);
  exit (5);
 }
 
// printf("%s \n %d \n", ptrB, countB);	// Print the text in the B memory block and the size.
 
 fclose (fpB);
 
 
 
 free(ptrA);
 free(ptrB);
 
 return 0;
 
}
 
 



 
 
 
 
 
 
 
 
 










