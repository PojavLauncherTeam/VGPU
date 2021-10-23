#include "glu_pack.h"


GLint gluBuild2DMipmaps(GLenum target,
 	GLint internalFormat,
 	GLsizei width,
 	GLsizei height,
 	GLenum format,
 	GLenum type,
 	const void * data){
 	
 	Printf("Calling gluBuild2DMipmaps");
 	gl4es_glTexImage2D(target,
 	internalFormat,
 	0,
 	width,
 	height,
 	0,
 	format,
 	type,
 	data);
 	
 	glGenerateMipmap(target);
 	
 	if(glGetError()==GL_NO_ERROR){
 		return 0;
 	}
 	return -1;
 	
}