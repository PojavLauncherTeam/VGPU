// Some extra functions

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char * shaderconv(int, char **, char **, char *, int *, int *, int);
int find(char *, char *, char **, char **, int *);
int replace(char *, char *, char **);



/*
void glShaderSource (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length){	// Here length points to an array of different "lengths"; 
																											// count = number of "length" = number of shader sources.
 
 char * A[10] = {
  "#version 120"
  
 };
 char * B[10] = {
  "#version 320 es"
  
 };
 
 int number = 1;	// Number of strings to be processed
 
 GLint length1[count];
 
 
 GLchar * ptr = shaderconv (number, A, B, *string, length1, length, count);  // 传入原shader源码的指针
 
 const GLchar *const*string1 = (const GLchar *const*)(&ptr);
 
 gles_glShaderSource (shader, count, string1, length1);		// The length of the modified shader source code may change, so you have to pass a new length 1.
 
 free(ptr);		// Because the malloc memory block is used to hold the shader source code, the
}
*/


char * shaderconv(int number, char **A, char **B, char *string, int *length1, int *length, int count){
 
 char **ptrA;
 char *ptrA_;
 ptrA = &ptrA_;
 
 
 if(count == 1){	// In the case of a single shader source.
  
  if(length == NULL){
   *ptrA = (char *)malloc( (strlen(string)+1)*sizeof(char) );
   memmove(*ptrA, string, strlen(string));		// Copy the original shader source code to A memory block.
   (*ptrA)[strlen(string)] = '\0';
  }
  else{
   *ptrA = (char *)malloc( (*length+1)*sizeof(char) );
   memmove(*ptrA, string, *length);
   (*ptrA)[*length] = '\0';
  }
  
  
  for(int x = 0; x < number; x++){		// Replace one item by another.
   
   *length1 = replace(A[x], B[x], ptrA);	// Passes in the pointer to the string to be searched for, to be replaced, and the pointer to the original shader source code, and returns the length of the processed shader source code.
   										// Inside the function, the memory block pointed to by * ptrA is searched and modified.
   										// The result is then written to a new B memory block (created as A), and then free (* ptrA).
   										// Finally, the pointer to the B memory block is assigned to A * ptrA = ptrB.
   										// In this way, the next round of processing can access the results of the previous round.
  }
 }
 if(count > 1 && length != NULL){
  
  char *ptrA1;
  int all_len = 0;
  int all = 0;
  
  for(int i = 0; i < count; i++){		// For a number of different shader source code one by one.
   
   *ptrA = (char *)malloc( (length[i]+1)*sizeof(char) );
   memmove(*ptrA, string, length[i]);
   (*ptrA)[length[i]] = '\0';
   
   all_len += length[i];
   
   for(int x = 0; x < number; x++){		// Search item by item.
    int length1_ = 0;
    int count_ = 0;
    char * ptrM_[ (int)(strlen(*ptrA)/strlen(A[x]))+1 ];
    
    length1_ = find(A[x], B[x], ptrA, ptrM_, &count_);
    
    if(count_ != 0){
     length1[i] = length1_;
     all_len += length1_ - length[i];	// All _ len is updated each time with the difference (the length returned by the search-the original length).
    }
   }
   
   string += length[i];		// Update the source pointer to copy the correct source block to ptrA.
   all += length[i];
  }
  string -= all;
  all = 0;
  
  ptrA1 = (char *)malloc( (all_len+1)*sizeof(char) );		// Create the final output block.
  free(*ptrA);
  
  
  
  for(int i = 0; i < count; i++){		// For a number of different shader source code one by one.
   
   *ptrA = (char *)malloc( (length[i]+1)*sizeof(char) );
   memmove(*ptrA, string, length[i]);
   (*ptrA)[length[i]] = '\0';
   
   for(int x = 0; x < number; x++){		// Replace one item by another.
   
    length1[i] = replace(A[x], B[x], ptrA);
    
    
    
    
   }
   
   string += length[i];		// Update the source pointer to copy the correct source block to ptrA.
   all += length[i];
   
   memmove(ptrA1, *ptrA, length1[i]);	// Copy each processed shader source block to the total block.
   ptrA1 += length1[i];			// Update ptrA1.
  }
  string -= all;
  all = 0;
  
  free(*ptrA);
  ptrA1 -= all_len;
  *ptrA = ptrA1;
  (*ptrA)[all_len] = '\0';
 }

 return *ptrA;		// Returns a pointer to the completed memory block.

}



int find(char *A, char *B, char **ptrA, char **ptr_M, int *count1){
  
 char **ptrM;
 if(ptr_M != NULL){
  ptrM = ptr_M;
 }
 else{
  char * ptrM1[ (int)(strlen(*ptrA)/strlen(A))+1 ];
  ptrM = ptrM1;
 }
 
 int count = 0;
 char *ptr = NULL;
 int lenA, lenB, differ;
 lenA = strlen(A);
 lenB = strlen(B);
 differ = lenB - lenA;
 
 ptr = strstr(*ptrA, A);		// Gets the initial pointer.
 while(ptr != NULL){
  ptrM[count] = ptr;		// Assign the searched pointer to an array of external pointers.
  count++;
  for(int x = 0; x < lenA; x++){
   ptr[x] = '#';
  }
  ptr = strstr(*ptrA, A);
 }
 
 for(int i = 0; i < count; i++){
  memmove(ptrM[i], A, lenA);		// Replace the string back to the original.
 }
 
 if(count1 != NULL){
  *count1 = count;
 }
 
 return (int)strlen(*ptrA) + differ * count;		// Returns the modified length.
 
}



int replace(char *A, char *B, char **ptrA){
 
 int count = 0;
 char * ptrM[ (int)(strlen(*ptrA)/strlen(A))+1 ];
 int lenA, lenB, len_ptrA, len_ptrB;
 lenA = strlen(A);
 lenB = strlen(B);
 len_ptrA = strlen(*ptrA); 
 len_ptrB = find(A, B, ptrA, ptrM, &count);		// Obtain the length of the output block and the number of searched strings to be modified.
 
 if(count != 0){
  char *ptrB = (char *)malloc(len_ptrB + 1);
  ptrB[len_ptrB] = '\0';
  
  char *pA = *ptrA;
  char *pB = ptrB;			// Create an action pointer.
  int M_A;			// The difference between the pointer to the current ptrM array and the current pA.
  
  for(int x = 0; x < count; x++){
   
   M_A = ptrM[x] - pA;
   if(M_A > 0){
    memmove(pB, pA, M_A);		// Copy the previous block to ptrB.
    pA += M_A;
    pB += M_A;
   }
   memmove(pB, B, lenB);		// Copy B to ptrB.
   pA += lenA;
   pB += lenB;
  
  }
  if( (*ptrA+len_ptrA-1-pA) > 0 ){
   memmove(pB, pA, *ptrA+len_ptrA-pA);		// Copy the end block to ptrB.
  }
  
  free(*ptrA);
  *ptrA = ptrB;
  return len_ptrB;
 
 }
 else{
  
  return len_ptrB;		// Returns the modified length.
 }

}