


extern char * shaderconv(int, char **, char **, char *, int *, int *, int);
extern int find(char *, char *, char **, char **, int *);
extern int replace(char *, char *, char **);





/*
char * shaderconv(int number, char ** A, char ** B, char * string, int * length1, int * length, int count);
int find(char *A, char *B, char **ptrA, char **ptr_M, int *count1);
##		find("#version 320 es", "#version 320 es", &string, NULL, NULL) );
## 		// When you just need to find a string, you can write something like this.
int replace(char *A, char *B, char **ptrA);
*/