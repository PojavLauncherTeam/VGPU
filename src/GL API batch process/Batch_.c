// This is where the GL APIs will be batched.

#include <stdio.h>
#include <stdlib.h>


int get_length( char * );
char *go( char * );
int get_len1( char * );
void process1( char *, char *, int );
void process2( char *, char *, int );
void process3( char *, char *, int );
void process4( char *, char *, int );
void abc_ABC_conversion( char *, int );

int main(void){
 
 
 //  Reading the file.
 //  Here, A represents the text to be processed, 
 //  and B represents the text that has been processed.
 
 char * ptrA;
 int countA;
 FILE * fpA;
 size_t resultA;
 
 fpA = fopen ( "gl32.h", "rb" );
 if (fpA == NULL)
 {
  fputs ("File error", stderr);
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
 
 printf("%s \n %d \n", ptrA, countA);	// Print the text in the A memory block and the size.
 
 fclose (fpA);
 
 
 
 int countB = 358*4*16 +358*41 +50;  // Size of the output file.
  
 // 358 GLES functions.
 
 
 char * ptrB;
 
 ptrB = (char *)malloc( countB * sizeof(char) );
 
 
 char * ptr_A;
 char * ptr_B;
 ptr_A = ptrA;		// Copy the original pointer to the A and B memory block.
 ptr_B = ptrB;
 
 
 // Start using loop processing. 
 // Process a function statement in a loop iteration.
 // The result of each processing is written to B memory block in real time.
 
 
 int x = 0;
 
 int i = 0;			// The length of a function statement.
 int i_1 = 0;
 						// Create 4 small memory block.
 char m1[50];		// "PFN##PROC"
 char m2[50];		// " Tgl## = "
 char m3[50];		// "(PFN##PROC)"
 char m4[50];		// "load("gl##");\n"
 
 char * ptr1 = m1;
 char * ptr2 = m2;
 char * ptr3 = m3;
 char * ptr4 = m4;
 
 while( x < countA ){		// Begin formal processing.
  
  if(x > 0){
   while( !( *(ptrA-1) == '\n' && *ptrA == 'G' ) ){		// Check whether the string at the current position is "GLAPI".
   
   // while( *(ptrA-1) != '\n' || ( *ptrA != 'v' && *ptrA != 'G' ) ){
    
    if( x >= countA )
     break;
    
    *ptrB = *ptrA;		// Because we need to process the GL functions that start with "GLAPI".
    ptrA++;			// So what we don't process is written directly to the B memory block.
    ptrB++;
    
    x++;
   }
  }
  
  if( *ptrA == 'G' ){		// Begin formal processing.
   
   						// " GLAPI void gl## (void); "
   						// will be :
   						// " PFN##PROC Tgl## = (PFN##PROC)load("gl##"); "
   						
   						
   						
   i = get_length( ptrA );			// Get the length of the string for the current pending function.
   
   char * ptrA_1 = ptrA;
   ptrA_1 = go( ptrA_1 );		// Make the location ptrA_1 points to jumps to "gl##".
   i_1 = get_len1( ptrA_1 );		// Get the length of the "gl##".
   
   process1(ptr1, ptrA_1, i_1);	// Passing "gl##" to the first block.
   memmove(ptrB, ptr1, i_1 +7);		// Copy the processed block to the corresponding location of B.
   ptrB += i_1 +7;
   
   process2(ptr2, ptrA_1, i_1);
   memmove(ptrB, ptr2, i_1 +5);
   ptrB += i_1 +5;
   
   process3(ptr3, ptrA_1, i_1);
   memmove(ptrB, ptr3, i_1 +9);
   ptrB += i_1 +9;
   
   process4(ptr4, ptrA_1, i_1);
   memmove(ptrB, ptr4, i_1 +10);
   ptrB += i_1 +10;
   
   ptrA += i;
   
  }
  else{
   *ptrB = *ptrA;
   
   ptrA++;
   ptrB++;
   x++;
  }
  
  
 
 }
 
 
 
 
 FILE * fpB;
 size_t resultB;
 
 fpB = fopen ( "gl32_.h", "wb" );
 if (fpB == NULL)
 {
  fputs ("File error", stderr);
  exit (4);
 }
 
 
 resultB = fwrite (ptr_B, 1, countB, fpB);		// Write the file from the B memory block.
 if (resultB != countB)
 {
  fputs ("Writing error", stderr);
  exit (5);
 }
 
 printf("%s \n %d \n", ptr_B, countB);	// Print the text in the B memory block and the size.
 
 fclose (fpB);
 
 
 
 free(ptr_A);
 free(ptr_B);
 
 return 0;
 
}
 
 
 
int get_length( char * ptr ){
 
 int length = 0;
 while( *ptr != '\n' ){
  
  length++;
  ptr++;
 }
 
 return length + 1;		// The reason for "length + 1" is that we want the length to contain a '\n' .
 
}
 

char *go( char * ptr){
 
 while( *ptr != 'g' ){
  
  ptr++;
 }
 
 return ptr;
 
}


int get_len1( char * ptr ){
 
 int len = 0;		// "gl## (... "
 
 while( *ptr != '(' ){
  
  if( *ptr != ' ' )
   len++;
  
  ptr++;
 }
 
 return len;
 
}
  
  
  
  
 
	// "PFNgl##PROC"
	// " Tgl## = "
	// "(PFNgl##PROC)"
	// "load("gl##");\n"


void process1( char * p1, char *p2, int m){   	// m is the length of "##".
 
 memmove(p1, "PFN", 3);
 memmove(p1+3, p2, m);
 memmove(p1+3+m, "PROC", 4);
 //abc_ABC_conversion(p1, m+3+4);
 
 return;
}



void process2( char * p1, char *p2, int m){   
 
 memmove(p1, " T", 2);
 memmove(p1+2, p2, m);
 memmove(p1+2+m, " = ", 3);
 
 return;
}



void process3( char * p1, char *p2, int m){   
 
 memmove(p1, "(PFN", 4);
 memmove(p1+4, p2, m);
 memmove(p1+4+m, "PROC)", 5);
 //abc_ABC_conversion(p1, m+4+5);
 
 return;
}



void process4( char * p1, char *p2, int m){   
 
 memmove(p1, "load(\"", 6);
 memmove(p1+6, p2, m);
 memmove(p1+6+m, "\");\n", 4);
 
 return;
}


void abc_ABC_conversion( char * ptr, int m){
 
 for(int t = 0; t < m; t++){		// abc >> ABC
  
  if( *(ptr + t) == 'a' )
   *(ptr + t) = 'A';
  if( *(ptr + t) == 'b' )
   *(ptr + t) = 'B';
  if( *(ptr + t) == 'c' )
   *(ptr + t) = 'C';
  if( *(ptr + t) == 'd' )
   *(ptr + t) = 'D';
  if( *(ptr + t) == 'e' )
   *(ptr + t) = 'E';
  if( *(ptr + t) == 'f' )
   *(ptr + t) = 'F';
  if( *(ptr + t) == 'g' )
   *(ptr + t) = 'G';
  if( *(ptr + t) == 'h' )
   *(ptr + t) = 'H';
  if( *(ptr + t) == 'i' )
   *(ptr + t) = 'I';
  if( *(ptr + t) == 'j' )
   *(ptr + t) = 'J';
  if( *(ptr + t) == 'k' )
   *(ptr + t) = 'K';
  if( *(ptr + t) == 'l' )
   *(ptr + t) = 'L';
  if( *(ptr + t) == 'm' )
   *(ptr + t) = 'M';
  if( *(ptr + t) == 'n' )
   *(ptr + t) = 'N';
  if( *(ptr + t) == 'o' )
   *(ptr + t) = 'O';
  if( *(ptr + t) == 'p' )
   *(ptr + t) = 'P';
  if( *(ptr + t) == 'q' )
   *(ptr + t) = 'Q';
  if( *(ptr + t) == 'r' )
   *(ptr + t) = 'R';
  if( *(ptr + t) == 's' )
   *(ptr + t) = 'S';
  if( *(ptr + t) == 't' )
   *(ptr + t) = 'T';
  if( *(ptr + t) == 'u' )
   *(ptr + t) = 'U';
  if( *(ptr + t) == 'v' )
   *(ptr + t) = 'V';
  if( *(ptr + t) == 'w' )
   *(ptr + t) = 'W';
  if( *(ptr + t) == 'x' )
   *(ptr + t) = 'X';
  if( *(ptr + t) == 'y' )
   *(ptr + t) = 'Y';
  if( *(ptr + t) == 'z' )
   *(ptr + t) = 'Z';
  
 }
 
 return;
 
}
 
 
 
 

















/*

void modify_M( char * ptrm, int len ){
 
 *ptrm = 'V';
 *(ptrm + len - 2) = '<';
 
 int t = 0;
 
 while( t < len ){
  
  if( *(ptrm + t) == 'g' ){
   
   *(ptrm + t + 1) = 'N';		// "gl" >> "gN"
   
   break;
  }
 
 t++;
 
 }
 
 							   // ↓     ↓			      ↓			    ↓ ↓↓↓↓
 *(ptrm + len) = '\n';			// Void gNCompileShader( gLuint shader )<\n\n}\n\n
 *(ptrm + len + 1) = '}';
 *(ptrm + len + 2) = '\n';
 *(ptrm + len + 3) = '\n';
 
 int z = 0;
 
 while( z < len ){
  
  if( *(ptrm + z) == 'G' && *(ptrm + z + 1) == 'L' )
   
   *(ptrm + z) = 'g';		// "GL" >> "gL"
  
  if( *(ptrm + z) == 'c' && *(ptrm + z + 1) == 'o' && *(ptrm + z + 2) == 'n' )
   
   *(ptrm + z) = 'C';		// "const" >> "Const"
  
  if( z > 4 ){
   
   if( *(ptrm + z) == 'v' && *(ptrm + z + 1) == 'o' )
    
    *(ptrm + z) = 'W';		// "void" >> "Woid"
  
  }
 
 z++;
 
 }
 
 return;
 
}
 
*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 











