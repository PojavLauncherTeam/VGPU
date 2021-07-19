// OpenGL 2.0 >> 3.0

#include "load.h"
#include "load_.h"
#include "pack.h"
#include "toext.h"

#include <stdio.h>
#include <android/log.h>

#define Printf(...) __android_log_print(ANDROID_LOG_INFO, "LIBGL", __VA_ARGS__)


int loaded = 0;

#define LOAD_GLES if(loaded == 0){load_all();loaded = 1;}

// GLuint glCreateShader( GLenum type )
// {    LOAD_GLES
//  return gles_glCreateShader( type );     // Because gles_glFunc() has been declared as an external type in load.h,
// }								      // So you can use these gles_glFunc() directly here. 
									      // However, their function definitions are in load_.h.




// GL_VERSION_1_0
void glCullFace (GLenum mode){    LOAD_GLES        
 gles_glCullFace (mode);

}

void glFrontFace (GLenum mode){    LOAD_GLES        
 gles_glFrontFace (mode);

}

void glHint (GLenum target, GLenum mode){    LOAD_GLES        
 gles_glHint (target, mode);

}

void glLineWidth (GLfloat width){    LOAD_GLES        
 gles_glLineWidth (width);

}

void glPointSize (GLfloat size){    LOAD_GLES        
;// gles_glPointSize (size);

}

void glPolygonMode (GLenum face, GLenum mode){    LOAD_GLES        
;// gles_glPolygonMode (face, mode);

}

void glScissor (GLint x, GLint y, GLsizei width, GLsizei height){    LOAD_GLES        
 gles_glScissor (x, y, width, height);

}

void glTexParameterf (GLenum target, GLenum pname, GLfloat param){    LOAD_GLES        
 gles_glTexParameterf (target, pname, param);

}

void glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params){    LOAD_GLES        
 gles_glTexParameterfv (target, pname, params);

}

void glTexParameteri (GLenum target, GLenum pname, GLint param){    LOAD_GLES        
 gles_glTexParameteri (target, pname, param);

}

void glTexParameteriv (GLenum target, GLenum pname, const GLint *params){    LOAD_GLES        
 gles_glTexParameteriv (target, pname, params);

}

void glTexImage1D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels){    LOAD_GLES        
 gles_glTexImage2D (GL_TEXTURE_2D, level, internalformat, width, 1, border, format, type, pixels);		// pack.

}

void glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels){    LOAD_GLES        
 gles_glTexImage2D (target, level, internalformat, width, height, border, format, type, pixels);	Printf("Calling glTexImage2D() succeed!");

}

void glDrawBuffer (GLenum buf){    LOAD_GLES        
 gles_glDrawBuffers (1, &buf);

}

void glClear (GLbitfield mask){    LOAD_GLES        
 gles_glClear (mask);	Printf("Calling glClear() succeed!");

}

void glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha){    LOAD_GLES        
 gles_glClearColor (red, green, blue, alpha);	Printf("Calling glClearColor() succeed!");

}

void glClearStencil (GLint s){    LOAD_GLES        
 gles_glClearStencil (s);

}

void glClearDepth (GLdouble depth){    LOAD_GLES        
 gles_glClearDepthf ((GLfloat)depth);

}

void glStencilMask (GLuint mask){    LOAD_GLES        
 gles_glStencilMask (mask);

}

void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha){    LOAD_GLES        
 gles_glColorMask (red, green, blue, alpha);

}

void glDepthMask (GLboolean flag){    LOAD_GLES        
 gles_glDepthMask (flag);

}

void glDisable (GLenum cap){    LOAD_GLES        
 gles_glDisable (cap);

}

void glEnable (GLenum cap){    LOAD_GLES        
 gles_glEnable (cap);

}

void glFinish (void){    LOAD_GLES        
 gles_glFinish ();

}

void glFlush (void){    LOAD_GLES        
 gles_glFlush ();

}

void glBlendFunc (GLenum sfactor, GLenum dfactor){    LOAD_GLES        
 gles_glBlendFunc (sfactor, dfactor);

}

void glLogicOp (GLenum opcode){    LOAD_GLES        
;// gles_glLogicOp (opcode);

}

void glStencilFunc (GLenum func, GLint ref, GLuint mask){    LOAD_GLES        
 gles_glStencilFunc (func, ref, mask);

}

void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass){    LOAD_GLES        
 gles_glStencilOp (fail, zfail, zpass);

}

void glDepthFunc (GLenum func){    LOAD_GLES        
 gles_glDepthFunc (func);

}

void glPixelStoref (GLenum pname, GLfloat param){    LOAD_GLES        
 GLint param1 = (GLint)param;
 gles_glPixelStorei (pname, param1);		// pack.

}

void glPixelStorei (GLenum pname, GLint param){    LOAD_GLES        
 gles_glPixelStorei (pname, param);

}

void glReadBuffer (GLenum src){    LOAD_GLES        
 gles_glReadBuffer (src);

}

void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels){    LOAD_GLES        
 gles_glReadPixels (x, y, width, height, format, type, pixels);

}

void glGetBooleanv (GLenum pname, GLboolean *data){    LOAD_GLES        
 gles_glGetBooleanv (pname, data);

}

void glGetDoublev (GLenum pname, GLdouble *data){    LOAD_GLES        
 GLfloat data1[16];
 GLdouble data2[16];
 gles_glGetFloatv (pname, data1);		// pack.
 for(int i = 0; i < 16; i++){
  data2[i] = (GLdouble)data1[i];
 }
 data = data2;

}

GLenum glGetError (void){    LOAD_GLES        
 return gles_glGetError ();

}

void glGetFloatv (GLenum pname, GLfloat *data){    LOAD_GLES        
 gles_glGetFloatv (pname, data);

}

void glGetIntegerv (GLenum pname, GLint *data){    LOAD_GLES        
 if(pname == GL_MAX_TEXTURE_SIZE){
  Printf("Check GL_MAX_TEXTURE_SIZE succeed!");
 }
 gles_glGetIntegerv (pname, data);	Printf("Calling glGetIntegerv() succeed!");

}

const GLubyte *glGetString (GLenum name){    LOAD_GLES        
 if(name == GL_RENDERER){
  return (const GLubyte *)"vgpu 1.1";
 }
 if(name == GL_VERSION){
  return (const GLubyte *)"4.4";
 }
 if(name == GL_VENDOR){
  return (const GLubyte *)"vgpu";
 }
 if(name == GL_SHADING_LANGUAGE_VERSION){
  return (const GLubyte *)"440";
 }
 
 return gles_glGetString (name);	Printf("Calling glGetString() succeed!");

}

void glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, void *pixels){    LOAD_GLES        
;// gles_glGetTexImage (target, level, format, type, pixels);

}

void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params){    LOAD_GLES        
 gles_glGetTexParameterfv (target, pname, params);

}

void glGetTexParameteriv (GLenum target, GLenum pname, GLint *params){    LOAD_GLES        
 gles_glGetTexParameteriv (target, pname, params);

}

void glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params){    LOAD_GLES        
 gles_glGetTexLevelParameterfv (target, level, pname, params);

}

void glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params){    LOAD_GLES        
 gles_glGetTexLevelParameteriv (target, level, pname, params);

}

GLboolean glIsEnabled (GLenum cap){    LOAD_GLES        
 return gles_glIsEnabled (cap);

}

void glDepthRange (GLdouble n, GLdouble f){    LOAD_GLES        
 GLfloat n1 = (GLfloat)n;
 GLfloat f1 = (GLfloat)f;
 gles_glDepthRangef (n1, f1);		// pack.

}

void glViewport (GLint x, GLint y, GLsizei width, GLsizei height){    LOAD_GLES        
 gles_glViewport (x, y, width, height);

}



// GL_VERSION_1_1
void glDrawArrays (GLenum mode, GLint first, GLsizei count){    LOAD_GLES        
 gles_glDrawArrays (mode, first, count);

}

void glDrawElements (GLenum mode, GLsizei count, GLenum type, const void *indices){    LOAD_GLES        
 gles_glDrawElements (mode, count, type, indices);

}

void glGetPointerv (GLenum pname, void **params){    LOAD_GLES        
 gles_glGetPointerv (pname, params);

}

void glPolygonOffset (GLfloat factor, GLfloat units){    LOAD_GLES        
 gles_glPolygonOffset (factor, units);

}

void glCopyTexImage1D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border){    LOAD_GLES        
 gles_glCopyTexImage2D (GL_TEXTURE_2D, level, internalformat, x, y, width, 1, border);		// pack.

}

void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border){    LOAD_GLES        
 gles_glCopyTexImage2D (target, level, internalformat, x, y, width, height, border);

}

void glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width){    LOAD_GLES        
 gles_glCopyTexSubImage2D (GL_TEXTURE_2D, level, xoffset, 0, x, y, width, 1);		// pack.

}

void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height){    LOAD_GLES        
 gles_glCopyTexSubImage2D (target, level, xoffset, yoffset, x, y, width, height);

}

void glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels){    LOAD_GLES        
 gles_glTexSubImage2D (GL_TEXTURE_2D, level, xoffset, 0, width, 1, format, type, pixels);		// pack.

}

void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels){    LOAD_GLES        
 gles_glTexSubImage2D (target, level, xoffset, yoffset, width, height, format, type, pixels);

}

void glBindTexture (GLenum target, GLuint texture){    LOAD_GLES        
 gles_glBindTexture (target, texture);

}

void glDeleteTextures (GLsizei n, const GLuint *textures){    LOAD_GLES        
 gles_glDeleteTextures (n, textures);

}

void glGenTextures (GLsizei n, GLuint *textures){    LOAD_GLES        
 gles_glGenTextures (n, textures);

}

GLboolean glIsTexture (GLuint texture){    LOAD_GLES        
 return gles_glIsTexture (texture);

}



// GL_VERSION_1_2
void glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices){    LOAD_GLES        
 gles_glDrawRangeElements (mode, start, end, count, type, indices);

}

void glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels){    LOAD_GLES        
 gles_glTexImage3D (target, level, internalformat, width, height, depth, border, format, type, pixels);

}

void glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels){    LOAD_GLES        
 gles_glTexSubImage3D (target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);

}

void glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height){    LOAD_GLES        
 gles_glCopyTexSubImage3D (target, level, xoffset, yoffset, zoffset, x, y, width, height);

}



// GL_VERSION_1_3
void glActiveTexture (GLenum texture){    LOAD_GLES        
 gles_glActiveTexture (texture);

}

void glSampleCoverage (GLfloat value, GLboolean invert){    LOAD_GLES        
 gles_glSampleCoverage (value, invert);

}

void glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data){    LOAD_GLES        
 gles_glCompressedTexImage3D (target, level, internalformat, width, height, depth, border, imageSize, data);

}

void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data){    LOAD_GLES        
 gles_glCompressedTexImage2D (target, level, internalformat, width, height, border, imageSize, data);

}

void glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data){    LOAD_GLES        
 gles_glCompressedTexImage2D (GL_TEXTURE_2D, level, internalformat, width, 1, border, imageSize, data);		// pack.

}

void glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data){    LOAD_GLES        
 gles_glCompressedTexSubImage3D (target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);

}

void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data){    LOAD_GLES        
 gles_glCompressedTexSubImage2D (target, level, xoffset, yoffset, width, height, format, imageSize, data);

}

void glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data){    LOAD_GLES        
 gles_glCompressedTexSubImage2D (GL_TEXTURE_2D, level, xoffset, 0, width, 1, format, imageSize, data);		// pack.

}

void glGetCompressedTexImage (GLenum target, GLint level, void *img){    LOAD_GLES        
;// gles_glGetCompressedTexImage (target, level, img);

}



// GL_VERSION_1_4
void glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha){    LOAD_GLES        
 gles_glBlendFuncSeparate (sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);

}

void glMultiDrawArrays (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount){    LOAD_GLES        
 for(GLsizei i = 0; i < drawcount; i++){
  gles_glDrawArrays (mode, first[i], count[i]);		// pack.	Here "first" points to an array of type GLint, which stores many different "first". "count" is the same.
 }

}

void glMultiDrawElements (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount){    LOAD_GLES        
 for(GLsizei i = 0; i < drawcount; i++){
  gles_glDrawElements (mode, count[i], type, indices[i]);		// pack.
 }

}

void glPointParameterf (GLenum pname, GLfloat param){    LOAD_GLES        
;// gles_glPointParameterf (pname, param);

}

void glPointParameterfv (GLenum pname, const GLfloat *params){    LOAD_GLES        
;// gles_glPointParameterfv (pname, params);

}

void glPointParameteri (GLenum pname, GLint param){    LOAD_GLES        
;// gles_glPointParameteri (pname, param);

}

void glPointParameteriv (GLenum pname, const GLint *params){    LOAD_GLES        
;// gles_glPointParameteriv (pname, params);

}

void glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha){    LOAD_GLES        
 gles_glBlendColor (red, green, blue, alpha);

}

void glBlendEquation (GLenum mode){    LOAD_GLES        
 gles_glBlendEquation (mode);

}



// GL_VERSION_1_5
void glGenQueries (GLsizei n, GLuint *ids){    LOAD_GLES        
 gles_glGenQueries (n, ids);

}

void glDeleteQueries (GLsizei n, const GLuint *ids){    LOAD_GLES        
 gles_glDeleteQueries (n, ids);

}

GLboolean glIsQuery (GLuint id){    LOAD_GLES        
 return gles_glIsQuery (id);

}

void glBeginQuery (GLenum target, GLuint id){    LOAD_GLES        
 gles_glBeginQuery (target, id);

}

void glEndQuery (GLenum target){    LOAD_GLES        
 gles_glEndQuery (target);

}

void glGetQueryiv (GLenum target, GLenum pname, GLint *params){    LOAD_GLES        
 gles_glGetQueryiv (target, pname, params);

}

void glGetQueryObjectiv (GLuint id, GLenum pname, GLint *params){    LOAD_GLES        
;// gles_glGetQueryObjectiv (id, pname, params);

}

void glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint *params){    LOAD_GLES        
 gles_glGetQueryObjectuiv (id, pname, params);

}

void glBindBuffer (GLenum target, GLuint buffer){    LOAD_GLES        
 gles_glBindBuffer (target, buffer);

}

void glDeleteBuffers (GLsizei n, const GLuint *buffers){    LOAD_GLES        
 gles_glDeleteBuffers (n, buffers);

}

void glGenBuffers (GLsizei n, GLuint *buffers){    LOAD_GLES        
 gles_glGenBuffers (n, buffers);

}

GLboolean glIsBuffer (GLuint buffer){    LOAD_GLES        
 return gles_glIsBuffer (buffer);

}

void glBufferData (GLenum target, GLsizeiptr size, const void *data, GLenum usage){    LOAD_GLES        
 gles_glBufferData (target, size, data, usage);

}

void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void *data){    LOAD_GLES        
 gles_glBufferSubData (target, offset, size, data);

}

void glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, void *data){    LOAD_GLES        
;// gles_glGetBufferSubData (target, offset, size, data);

}

void *glMapBuffer (GLenum target, GLenum access){    LOAD_GLES        
 return gles_glMapBufferRange (target, 0, GL_BUFFER_SIZE, access);		// pack.

}

GLboolean glUnmapBuffer (GLenum target){    LOAD_GLES        
 return gles_glUnmapBuffer (target);

}

void glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params){    LOAD_GLES        
 gles_glGetBufferParameteriv (target, pname, params);

}

void glGetBufferPointerv (GLenum target, GLenum pname, void **params){    LOAD_GLES        
 gles_glGetBufferPointerv (target, pname, params);

}



// GL_VERSION_2_0
void glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha){    LOAD_GLES        
 gles_glBlendEquationSeparate (modeRGB, modeAlpha);

}

void glDrawBuffers (GLsizei n, const GLenum *bufs){    LOAD_GLES        
 gles_glDrawBuffers (n, bufs);

}

void glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass){    LOAD_GLES        
 gles_glStencilOpSeparate (face, sfail, dpfail, dppass);

}

void glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask){    LOAD_GLES        
 gles_glStencilFuncSeparate (face, func, ref, mask);

}

void glStencilMaskSeparate (GLenum face, GLuint mask){    LOAD_GLES        
 gles_glStencilMaskSeparate (face, mask);

}

void glAttachShader (GLuint program, GLuint shader){    LOAD_GLES        
 gles_glAttachShader (program, shader);

}

void glBindAttribLocation (GLuint program, GLuint index, const GLchar *name){    LOAD_GLES        
 gles_glBindAttribLocation (program, index, name);

}

void glCompileShader (GLuint shader){    LOAD_GLES        
 gles_glCompileShader (shader);

}

GLuint glCreateProgram (void){    LOAD_GLES        
 return gles_glCreateProgram ();

}

GLuint glCreateShader (GLenum type){    LOAD_GLES        
 return gles_glCreateShader (type);

}

void glDeleteProgram (GLuint program){    LOAD_GLES        
 gles_glDeleteProgram (program);

}

void glDeleteShader (GLuint shader){    LOAD_GLES        
 gles_glDeleteShader (shader);

}

void glDetachShader (GLuint program, GLuint shader){    LOAD_GLES        
 gles_glDetachShader (program, shader);

}

void glDisableVertexAttribArray (GLuint index){    LOAD_GLES        
 gles_glDisableVertexAttribArray (index);

}

void glEnableVertexAttribArray (GLuint index){    LOAD_GLES        
 gles_glEnableVertexAttribArray (index);

}

void glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name){    LOAD_GLES        
 gles_glGetActiveAttrib (program, index, bufSize, length, size, type, name);

}

void glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name){    LOAD_GLES        
 gles_glGetActiveUniform (program, index, bufSize, length, size, type, name);

}

void glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders){    LOAD_GLES        
 gles_glGetAttachedShaders (program, maxCount, count, shaders);

}

GLint glGetAttribLocation (GLuint program, const GLchar *name){    LOAD_GLES        
 return gles_glGetAttribLocation (program, name);

}

void glGetProgramiv (GLuint program, GLenum pname, GLint *params){    LOAD_GLES        
 gles_glGetProgramiv (program, pname, params);

}

void glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog){    LOAD_GLES        
 gles_glGetProgramInfoLog (program, bufSize, length, infoLog);

}

void glGetShaderiv (GLuint shader, GLenum pname, GLint *params){    LOAD_GLES        
 gles_glGetShaderiv (shader, pname, params);

}

void glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog){    LOAD_GLES        
 gles_glGetShaderInfoLog (shader, bufSize, length, infoLog);

}

void glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source){    LOAD_GLES        
 gles_glGetShaderSource (shader, bufSize, length, source);

}

GLint glGetUniformLocation (GLuint program, const GLchar *name){    LOAD_GLES        
 return gles_glGetUniformLocation (program, name);

}

void glGetUniformfv (GLuint program, GLint location, GLfloat *params){    LOAD_GLES        
 gles_glGetUniformfv (program, location, params);

}

void glGetUniformiv (GLuint program, GLint location, GLint *params){    LOAD_GLES        
 gles_glGetUniformiv (program, location, params);

}

void glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble *params){    LOAD_GLES        
 GLfloat params1 = (GLfloat)(*params);
 gles_glGetVertexAttribfv (index, pname, &params1);		// pack.

}

void glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params){    LOAD_GLES        
 gles_glGetVertexAttribfv (index, pname, params);

}

void glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params){    LOAD_GLES        
 gles_glGetVertexAttribiv (index, pname, params);

}

void glGetVertexAttribPointerv (GLuint index, GLenum pname, void **pointer){    LOAD_GLES        
 gles_glGetVertexAttribPointerv (index, pname, pointer);

}

GLboolean glIsProgram (GLuint program){    LOAD_GLES        
 return gles_glIsProgram (program);

}

GLboolean glIsShader (GLuint shader){    LOAD_GLES        
 return gles_glIsShader (shader);

}

void glLinkProgram (GLuint program){    LOAD_GLES        
 gles_glLinkProgram (program);

}

void glShaderSource (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length){    LOAD_GLES        
 
 char * A[11] = {
  "#version 110",
  "#version 120",
  "#version 130",
  "#version 330",
  "#version 400",
  "#version 410",
  "#version 420",
  "#version 430",
  "#version 440",
  "#version 450",
  "#version 460"
  
 };
 char * B[11] = {
  "#version 320 es",
  "#version 320 es",
  "#version 320 es",
  "#version 320 es",
  "#version 320 es",
  "#version 320 es",
  "#version 320 es",
  "#version 320 es",
  "#version 320 es",
  "#version 320 es",
  "#version 320 es"
  
 };
 
 int number = 11;	// Number of strings to be processed.
 
 GLint length1[count];
 
 
 GLchar * ptr;
 ptr = shaderconv (number, A, B, (GLchar*)*string, length1, (GLint*)length, count);
 
 const GLchar *const*string1 = (const GLchar *const*)(&ptr);
 
 if(length == NULL){
  gles_glShaderSource (shader, count, string1, NULL);
 }
 else{
  gles_glShaderSource (shader, count, string1, length1);
 }
 Printf("Calling glShaderSource() succeed!");
 
 free(ptr);

}

void glUseProgram (GLuint program){    LOAD_GLES        
 gles_glUseProgram (program);

}

void glUniform1f (GLint location, GLfloat v0){    LOAD_GLES        
 gles_glUniform1f (location, v0);

}

void glUniform2f (GLint location, GLfloat v0, GLfloat v1){    LOAD_GLES        
 gles_glUniform2f (location, v0, v1);

}

void glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2){    LOAD_GLES        
 gles_glUniform3f (location, v0, v1, v2);

}

void glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3){    LOAD_GLES        
 gles_glUniform4f (location, v0, v1, v2, v3);

}

void glUniform1i (GLint location, GLint v0){    LOAD_GLES        
 gles_glUniform1i (location, v0);

}

void glUniform2i (GLint location, GLint v0, GLint v1){    LOAD_GLES        
 gles_glUniform2i (location, v0, v1);

}

void glUniform3i (GLint location, GLint v0, GLint v1, GLint v2){    LOAD_GLES        
 gles_glUniform3i (location, v0, v1, v2);

}

void glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3){    LOAD_GLES        
 gles_glUniform4i (location, v0, v1, v2, v3);

}

void glUniform1fv (GLint location, GLsizei count, const GLfloat *value){    LOAD_GLES        
 gles_glUniform1fv (location, count, value);

}

void glUniform2fv (GLint location, GLsizei count, const GLfloat *value){    LOAD_GLES        
 gles_glUniform2fv (location, count, value);

}

void glUniform3fv (GLint location, GLsizei count, const GLfloat *value){    LOAD_GLES        
 gles_glUniform3fv (location, count, value);

}

void glUniform4fv (GLint location, GLsizei count, const GLfloat *value){    LOAD_GLES        
 gles_glUniform4fv (location, count, value);

}

void glUniform1iv (GLint location, GLsizei count, const GLint *value){    LOAD_GLES        
 gles_glUniform1iv (location, count, value);

}

void glUniform2iv (GLint location, GLsizei count, const GLint *value){    LOAD_GLES        
 gles_glUniform2iv (location, count, value);

}

void glUniform3iv (GLint location, GLsizei count, const GLint *value){    LOAD_GLES        
 gles_glUniform3iv (location, count, value);

}

void glUniform4iv (GLint location, GLsizei count, const GLint *value){    LOAD_GLES        
 gles_glUniform4iv (location, count, value);

}

void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    LOAD_GLES        
 gles_glUniformMatrix2fv (location, count, transpose, value);

}

void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    LOAD_GLES        
 gles_glUniformMatrix3fv (location, count, transpose, value);

}

void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    LOAD_GLES        
 gles_glUniformMatrix4fv (location, count, transpose, value);

}

void glValidateProgram (GLuint program){    LOAD_GLES        
 gles_glValidateProgram (program);

}

void glVertexAttrib1d (GLuint index, GLdouble x){    LOAD_GLES        
 GLfloat x1 = (GLfloat)x;
 gles_glVertexAttrib1f (index, x1);		// pack.

}

void glVertexAttrib1dv (GLuint index, const GLdouble *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib1fv (index, &v1);		// pack.

}

void glVertexAttrib1f (GLuint index, GLfloat x){    LOAD_GLES        
 gles_glVertexAttrib1f (index, x);

}

void glVertexAttrib1fv (GLuint index, const GLfloat *v){    LOAD_GLES        
 gles_glVertexAttrib1fv (index, v);

}

void glVertexAttrib1s (GLuint index, GLshort x){    LOAD_GLES        
 GLfloat x1 = (GLfloat)x;
 gles_glVertexAttrib1f (index, x1);		// pack.

}

void glVertexAttrib1sv (GLuint index, const GLshort *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib1fv (index, &v1);		// pack.

}

void glVertexAttrib2d (GLuint index, GLdouble x, GLdouble y){    LOAD_GLES        
 GLfloat x1 = (GLfloat)x;
 GLfloat y1 = (GLfloat)y;
 gles_glVertexAttrib2f (index, x1, y1);		// pack.

}

void glVertexAttrib2dv (GLuint index, const GLdouble *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib2fv (index, &v1);		// pack.

}

void glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y){    LOAD_GLES        
 gles_glVertexAttrib2f (index, x, y);

}

void glVertexAttrib2fv (GLuint index, const GLfloat *v){    LOAD_GLES        
 gles_glVertexAttrib2fv (index, v);

}

void glVertexAttrib2s (GLuint index, GLshort x, GLshort y){    LOAD_GLES        
 GLfloat x1 = (GLfloat)x;
 GLfloat y1 = (GLfloat)y;
 gles_glVertexAttrib2f (index, x1, y1);		// pack.

}

void glVertexAttrib2sv (GLuint index, const GLshort *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib2fv (index, &v1);		// pack.

}

void glVertexAttrib3d (GLuint index, GLdouble x, GLdouble y, GLdouble z){    LOAD_GLES        
 GLfloat x1 = (GLfloat)x;
 GLfloat y1 = (GLfloat)y;
 GLfloat z1 = (GLfloat)z; 
 gles_glVertexAttrib3f (index, x1, y1, z1);		// pack.

}

void glVertexAttrib3dv (GLuint index, const GLdouble *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib3fv (index, &v1);		// pack.

}

void glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z){    LOAD_GLES        
 gles_glVertexAttrib3f (index, x, y, z);

}

void glVertexAttrib3fv (GLuint index, const GLfloat *v){    LOAD_GLES        
 gles_glVertexAttrib3fv (index, v);

}

void glVertexAttrib3s (GLuint index, GLshort x, GLshort y, GLshort z){    LOAD_GLES        
 GLfloat x1 = (GLfloat)x;
 GLfloat y1 = (GLfloat)y;
 GLfloat z1 = (GLfloat)z;
 gles_glVertexAttrib3f (index, x1, y1, z1);		// pack.

}

void glVertexAttrib3sv (GLuint index, const GLshort *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib3fv (index, &v1);		// pack.

}

void glVertexAttrib4Nbv (GLuint index, const GLbyte *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib4fv (index, &v1);		// pack.

}

void glVertexAttrib4Niv (GLuint index, const GLint *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib4fv (index, &v1);		// pack.

}

void glVertexAttrib4Nsv (GLuint index, const GLshort *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib4fv (index, &v1);		// pack.

}

void glVertexAttrib4Nub (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w){    LOAD_GLES        
 GLfloat x1 = (GLfloat)x;
 GLfloat y1 = (GLfloat)y;
 GLfloat z1 = (GLfloat)z;
 GLfloat w1 = (GLfloat)w;
 gles_glVertexAttrib4f (index, x1, y1, z1, w1);		// pack.

}

void glVertexAttrib4Nubv (GLuint index, const GLubyte *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib4fv (index, &v1);		// pack.

}

void glVertexAttrib4Nuiv (GLuint index, const GLuint *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib4fv (index, &v1);		// pack.

}

void glVertexAttrib4Nusv (GLuint index, const GLushort *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib4fv (index, &v1);		// pack.

}

void glVertexAttrib4bv (GLuint index, const GLbyte *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib4fv (index, &v1);		// pack.

}

void glVertexAttrib4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w){    LOAD_GLES        
 GLfloat x1 = (GLfloat)x;
 GLfloat y1 = (GLfloat)y;
 GLfloat z1 = (GLfloat)z;
 GLfloat w1 = (GLfloat)w;
 gles_glVertexAttrib4f (index, x1, y1, z1, w1);		// pack.

}

void glVertexAttrib4dv (GLuint index, const GLdouble *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib4fv (index, &v1);		// pack.

}

void glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w){    LOAD_GLES        
 gles_glVertexAttrib4f (index, x, y, z, w);

}

void glVertexAttrib4fv (GLuint index, const GLfloat *v){    LOAD_GLES        
 gles_glVertexAttrib4fv (index, v);

}

void glVertexAttrib4iv (GLuint index, const GLint *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib4fv (index, &v1);		// pack.

}

void glVertexAttrib4s (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w){    LOAD_GLES        
 GLfloat x1 = (GLfloat)x;
 GLfloat y1 = (GLfloat)y;
 GLfloat z1 = (GLfloat)z;
 GLfloat w1 = (GLfloat)w;
 gles_glVertexAttrib4f (index, x1, y1, z1, w1);		// pack.

}

void glVertexAttrib4sv (GLuint index, const GLshort *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib4fv (index, &v1);

}

void glVertexAttrib4ubv (GLuint index, const GLubyte *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib4fv (index, &v1);		// pack.

}

void glVertexAttrib4uiv (GLuint index, const GLuint *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib4fv (index, &v1);		// pack.

}

void glVertexAttrib4usv (GLuint index, const GLushort *v){    LOAD_GLES        
 const GLfloat v1 = (GLfloat)(*v);
 gles_glVertexAttrib4fv (index, &v1);		// pack.

}

void glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer){    LOAD_GLES        
 gles_glVertexAttribPointer (index, size, type, normalized, stride, pointer);

}



// GL_VERSION_2_1
void glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    LOAD_GLES        
 gles_glUniformMatrix2x3fv (location, count, transpose, value);

}

void glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    LOAD_GLES        
 gles_glUniformMatrix3x2fv (location, count, transpose, value);

}

void glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    LOAD_GLES        
 gles_glUniformMatrix2x4fv (location, count, transpose, value);

}

void glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    LOAD_GLES        
 gles_glUniformMatrix4x2fv (location, count, transpose, value);

}

void glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    LOAD_GLES        
 gles_glUniformMatrix3x4fv (location, count, transpose, value);

}

void glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    LOAD_GLES        
 gles_glUniformMatrix4x3fv (location, count, transpose, value);

}



// GL_VERSION_3_0
void glColorMaski (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a){    LOAD_GLES        
 gles_glColorMaski (index, r, g, b, a);

}

void glGetBooleani_v (GLenum target, GLuint index, GLboolean *data){    LOAD_GLES        
 gles_glGetBooleani_v (target, index, data);

}

void glGetIntegeri_v (GLenum target, GLuint index, GLint *data){    LOAD_GLES        
 gles_glGetIntegeri_v (target, index, data);

}

void glEnablei (GLenum target, GLuint index){    LOAD_GLES        
 gles_glEnablei (target, index);

}

void glDisablei (GLenum target, GLuint index){    LOAD_GLES        
 gles_glDisablei (target, index);

}

GLboolean glIsEnabledi (GLenum target, GLuint index){    LOAD_GLES        
 return gles_glIsEnabledi (target, index);

}

void glBeginTransformFeedback (GLenum primitiveMode){    LOAD_GLES        
 gles_glBeginTransformFeedback (primitiveMode);

}

void glEndTransformFeedback (void){    LOAD_GLES        
 gles_glEndTransformFeedback ();

}

void glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size){    LOAD_GLES        
 gles_glBindBufferRange (target, index, buffer, offset, size);

}

void glBindBufferBase (GLenum target, GLuint index, GLuint buffer){    LOAD_GLES        
 gles_glBindBufferBase (target, index, buffer);

}

void glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode){    LOAD_GLES        
 gles_glTransformFeedbackVaryings (program, count, varyings, bufferMode);

}

void glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name){    LOAD_GLES        
 gles_glGetTransformFeedbackVarying (program, index, bufSize, length, size, type, name);

}

void glClampColor (GLenum target, GLenum clamp){    LOAD_GLES        
;// gles_glClampColor (target, clamp);

}

void glBeginConditionalRender (GLuint id, GLenum mode){    LOAD_GLES        
;// gles_glBeginConditionalRender (id, mode);

}

void glEndConditionalRender (void){    LOAD_GLES        
;// gles_glEndConditionalRender ();

}

void glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer){    LOAD_GLES        
 gles_glVertexAttribIPointer (index, size, type, stride, pointer);

}

void glGetVertexAttribIiv (GLuint index, GLenum pname, GLint *params){    LOAD_GLES        
 gles_glGetVertexAttribIiv (index, pname, params);

}

void glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint *params){    LOAD_GLES        
 gles_glGetVertexAttribIuiv (index, pname, params);

}

void glVertexAttribI1i (GLuint index, GLint x){    LOAD_GLES        
 gles_glVertexAttribI4i (index, x, 0, 0, 1);		// pack.

}

void glVertexAttribI2i (GLuint index, GLint x, GLint y){    LOAD_GLES        
 gles_glVertexAttribI4i (index, x, y, 0, 1);		// pack.

}

void glVertexAttribI3i (GLuint index, GLint x, GLint y, GLint z){    LOAD_GLES        
 gles_glVertexAttribI4i (index, x, y, z, 1);		// pack.

}

void glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w){    LOAD_GLES        
 gles_glVertexAttribI4i (index, x, y, z, w);

}

void glVertexAttribI1ui (GLuint index, GLuint x){    LOAD_GLES        
 gles_glVertexAttribI4ui (index, x, 0, 0, 1);		// pack.

}

void glVertexAttribI2ui (GLuint index, GLuint x, GLuint y){    LOAD_GLES        
 gles_glVertexAttribI4ui (index, x, y, 0, 1);		// pack.

}

void glVertexAttribI3ui (GLuint index, GLuint x, GLuint y, GLuint z){    LOAD_GLES        
 gles_glVertexAttribI4ui (index, x, y, z, 1);		// pack.

}

void glVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w){    LOAD_GLES        
 gles_glVertexAttribI4ui (index, x, y, z, w);

}

void glVertexAttribI1iv (GLuint index, const GLint *v){    LOAD_GLES        
 const GLint arr[4] = {*v, 0, 0, 1};
 const GLint* v1 = arr;
 gles_glVertexAttribI4iv (index, v1);		// pack.

}

void glVertexAttribI2iv (GLuint index, const GLint *v){    LOAD_GLES        
 const GLint arr[4] = {*v, *(v+1), 0, 1};
 const GLint* v1 = arr;
 gles_glVertexAttribI4iv (index, v1);		// pack.

}

void glVertexAttribI3iv (GLuint index, const GLint *v){    LOAD_GLES        
 const GLint arr[4] = {*v, *(v+1), *(v+2), 1};
 const GLint* v1 = arr;
 gles_glVertexAttribI4iv (index, v1);		// pack.

}

void glVertexAttribI4iv (GLuint index, const GLint *v){    LOAD_GLES        
 gles_glVertexAttribI4iv (index, v);

}

void glVertexAttribI1uiv (GLuint index, const GLuint *v){    LOAD_GLES        
 const GLuint arr[4] = {*v, 0, 0, 1};
 const GLuint* v1 = arr;
 gles_glVertexAttribI4uiv (index, v1);		// pack.

}

void glVertexAttribI2uiv (GLuint index, const GLuint *v){    LOAD_GLES        
 const GLuint arr[4] = {*v, *(v+1), 0, 1};
 const GLuint* v1 = arr;
 gles_glVertexAttribI4uiv (index, v1);		// pack.

}

void glVertexAttribI3uiv (GLuint index, const GLuint *v){    LOAD_GLES        
 const GLuint arr[4] = {*v, *(v+1), *(v+2), 1};
 const GLuint* v1 = arr;
 gles_glVertexAttribI4uiv (index, v1);		// pack.

}

void glVertexAttribI4uiv (GLuint index, const GLuint *v){    LOAD_GLES        
 gles_glVertexAttribI4uiv (index, v);

}

void glVertexAttribI4bv (GLuint index, const GLbyte *v){    LOAD_GLES        
 const GLuint v1 = (GLuint)(*v);
 gles_glVertexAttribI4uiv (index, &v1);		// pack.

}

void glVertexAttribI4sv (GLuint index, const GLshort *v){    LOAD_GLES        
 const GLuint v1 = (GLuint)(*v);
 gles_glVertexAttribI4uiv (index, &v1);		// pack.

}

void glVertexAttribI4ubv (GLuint index, const GLubyte *v){    LOAD_GLES        
 const GLuint v1 = (GLuint)(*v);
 gles_glVertexAttribI4uiv (index, &v1);		// pack.

}

void glVertexAttribI4usv (GLuint index, const GLushort *v){    LOAD_GLES        
 const GLuint v1 = (GLuint)(*v);
 gles_glVertexAttribI4uiv (index, &v1);		// pack.

}

void glGetUniformuiv (GLuint program, GLint location, GLuint *params){    LOAD_GLES        
 gles_glGetUniformuiv (program, location, params);

}

void glBindFragDataLocation (GLuint program, GLuint color, const GLchar *name){    LOAD_GLES        
;// gles_glBindFragDataLocation (program, color, name);

}

GLint glGetFragDataLocation (GLuint program, const GLchar *name){    LOAD_GLES        
 return gles_glGetFragDataLocation (program, name);

}

void glUniform1ui (GLint location, GLuint v0){    LOAD_GLES        
 gles_glUniform1ui (location, v0);

}

void glUniform2ui (GLint location, GLuint v0, GLuint v1){    LOAD_GLES        
 gles_glUniform2ui (location, v0, v1);

}

void glUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2){    LOAD_GLES        
 gles_glUniform3ui (location, v0, v1, v2);

}

void glUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3){    LOAD_GLES        
 gles_glUniform4ui (location, v0, v1, v2, v3);

}

void glUniform1uiv (GLint location, GLsizei count, const GLuint *value){    LOAD_GLES        
 gles_glUniform1uiv (location, count, value);

}

void glUniform2uiv (GLint location, GLsizei count, const GLuint *value){    LOAD_GLES        
 gles_glUniform2uiv (location, count, value);

}

void glUniform3uiv (GLint location, GLsizei count, const GLuint *value){    LOAD_GLES        
 gles_glUniform3uiv (location, count, value);

}

void glUniform4uiv (GLint location, GLsizei count, const GLuint *value){    LOAD_GLES        
 gles_glUniform4uiv (location, count, value);

}

void glTexParameterIiv (GLenum target, GLenum pname, const GLint *params){    LOAD_GLES        
 gles_glTexParameterIiv (target, pname, params);

}

void glTexParameterIuiv (GLenum target, GLenum pname, const GLuint *params){    LOAD_GLES        
 gles_glTexParameterIuiv (target, pname, params);

}

void glGetTexParameterIiv (GLenum target, GLenum pname, GLint *params){    LOAD_GLES        
 gles_glGetTexParameterIiv (target, pname, params);

}

void glGetTexParameterIuiv (GLenum target, GLenum pname, GLuint *params){    LOAD_GLES        
 gles_glGetTexParameterIuiv (target, pname, params);

}

void glClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint *value){    LOAD_GLES        
 gles_glClearBufferiv (buffer, drawbuffer, value);

}

void glClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint *value){    LOAD_GLES        
 gles_glClearBufferuiv (buffer, drawbuffer, value);

}

void glClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat *value){    LOAD_GLES        
 gles_glClearBufferfv (buffer, drawbuffer, value);

}

void glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil){    LOAD_GLES        
 gles_glClearBufferfi (buffer, drawbuffer, depth, stencil);

}

const GLubyte *glGetStringi (GLenum name, GLuint index){    LOAD_GLES        
 return gles_glGetStringi (name, index);

}

GLboolean glIsRenderbuffer (GLuint renderbuffer){    LOAD_GLES        
 return gles_glIsRenderbuffer (renderbuffer);

}

void glBindRenderbuffer (GLenum target, GLuint renderbuffer){    LOAD_GLES        
 gles_glBindRenderbuffer (target, renderbuffer);

}

void glDeleteRenderbuffers (GLsizei n, const GLuint *renderbuffers){    LOAD_GLES        
 gles_glDeleteRenderbuffers (n, renderbuffers);

}

void glGenRenderbuffers (GLsizei n, GLuint *renderbuffers){    LOAD_GLES        
 gles_glGenRenderbuffers (n, renderbuffers);

}

void glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height){    LOAD_GLES        
 gles_glRenderbufferStorage (target, internalformat, width, height);

}

void glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint *params){    LOAD_GLES        
 gles_glGetRenderbufferParameteriv (target, pname, params);

}

GLboolean glIsFramebuffer (GLuint framebuffer){    LOAD_GLES        
 return gles_glIsFramebuffer (framebuffer);

}

void glBindFramebuffer (GLenum target, GLuint framebuffer){    LOAD_GLES        
 gles_glBindFramebuffer (target, framebuffer);

}

void glDeleteFramebuffers (GLsizei n, const GLuint *framebuffers){    LOAD_GLES        
 gles_glDeleteFramebuffers (n, framebuffers);

}

void glGenFramebuffers (GLsizei n, GLuint *framebuffers){    LOAD_GLES        
 gles_glGenFramebuffers (n, framebuffers);

}

GLenum glCheckFramebufferStatus (GLenum target){    LOAD_GLES        
 return gles_glCheckFramebufferStatus (target);

}

void glFramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){    LOAD_GLES        
;// gles_glFramebufferTexture1D (target, attachment, textarget, texture, level);

}

void glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){    LOAD_GLES        
 gles_glFramebufferTexture2D (target, attachment, textarget, texture, level);

}

void glFramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset){    LOAD_GLES        
;// gles_glFramebufferTexture3D (target, attachment, textarget, texture, level, zoffset);

}

void glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer){    LOAD_GLES        
 gles_glFramebufferRenderbuffer (target, attachment, renderbuffertarget, renderbuffer);

}

void glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint *params){    LOAD_GLES        
 gles_glGetFramebufferAttachmentParameteriv (target, attachment, pname, params);

}

void glGenerateMipmap (GLenum target){    LOAD_GLES        
 gles_glGenerateMipmap (target);

}

void glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter){    LOAD_GLES        
 gles_glBlitFramebuffer (srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);

}

void glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height){    LOAD_GLES        
 gles_glRenderbufferStorageMultisample (target, samples, internalformat, width, height);

}

void glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer){    LOAD_GLES        
 gles_glFramebufferTextureLayer (target, attachment, texture, level, layer);

}

void *glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access){    LOAD_GLES        
 return gles_glMapBufferRange (target, offset, length, access);

}

void glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length){    LOAD_GLES        
 gles_glFlushMappedBufferRange (target, offset, length);

}

void glBindVertexArray (GLuint array){    LOAD_GLES        
 gles_glBindVertexArray (array);

}

void glDeleteVertexArrays (GLsizei n, const GLuint *arrays){    LOAD_GLES        
 gles_glDeleteVertexArrays (n, arrays);

}

void glGenVertexArrays (GLsizei n, GLuint *arrays){    LOAD_GLES        
 gles_glGenVertexArrays (n, arrays);

}

GLboolean glIsVertexArray (GLuint array){    LOAD_GLES        
 return gles_glIsVertexArray (array);

}






