#ifndef GLAPI
#define GLAPI extern
#endif


GLAPI GLint gluBuild2DMipmaps(GLenum target,
 	GLint internalFormat,
 	GLsizei width,
 	GLsizei height,
 	GLenum format,
 	GLenum type,
 	const void * data);
 	
 	