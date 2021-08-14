// OpenGL 2.0 >> 3.0

#include "load_.h"
#include "pack.h"
#include "pack_.h"
//#include "toext.h"


#include <string.h>
#include <stdio.h>
#include <android/log.h>

#define Printf(...) __android_log_print(ANDROID_LOG_INFO, "LIBGL", __VA_ARGS__)

int loaded = 0;

#define _LOAD_GLES if(loaded == 0){load_all();loaded = 1;}

//int count=0;
//int num = 700;

// GLuint glCreateShader( GLenum type )
// {    _LOAD_GLES    
//  return gl4es_glCreateShader( type );     // Because gl4es_glFunc() has been declared as an external type in load.h,
// }								      // So you can use these gl4es_glFunc() directly here. 
									      // However, their function definitions are in load_.h.




// GL_VERSION_1_0
void glCullFace (GLenum mode){    _LOAD_GLES    
 gl4es_glCullFace (mode);

}

void glFrontFace (GLenum mode){    _LOAD_GLES    
 gl4es_glFrontFace (mode);

}

void glHint (GLenum target, GLenum mode){    _LOAD_GLES    
 gl4es_glHint (target, mode);

}

void glLineWidth (GLfloat width){    _LOAD_GLES    
 gl4es_glLineWidth (width);

}

void glPointSize (GLfloat size){    _LOAD_GLES    
 gl4es_glPointSize (size);

}

void glPolygonMode (GLenum face, GLenum mode){    _LOAD_GLES    
 gl4es_glPolygonMode (face, mode);

}

void glScissor (GLint x, GLint y, GLsizei width, GLsizei height){    _LOAD_GLES    
 gl4es_glScissor (x, y, width, height);

}

void glTexParameterf (GLenum target, GLenum pname, GLfloat param){    _LOAD_GLES    
 gl4es_glTexParameterf (target, pname, param);

}

void glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params){    _LOAD_GLES    
 gl4es_glTexParameterfv (target, pname, params);

}

void glTexParameteri (GLenum target, GLenum pname, GLint param){    _LOAD_GLES    
 gl4es_glTexParameteri (target, pname, param);

}

void glTexParameteriv (GLenum target, GLenum pname, const GLint *params){    _LOAD_GLES    
 gl4es_glTexParameteriv (target, pname, params);

}

void glTexImage1D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels){    _LOAD_GLES    
 gl4es_glTexImage1D (target, level, internalformat, width, border, format, type, pixels);

}

void glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels){    _LOAD_GLES    
 gl4es_glTexImage2D (target, level, internalformat, width, height, border, format, type, pixels);

}

void glDrawBuffer (GLenum buf){    _LOAD_GLES    
 _gles_glDrawBuffers (1, (const GLenum *)(&buf));

}

void glClear (GLbitfield mask){    _LOAD_GLES    
 /*if(count%num==0){
  Printf("////////glClear : %x  MaxDrawBuffers : %d ////////\n", (int)mask, MaxDrawBuffers);
  if((mask&GL_COLOR_BUFFER_BIT)!=0){
  	Printf("mask&GL_COLOR_BUFFER_BIT != 0");
  }
 }
 count++;
 if(count>50000000){
  count=0;
 }*/
 
 if((mask&GL_COLOR_BUFFER_BIT)!=0){
    _gles_glDrawBuffers(MaxDrawBuffers, (const GLenum *)Attachs);
    for(int n=1; n<MaxDrawBuffers; n++){
    	_gles_glClearBufferfv(GL_COLOR, n, (const float *)ClearColorValue);
    }
 }
  _gles_glClear (mask);
//====
}

void glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha){    _LOAD_GLES    
 _gles_glClearColor (red, green, blue, alpha);
//====
}

void glClearStencil (GLint s){    _LOAD_GLES    
 _gles_glClearStencil (s);
//====
}

void glClearDepth (GLdouble depth){    _LOAD_GLES    
 _gles_glClearDepthf ((GLfloat)depth);
//====pack
}

void glStencilMask (GLuint mask){    _LOAD_GLES    
 gl4es_glStencilMask (mask);

}

void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha){    _LOAD_GLES    
 gl4es_glColorMask (red, green, blue, alpha);

}

void glDepthMask (GLboolean flag){    _LOAD_GLES    
 gl4es_glDepthMask (flag);

}

void glDisable (GLenum cap){    _LOAD_GLES    
 gl4es_glDisable (cap);

}

void glEnable (GLenum cap){    _LOAD_GLES    
 gl4es_glEnable (cap);

}

void glFinish (void){    _LOAD_GLES    
 gl4es_glFinish ();

}

void glFlush (void){    _LOAD_GLES    
 gl4es_glFlush ();

}

void glBlendFunc (GLenum sfactor, GLenum dfactor){    _LOAD_GLES    
 gl4es_glBlendFunc (sfactor, dfactor);

}

void glLogicOp (GLenum opcode){    _LOAD_GLES    
 gl4es_glLogicOp (opcode);

}

void glStencilFunc (GLenum func, GLint ref, GLuint mask){    _LOAD_GLES    
 gl4es_glStencilFunc (func, ref, mask);

}

void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass){    _LOAD_GLES    
 gl4es_glStencilOp (fail, zfail, zpass);

}

void glDepthFunc (GLenum func){    _LOAD_GLES    
 gl4es_glDepthFunc (func);

}

void glPixelStoref (GLenum pname, GLfloat param){    _LOAD_GLES    
 gl4es_glPixelStoref (pname, param);

}

void glPixelStorei (GLenum pname, GLint param){    _LOAD_GLES    
 gl4es_glPixelStorei (pname, param);

}

void glReadBuffer (GLenum src){    _LOAD_GLES    
 gl4es_glReadBuffer (src);

}

void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels){    _LOAD_GLES    
 gl4es_glReadPixels (x, y, width, height, format, type, pixels);

}

void glGetBooleanv (GLenum pname, GLboolean *data){    _LOAD_GLES    
 gl4es_glGetBooleanv (pname, data);

}

void glGetDoublev (GLenum pname, GLdouble *data){    _LOAD_GLES    
 gl4es_glGetDoublev (pname, data);

}

GLenum glGetError (void){    _LOAD_GLES    
 return gl4es_glGetError ();

}

void glGetFloatv (GLenum pname, GLfloat *data){    _LOAD_GLES    
 gl4es_glGetFloatv (pname, data);

}

void glGetIntegerv (GLenum pname, GLint *data){    _LOAD_GLES    
 gl4es_glGetIntegerv (pname, data);

}

const GLubyte *glGetString (GLenum name){    _LOAD_GLES    
 
 if(name == GL_RENDERER){
  return (const GLubyte *)"vgpu 1.4.0";
 }
 if(name == GL_VERSION){
  return (const GLubyte *)"OpenGL: 4.6";
 }
 if(name == GL_VENDOR){
  return (const GLubyte *)"vgpu";
 }
 if(name == GL_SHADING_LANGUAGE_VERSION){
  return (const GLubyte *)"4.40";
 }
 
 return _gles_glGetString (name);

}

void glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, void *pixels){    _LOAD_GLES    
 gl4es_glGetTexImage (target, level, format, type, pixels);

}

void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params){    _LOAD_GLES    
 gl4es_glGetTexParameterfv (target, pname, params);

}

void glGetTexParameteriv (GLenum target, GLenum pname, GLint *params){    _LOAD_GLES    
 gl4es_glGetTexParameteriv (target, pname, params);

}

void glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params){    _LOAD_GLES    
 gl4es_glGetTexLevelParameterfv (target, level, pname, params);

}

void glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params){    _LOAD_GLES    
 gl4es_glGetTexLevelParameteriv (target, level, pname, params);

}

GLboolean glIsEnabled (GLenum cap){    _LOAD_GLES    
 return gl4es_glIsEnabled (cap);

}

void glDepthRange (GLdouble n, GLdouble f){    _LOAD_GLES    
 gl4es_glDepthRange (n, f);

}

void glViewport (GLint x, GLint y, GLsizei width, GLsizei height){    _LOAD_GLES    
 gl4es_glViewport (x, y, width, height);

}



// GL_VERSION_1_1
void glDrawArrays (GLenum mode, GLint first, GLsizei count){    _LOAD_GLES    
 gl4es_glDrawArrays (mode, first, count);

}

void glDrawElements (GLenum mode, GLsizei count, GLenum type, const void *indices){    _LOAD_GLES    
 gl4es_glDrawElements (mode, count, type, indices);

}

void glGetPointerv (GLenum pname, void **params){    _LOAD_GLES    
 gl4es_glGetPointerv (pname, params);

}

void glPolygonOffset (GLfloat factor, GLfloat units){    _LOAD_GLES    
 gl4es_glPolygonOffset (factor, units);

}

void glCopyTexImage1D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border){    _LOAD_GLES    
 gl4es_glCopyTexImage1D (target, level, internalformat, x, y, width, border);

}

void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border){    _LOAD_GLES    
 gl4es_glCopyTexImage2D (target, level, internalformat, x, y, width, height, border);

}

void glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width){    _LOAD_GLES    
 gl4es_glCopyTexSubImage1D (target, level, xoffset, x, y, width);

}

void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height){    _LOAD_GLES    
 gl4es_glCopyTexSubImage2D (target, level, xoffset, yoffset, x, y, width, height);

}

void glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels){    _LOAD_GLES    
 gl4es_glTexSubImage1D (target, level, xoffset, width, format, type, pixels);

}

void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels){    _LOAD_GLES    
 gl4es_glTexSubImage2D (target, level, xoffset, yoffset, width, height, format, type, pixels);

}

void glBindTexture (GLenum target, GLuint texture){    _LOAD_GLES    
 gl4es_glBindTexture (target, texture);

}

void glDeleteTextures (GLsizei n, const GLuint *textures){    _LOAD_GLES    
 gl4es_glDeleteTextures (n, textures);

}

void glGenTextures (GLsizei n, GLuint *textures){    _LOAD_GLES    
 gl4es_glGenTextures (n, textures);

}

GLboolean glIsTexture (GLuint texture){    _LOAD_GLES    
 return gl4es_glIsTexture (texture);

}



// GL_VERSION_1_2
void glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices){    _LOAD_GLES    
 gl4es_glDrawRangeElements (mode, start, end, count, type, indices);

}

void glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels){    _LOAD_GLES    
 gl4es_glTexImage3D (target, level, internalformat, width, height, depth, border, format, type, pixels);

}

void glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels){    _LOAD_GLES    
 gl4es_glTexSubImage3D (target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);

}

void glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height){    _LOAD_GLES    
 gl4es_glCopyTexSubImage3D (target, level, xoffset, yoffset, zoffset, x, y, width, height);

}



// GL_VERSION_1_3
void glActiveTexture (GLenum texture){    _LOAD_GLES    
 gl4es_glActiveTexture (texture);

}

void glSampleCoverage (GLfloat value, GLboolean invert){    _LOAD_GLES    
 gl4es_glSampleCoverage (value, invert);

}

void glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data){    _LOAD_GLES    
 gl4es_glCompressedTexImage3D (target, level, internalformat, width, height, depth, border, imageSize, data);

}

void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data){    _LOAD_GLES    
 gl4es_glCompressedTexImage2D (target, level, internalformat, width, height, border, imageSize, data);

}

void glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data){    _LOAD_GLES    
 gl4es_glCompressedTexImage1D (target, level, internalformat, width, border, imageSize, data);

}

void glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data){    _LOAD_GLES    
 gl4es_glCompressedTexSubImage3D (target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);

}

void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data){    _LOAD_GLES    
 gl4es_glCompressedTexSubImage2D (target, level, xoffset, yoffset, width, height, format, imageSize, data);

}

void glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data){    _LOAD_GLES    
 gl4es_glCompressedTexSubImage1D (target, level, xoffset, width, format, imageSize, data);

}

void glGetCompressedTexImage (GLenum target, GLint level, void *img){    _LOAD_GLES    
 gl4es_glGetCompressedTexImage (target, level, img);

}



// GL_VERSION_1_4
void glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha){    _LOAD_GLES    
 gl4es_glBlendFuncSeparate (sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);

}

void glMultiDrawArrays (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount){    _LOAD_GLES    
 gl4es_glMultiDrawArrays (mode, first, count, drawcount);

}

void glMultiDrawElements (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount){    _LOAD_GLES    
 gl4es_glMultiDrawElements (mode, count, type, indices, drawcount);

}

void glPointParameterf (GLenum pname, GLfloat param){    _LOAD_GLES    
 gl4es_glPointParameterf (pname, param);

}

void glPointParameterfv (GLenum pname, const GLfloat *params){    _LOAD_GLES    
 gl4es_glPointParameterfv (pname, params);

}

void glPointParameteri (GLenum pname, GLint param){    _LOAD_GLES    
 gl4es_glPointParameteri (pname, param);

}

void glPointParameteriv (GLenum pname, const GLint *params){    _LOAD_GLES    
 gl4es_glPointParameteriv (pname, params);

}

void glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha){    _LOAD_GLES    
 gl4es_glBlendColor (red, green, blue, alpha);

}

void glBlendEquation (GLenum mode){    _LOAD_GLES    
 gl4es_glBlendEquation (mode);

}



// GL_VERSION_1_5
void glGenQueries (GLsizei n, GLuint *ids){    _LOAD_GLES    
 gl4es_glGenQueries (n, ids);

}

void glDeleteQueries (GLsizei n, const GLuint *ids){    _LOAD_GLES    
 gl4es_glDeleteQueries (n, ids);

}

GLboolean glIsQuery (GLuint id){    _LOAD_GLES    
 return gl4es_glIsQuery (id);

}

void glBeginQuery (GLenum target, GLuint id){    _LOAD_GLES    
 gl4es_glBeginQuery (target, id);

}

void glEndQuery (GLenum target){    _LOAD_GLES    
 gl4es_glEndQuery (target);

}

void glGetQueryiv (GLenum target, GLenum pname, GLint *params){    _LOAD_GLES    
 gl4es_glGetQueryiv (target, pname, params);

}

void glGetQueryObjectiv (GLuint id, GLenum pname, GLint *params){    _LOAD_GLES    
 gl4es_glGetQueryObjectiv (id, pname, params);

}

void glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint *params){    _LOAD_GLES    
 gl4es_glGetQueryObjectuiv (id, pname, params);

}

void glBindBuffer (GLenum target, GLuint buffer){    _LOAD_GLES    
 //last_buf_target = target;
 //last_buf_object = buffer;
 gl4es_glBindBuffer (target, buffer);

}

void glDeleteBuffers (GLsizei n, const GLuint *buffers){    _LOAD_GLES    
 gl4es_glDeleteBuffers (n, buffers);

}

void glGenBuffers (GLsizei n, GLuint *buffers){    _LOAD_GLES    
 gl4es_glGenBuffers (n, buffers);

}

GLboolean glIsBuffer (GLuint buffer){    _LOAD_GLES    
 return gl4es_glIsBuffer (buffer);

}

void glBufferData (GLenum target, GLsizeiptr size, const void *data, GLenum usage){    _LOAD_GLES    
 gl4es_glBufferData (target, size, data, usage);

}

void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void *data){    _LOAD_GLES    
 gl4es_glBufferSubData (target, offset, size, data);

}

void glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, void *data){    _LOAD_GLES    
 gl4es_glGetBufferSubData (target, offset, size, data);

}

void *glMapBuffer (GLenum target, GLenum access){    _LOAD_GLES    
 return gl4es_glMapBuffer (target, access);

}

GLboolean glUnmapBuffer (GLenum target){    _LOAD_GLES    
 return gl4es_glUnmapBuffer (target);

}

void glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params){    _LOAD_GLES    
 gl4es_glGetBufferParameteriv (target, pname, params);

}

void glGetBufferPointerv (GLenum target, GLenum pname, void **params){    _LOAD_GLES    
 gl4es_glGetBufferPointerv (target, pname, params);

}



// GL_VERSION_2_0
void glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha){    _LOAD_GLES    
 gl4es_glBlendEquationSeparate (modeRGB, modeAlpha);

}

void glDrawBuffers (GLsizei n, const GLenum *bufs){    _LOAD_GLES    
/* if(count%num==0){
  for(int x=0; x<n; x++){
   Printf("////////DrawBuffers attachment : %x  //////// n = %d   ////////\n", bufs[x], n);
  }
 }
 count++;
 if(count>50000000){
  count=0;
 }
*/
 _gles_glDrawBuffers (n, bufs);

}

void glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass){    _LOAD_GLES    
 gl4es_glStencilOpSeparate (face, sfail, dpfail, dppass);

}

void glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask){    _LOAD_GLES    
 gl4es_glStencilFuncSeparate (face, func, ref, mask);

}

void glStencilMaskSeparate (GLenum face, GLuint mask){    _LOAD_GLES    
 gl4es_glStencilMaskSeparate (face, mask);

}

void glAttachShader (GLuint program, GLuint shader){    _LOAD_GLES    
 gl4es_glAttachShader (program, shader);

}

void glBindAttribLocation (GLuint program, GLuint index, const GLchar *name){    _LOAD_GLES    
 gl4es_glBindAttribLocation (program, index, name);

}

void glCompileShader (GLuint shader){    _LOAD_GLES    
 gl4es_glCompileShader (shader);

}

GLuint glCreateProgram (void){    _LOAD_GLES    
 return gl4es_glCreateProgram ();

}

GLuint glCreateShader (GLenum type){    _LOAD_GLES    
 return gl4es_glCreateShader (type);

}

void glDeleteProgram (GLuint program){    _LOAD_GLES    
 gl4es_glDeleteProgram (program);

}

void glDeleteShader (GLuint shader){    _LOAD_GLES    
 gl4es_glDeleteShader (shader);

}

void glDetachShader (GLuint program, GLuint shader){    _LOAD_GLES    
 gl4es_glDetachShader (program, shader);

}

void glDisableVertexAttribArray (GLuint index){    _LOAD_GLES    
 gl4es_glDisableVertexAttribArray (index);

}

void glEnableVertexAttribArray (GLuint index){    _LOAD_GLES    
 gl4es_glEnableVertexAttribArray (index);

}

void glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name){    _LOAD_GLES    
 gl4es_glGetActiveAttrib (program, index, bufSize, length, size, type, name);

}

void glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name){    _LOAD_GLES    
 gl4es_glGetActiveUniform (program, index, bufSize, length, size, type, name);

}

void glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders){    _LOAD_GLES    
 gl4es_glGetAttachedShaders (program, maxCount, count, shaders);

}

GLint glGetAttribLocation (GLuint program, const GLchar *name){    _LOAD_GLES    
 return gl4es_glGetAttribLocation (program, name);

}

void glGetProgramiv (GLuint program, GLenum pname, GLint *params){    _LOAD_GLES    
 gl4es_glGetProgramiv (program, pname, params);

}

void glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog){    _LOAD_GLES    
 gl4es_glGetProgramInfoLog (program, bufSize, length, infoLog);

}

void glGetShaderiv (GLuint shader, GLenum pname, GLint *params){    _LOAD_GLES    
 gl4es_glGetShaderiv (shader, pname, params);

}

void glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog){    _LOAD_GLES    
 gl4es_glGetShaderInfoLog (shader, bufSize, length, infoLog);

}

void glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source){    _LOAD_GLES    
 gl4es_glGetShaderSource (shader, bufSize, length, source);

}

GLint glGetUniformLocation (GLuint program, const GLchar *name){    _LOAD_GLES    
 return gl4es_glGetUniformLocation (program, name);

}

void glGetUniformfv (GLuint program, GLint location, GLfloat *params){    _LOAD_GLES    
 gl4es_glGetUniformfv (program, location, params);

}

void glGetUniformiv (GLuint program, GLint location, GLint *params){    _LOAD_GLES    
 gl4es_glGetUniformiv (program, location, params);

}

void glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble *params){    _LOAD_GLES    
 gl4es_glGetVertexAttribdv (index, pname, params);

}

void glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params){    _LOAD_GLES    
 gl4es_glGetVertexAttribfv (index, pname, params);

}

void glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params){    _LOAD_GLES    
 gl4es_glGetVertexAttribiv (index, pname, params);

}

void glGetVertexAttribPointerv (GLuint index, GLenum pname, void **pointer){    _LOAD_GLES    
 gl4es_glGetVertexAttribPointerv (index, pname, pointer);

}

GLboolean glIsProgram (GLuint program){    _LOAD_GLES    
 return gl4es_glIsProgram (program);

}

GLboolean glIsShader (GLuint shader){    _LOAD_GLES    
 return gl4es_glIsShader (shader);

}

void glLinkProgram (GLuint program){    _LOAD_GLES    
 gl4es_glLinkProgram (program);

}

void glShaderSource (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length){    _LOAD_GLES    
 
 /*
 char * A[14] = {
  "vec4 gl_FragCoord",
  "#version 110",
  "#version 120",
  "#version 130",
  "#version 140",
  "#version 150",
  "#version 330",
  "#version 400",
  "#version 410",
  "#version 420",
  "#version 430",
  "#version 440",
  "#version 450",
  "#version 460"
  
 };
 char * B[14] = {
  "highp vec4 gl_FragCoord",
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
  "#version 320 es",
  "#version 320 es",
  "#version 320 es"
  
 };
 
 int number = 14;	// Number of strings to be processed.
 
 GLint length1[count];
 
 
 GLchar * ptr;
 ptr = shaderconv (number, A, B, *string, length1, length, count);
 
 const GLchar *const*string1 = (const GLchar *const*)(&ptr);
 
 if(length == NULL){
  gl4es_glShaderSource (shader, count, string1, NULL);
 }
 else{
  gl4es_glShaderSource (shader, count, string1, length1);
 }
 Printf("Calling glShaderSource() succeed!");
 
 free(ptr);
 */
 
 gl4es_glShaderSource (shader, count, string, length);
 
}

void glUseProgram (GLuint program){    _LOAD_GLES    
 gl4es_glUseProgram (program);

}

void glUniform1f (GLint location, GLfloat v0){    _LOAD_GLES    
 gl4es_glUniform1f (location, v0);

}

void glUniform2f (GLint location, GLfloat v0, GLfloat v1){    _LOAD_GLES    
 gl4es_glUniform2f (location, v0, v1);

}

void glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2){    _LOAD_GLES    
 gl4es_glUniform3f (location, v0, v1, v2);

}

void glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3){    _LOAD_GLES    
 gl4es_glUniform4f (location, v0, v1, v2, v3);

}

void glUniform1i (GLint location, GLint v0){    _LOAD_GLES    
 gl4es_glUniform1i (location, v0);

}

void glUniform2i (GLint location, GLint v0, GLint v1){    _LOAD_GLES    
 gl4es_glUniform2i (location, v0, v1);

}

void glUniform3i (GLint location, GLint v0, GLint v1, GLint v2){    _LOAD_GLES    
 gl4es_glUniform3i (location, v0, v1, v2);

}

void glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3){    _LOAD_GLES    
 gl4es_glUniform4i (location, v0, v1, v2, v3);

}

void glUniform1fv (GLint location, GLsizei count, const GLfloat *value){    _LOAD_GLES    
 gl4es_glUniform1fv (location, count, value);

}

void glUniform2fv (GLint location, GLsizei count, const GLfloat *value){    _LOAD_GLES    
 gl4es_glUniform2fv (location, count, value);

}

void glUniform3fv (GLint location, GLsizei count, const GLfloat *value){    _LOAD_GLES    
 gl4es_glUniform3fv (location, count, value);

}

void glUniform4fv (GLint location, GLsizei count, const GLfloat *value){    _LOAD_GLES    
 gl4es_glUniform4fv (location, count, value);

}

void glUniform1iv (GLint location, GLsizei count, const GLint *value){    _LOAD_GLES    
 gl4es_glUniform1iv (location, count, value);

}

void glUniform2iv (GLint location, GLsizei count, const GLint *value){    _LOAD_GLES    
 gl4es_glUniform2iv (location, count, value);

}

void glUniform3iv (GLint location, GLsizei count, const GLint *value){    _LOAD_GLES    
 gl4es_glUniform3iv (location, count, value);

}

void glUniform4iv (GLint location, GLsizei count, const GLint *value){    _LOAD_GLES    
 gl4es_glUniform4iv (location, count, value);

}

void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    _LOAD_GLES    
 gl4es_glUniformMatrix2fv (location, count, transpose, value);

}

void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    _LOAD_GLES    
 gl4es_glUniformMatrix3fv (location, count, transpose, value);

}

void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    _LOAD_GLES    
 gl4es_glUniformMatrix4fv (location, count, transpose, value);

}

void glValidateProgram (GLuint program){    _LOAD_GLES    
 gl4es_glValidateProgram (program);

}

void glVertexAttrib1d (GLuint index, GLdouble x){    _LOAD_GLES    
 gl4es_glVertexAttrib1d (index, x);

}

void glVertexAttrib1dv (GLuint index, const GLdouble *v){    _LOAD_GLES    
 gl4es_glVertexAttrib1dv (index, v);

}

void glVertexAttrib1f (GLuint index, GLfloat x){    _LOAD_GLES    
 gl4es_glVertexAttrib1f (index, x);

}

void glVertexAttrib1fv (GLuint index, const GLfloat *v){    _LOAD_GLES    
 gl4es_glVertexAttrib1fv (index, v);

}

void glVertexAttrib1s (GLuint index, GLshort x){    _LOAD_GLES    
 gl4es_glVertexAttrib1s (index, x);

}

void glVertexAttrib1sv (GLuint index, const GLshort *v){    _LOAD_GLES    
 gl4es_glVertexAttrib1sv (index, v);

}

void glVertexAttrib2d (GLuint index, GLdouble x, GLdouble y){    _LOAD_GLES    
 gl4es_glVertexAttrib2d (index, x, y);

}

void glVertexAttrib2dv (GLuint index, const GLdouble *v){    _LOAD_GLES    
 gl4es_glVertexAttrib2dv (index, v);

}

void glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y){    _LOAD_GLES    
 gl4es_glVertexAttrib2f (index, x, y);

}

void glVertexAttrib2fv (GLuint index, const GLfloat *v){    _LOAD_GLES    
 gl4es_glVertexAttrib2fv (index, v);

}

void glVertexAttrib2s (GLuint index, GLshort x, GLshort y){    _LOAD_GLES    
 gl4es_glVertexAttrib2s (index, x, y);

}

void glVertexAttrib2sv (GLuint index, const GLshort *v){    _LOAD_GLES    
 gl4es_glVertexAttrib2sv (index, v);

}

void glVertexAttrib3d (GLuint index, GLdouble x, GLdouble y, GLdouble z){    _LOAD_GLES    
 gl4es_glVertexAttrib3d (index, x, y, z);

}

void glVertexAttrib3dv (GLuint index, const GLdouble *v){    _LOAD_GLES    
 gl4es_glVertexAttrib3dv (index, v);

}

void glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z){    _LOAD_GLES    
 gl4es_glVertexAttrib3f (index, x, y, z);

}

void glVertexAttrib3fv (GLuint index, const GLfloat *v){    _LOAD_GLES    
 gl4es_glVertexAttrib3fv (index, v);

}

void glVertexAttrib3s (GLuint index, GLshort x, GLshort y, GLshort z){    _LOAD_GLES    
 gl4es_glVertexAttrib3s (index, x, y, z);

}

void glVertexAttrib3sv (GLuint index, const GLshort *v){    _LOAD_GLES    
 gl4es_glVertexAttrib3sv (index, v);

}

void glVertexAttrib4Nbv (GLuint index, const GLbyte *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4Nbv (index, v);

}

void glVertexAttrib4Niv (GLuint index, const GLint *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4Niv (index, v);

}

void glVertexAttrib4Nsv (GLuint index, const GLshort *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4Nsv (index, v);

}

void glVertexAttrib4Nub (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w){    _LOAD_GLES    
 gl4es_glVertexAttrib4Nub (index, x, y, z, w);

}

void glVertexAttrib4Nubv (GLuint index, const GLubyte *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4Nubv (index, v);

}

void glVertexAttrib4Nuiv (GLuint index, const GLuint *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4Nuiv (index, v);

}

void glVertexAttrib4Nusv (GLuint index, const GLushort *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4Nusv (index, v);

}

void glVertexAttrib4bv (GLuint index, const GLbyte *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4bv (index, v);

}

void glVertexAttrib4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w){    _LOAD_GLES    
 gl4es_glVertexAttrib4d (index, x, y, z, w);

}

void glVertexAttrib4dv (GLuint index, const GLdouble *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4dv (index, v);

}

void glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w){    _LOAD_GLES    
 gl4es_glVertexAttrib4f (index, x, y, z, w);

}

void glVertexAttrib4fv (GLuint index, const GLfloat *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4fv (index, v);

}

void glVertexAttrib4iv (GLuint index, const GLint *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4iv (index, v);

}

void glVertexAttrib4s (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w){    _LOAD_GLES    
 gl4es_glVertexAttrib4s (index, x, y, z, w);

}

void glVertexAttrib4sv (GLuint index, const GLshort *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4sv (index, v);

}

void glVertexAttrib4ubv (GLuint index, const GLubyte *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4ubv (index, v);

}

void glVertexAttrib4uiv (GLuint index, const GLuint *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4uiv (index, v);

}

void glVertexAttrib4usv (GLuint index, const GLushort *v){    _LOAD_GLES    
 gl4es_glVertexAttrib4usv (index, v);

}

void glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer){    _LOAD_GLES    
 gl4es_glVertexAttribPointer (index, size, type, normalized, stride, pointer);

}



// GL_VERSION_2_1
void glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    _LOAD_GLES    
 _gles_glUniformMatrix2x3fv (location, count, transpose, value);

}

void glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    _LOAD_GLES    
 _gles_glUniformMatrix3x2fv (location, count, transpose, value);

}

void glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    _LOAD_GLES    
 _gles_glUniformMatrix2x4fv (location, count, transpose, value);

}

void glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    _LOAD_GLES    
 _gles_glUniformMatrix4x2fv (location, count, transpose, value);

}

void glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    _LOAD_GLES    
 _gles_glUniformMatrix3x4fv (location, count, transpose, value);

}

void glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){    _LOAD_GLES    
 _gles_glUniformMatrix4x3fv (location, count, transpose, value);

}



// GL_VERSION_3_0
void glColorMaski (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a){    _LOAD_GLES    
 _gles_glColorMaski (index, r, g, b, a);

}

void glGetBooleani_v (GLenum target, GLuint index, GLboolean *data){    _LOAD_GLES    
 _gles_glGetBooleani_v (target, index, data);

}

void glGetIntegeri_v (GLenum target, GLuint index, GLint *data){    _LOAD_GLES    
 _gles_glGetIntegeri_v (target, index, data);

}

void glEnablei (GLenum target, GLuint index){    _LOAD_GLES    
 _gles_glEnablei (target, index);

}

void glDisablei (GLenum target, GLuint index){    _LOAD_GLES    
 _gles_glDisablei (target, index);

}

GLboolean glIsEnabledi (GLenum target, GLuint index){    _LOAD_GLES    
 return _gles_glIsEnabledi (target, index);

}

void glBeginTransformFeedback (GLenum primitiveMode){    _LOAD_GLES    
 _gles_glBeginTransformFeedback (primitiveMode);

}

void glEndTransformFeedback (void){    _LOAD_GLES    
 _gles_glEndTransformFeedback ();

}

void glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size){    _LOAD_GLES    
 _gles_glBindBufferRange (target, index, buffer, offset, size);

}

void glBindBufferBase (GLenum target, GLuint index, GLuint buffer){    _LOAD_GLES    
 _gles_glBindBufferBase (target, index, buffer);

}

void glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode){    _LOAD_GLES    
 _gles_glTransformFeedbackVaryings (program, count, varyings, bufferMode);

}

void glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name){    _LOAD_GLES    
 _gles_glGetTransformFeedbackVarying (program, index, bufSize, length, size, type, name);

}

void glClampColor (GLenum target, GLenum clamp){    _LOAD_GLES    
 gl4es_glClampColor (target, clamp);

}

void glBeginConditionalRender (GLuint id, GLenum mode){    _LOAD_GLES    
;// _gles_glBeginConditionalRender (id, mode);

}

void glEndConditionalRender (void){    _LOAD_GLES    
;// _gles_glEndConditionalRender ();

}

void glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer){    _LOAD_GLES    
 _gles_glVertexAttribIPointer (index, size, type, stride, pointer);				// Direct conversion to int.

}

void glGetVertexAttribIiv (GLuint index, GLenum pname, GLint *params){    _LOAD_GLES    
 _gles_glGetVertexAttribIiv (index, pname, params);

}

void glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint *params){    _LOAD_GLES    
 _gles_glGetVertexAttribIuiv (index, pname, params);

}

void glVertexAttribI1i (GLuint index, GLint x){    _LOAD_GLES    
 _gles_glVertexAttribI4i (index, x, 0, 0, 1);

}

void glVertexAttribI2i (GLuint index, GLint x, GLint y){    _LOAD_GLES    
 _gles_glVertexAttribI4i (index, x, y, 0, 1);

}

void glVertexAttribI3i (GLuint index, GLint x, GLint y, GLint z){    _LOAD_GLES    
 _gles_glVertexAttribI4i (index, x, y, z, 1);

}

void glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w){    _LOAD_GLES    
 _gles_glVertexAttribI4i (index, x, y, z, w);

}

void glVertexAttribI1ui (GLuint index, GLuint x){    _LOAD_GLES    
 _gles_glVertexAttribI4ui (index, x, 0, 0, 1);

}

void glVertexAttribI2ui (GLuint index, GLuint x, GLuint y){    _LOAD_GLES    
 _gles_glVertexAttribI4ui (index, x, y, 0, 1);

}

void glVertexAttribI3ui (GLuint index, GLuint x, GLuint y, GLuint z){    _LOAD_GLES    
 _gles_glVertexAttribI4ui (index, x, y, z, 1);

}

void glVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w){    _LOAD_GLES    
 _gles_glVertexAttribI4ui (index, x, y, z, w);

}

void glVertexAttribI1iv (GLuint index, const GLint *v){    _LOAD_GLES    
 const GLint v1[4] = {v[0], 0, 0, 1};
 _gles_glVertexAttribI4iv (index, v1);

}

void glVertexAttribI2iv (GLuint index, const GLint *v){    _LOAD_GLES    
 const GLint v1[4] = {v[0], v[1], 0, 1};
 _gles_glVertexAttribI4iv (index, v1);
}

void glVertexAttribI3iv (GLuint index, const GLint *v){    _LOAD_GLES    
 const GLint v1[4] = {v[0], v[1], v[2], 1};
 _gles_glVertexAttribI4iv (index, v1);

}

void glVertexAttribI4iv (GLuint index, const GLint *v){    _LOAD_GLES    
 _gles_glVertexAttribI4iv (index, v);

}

void glVertexAttribI1uiv (GLuint index, const GLuint *v){    _LOAD_GLES    
 const GLuint v1[4] = {v[0], 0, 0, 1};
 _gles_glVertexAttribI4uiv (index, v1);
}

void glVertexAttribI2uiv (GLuint index, const GLuint *v){    _LOAD_GLES    
 const GLuint v1[4] = {v[0], v[1], 0, 1};
 _gles_glVertexAttribI4uiv (index, v1);
}

void glVertexAttribI3uiv (GLuint index, const GLuint *v){    _LOAD_GLES    
 const GLuint v1[4] = {v[0], v[1], v[2], 1};
 _gles_glVertexAttribI4uiv (index, v1);
}

void glVertexAttribI4uiv (GLuint index, const GLuint *v){    _LOAD_GLES    
 _gles_glVertexAttribI4uiv (index, v);

}

void glVertexAttribI4bv (GLuint index, const GLbyte *v){    _LOAD_GLES    
 const GLuint v1[4] = {(GLuint)v[0], (GLuint)v[1], (GLuint)v[3], (GLuint)v[3]};
 _gles_glVertexAttribI4uiv (index, v1);
}

void glVertexAttribI4sv (GLuint index, const GLshort *v){    _LOAD_GLES    
 const GLuint v1[4] = {(GLuint)v[0], (GLuint)v[1], (GLuint)v[2], (GLuint)v[3]};
 _gles_glVertexAttribI4uiv (index, v1);
}

void glVertexAttribI4ubv (GLuint index, const GLubyte *v){    _LOAD_GLES    
 const GLuint v1[4] = {(GLuint)v[0], (GLuint)v[1], (GLuint)v[2], (GLuint)v[3]};
 _gles_glVertexAttribI4uiv (index, v1);
}

void glVertexAttribI4usv (GLuint index, const GLushort *v){    _LOAD_GLES    
 const GLuint v1[4] = {(GLuint)v[0], (GLuint)v[1], (GLuint)v[2], (GLuint)v[3]};
 _gles_glVertexAttribI4uiv (index, v1);
}

void glGetUniformuiv (GLuint program, GLint location, GLuint *params){    _LOAD_GLES    
 _gles_glGetUniformuiv (program, location, params);

}

void glBindFragDataLocation (GLuint program, GLuint color, const GLchar *name){    _LOAD_GLES    
;// _gles_glBindFragDataLocation (program, color, name);

}

GLint glGetFragDataLocation (GLuint program, const GLchar *name){    _LOAD_GLES    
 return _gles_glGetFragDataLocation (program, name);

}

void glUniform1ui (GLint location, GLuint v0){    _LOAD_GLES    
 _gles_glUniform1ui (location, v0);

}

void glUniform2ui (GLint location, GLuint v0, GLuint v1){    _LOAD_GLES    
 _gles_glUniform2ui (location, v0, v1);

}

void glUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2){    _LOAD_GLES    
 _gles_glUniform3ui (location, v0, v1, v2);

}

void glUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3){    _LOAD_GLES    
 _gles_glUniform4ui (location, v0, v1, v2, v3);

}

void glUniform1uiv (GLint location, GLsizei count, const GLuint *value){    _LOAD_GLES    
 _gles_glUniform1uiv (location, count, value);

}

void glUniform2uiv (GLint location, GLsizei count, const GLuint *value){    _LOAD_GLES    
 _gles_glUniform2uiv (location, count, value);

}

void glUniform3uiv (GLint location, GLsizei count, const GLuint *value){    _LOAD_GLES    
 _gles_glUniform3uiv (location, count, value);

}

void glUniform4uiv (GLint location, GLsizei count, const GLuint *value){    _LOAD_GLES    
 _gles_glUniform4uiv (location, count, value);

}

void glTexParameterIiv (GLenum target, GLenum pname, const GLint *params){    _LOAD_GLES    
 _gles_glTexParameterIiv (target, pname, params);

}

void glTexParameterIuiv (GLenum target, GLenum pname, const GLuint *params){    _LOAD_GLES    
 _gles_glTexParameterIuiv (target, pname, params);

}

void glGetTexParameterIiv (GLenum target, GLenum pname, GLint *params){    _LOAD_GLES    
 _gles_glGetTexParameterIiv (target, pname, params);

}

void glGetTexParameterIuiv (GLenum target, GLenum pname, GLuint *params){    _LOAD_GLES    
 _gles_glGetTexParameterIuiv (target, pname, params);

}

void glClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint *value){    _LOAD_GLES    
 _gles_glClearBufferiv (buffer, drawbuffer, value);
//====
}

void glClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint *value){    _LOAD_GLES    
 _gles_glClearBufferuiv (buffer, drawbuffer, value);
//====
}

void glClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat *value){    _LOAD_GLES    
 _gles_glClearBufferfv (buffer, drawbuffer, value);
//====
}

void glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil){    _LOAD_GLES    
 _gles_glClearBufferfi (buffer, drawbuffer, depth, stencil);
//====
}

const GLubyte *glGetStringi (GLenum name, GLuint index){    _LOAD_GLES    
 return gl4es_glGetStringi (name, index);

}

GLboolean glIsRenderbuffer (GLuint renderbuffer){    _LOAD_GLES    
 return gl4es_glIsRenderbuffer (renderbuffer);

}

void glBindRenderbuffer (GLenum target, GLuint renderbuffer){    _LOAD_GLES    
 gl4es_glBindRenderbuffer (target, renderbuffer);

}

void glDeleteRenderbuffers (GLsizei n, const GLuint *renderbuffers){    _LOAD_GLES    
 gl4es_glDeleteRenderbuffers (n, renderbuffers);

}

void glGenRenderbuffers (GLsizei n, GLuint *renderbuffers){    _LOAD_GLES    
 gl4es_glGenRenderbuffers (n, renderbuffers);

}

void glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height){    _LOAD_GLES    
 gl4es_glRenderbufferStorage (target, internalformat, width, height);

}

void glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint *params){    _LOAD_GLES    
 gl4es_glGetRenderbufferParameteriv (target, pname, params);

}

GLboolean glIsFramebuffer (GLuint framebuffer){    _LOAD_GLES    
 return gl4es_glIsFramebuffer (framebuffer);

}

void glBindFramebuffer (GLenum target, GLuint framebuffer){    _LOAD_GLES    
 gl4es_glBindFramebuffer (target, framebuffer);

}

void glDeleteFramebuffers (GLsizei n, const GLuint *framebuffers){    _LOAD_GLES    
 gl4es_glDeleteFramebuffers (n, framebuffers);

}

void glGenFramebuffers (GLsizei n, GLuint *framebuffers){    _LOAD_GLES    
 gl4es_glGenFramebuffers (n, framebuffers);

}

GLenum glCheckFramebufferStatus (GLenum target){    _LOAD_GLES    
 return gl4es_glCheckFramebufferStatus (target);

}

void glFramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){    _LOAD_GLES    
 gl4es_glFramebufferTexture1D (target, attachment, textarget, texture, level);

}

void glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level){    _LOAD_GLES    
/* if(count%num==0){
  Printf("////////FramebufferTexture2D attachment : %x  ////////\n", attachment);
 }
 count++;
 if(count>50000000){
  count=0;
 }
*/
 _gles_glFramebufferTexture2D (target, attachment, textarget, texture, level);

}

void glFramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset){    _LOAD_GLES    
 gl4es_glFramebufferTexture3D (target, attachment, textarget, texture, level, zoffset);

}

void glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer){    _LOAD_GLES    
 _gles_glFramebufferRenderbuffer (target, attachment, renderbuffertarget, renderbuffer);

}

void glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint *params){    _LOAD_GLES    
 _gles_glGetFramebufferAttachmentParameteriv (target, attachment, pname, params);

}

void glGenerateMipmap (GLenum target){    _LOAD_GLES    
 gl4es_glGenerateMipmap (target);

}

void glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter){    _LOAD_GLES    
 gl4es_glBlitFramebuffer (srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);

}

void glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height){    _LOAD_GLES    
 gl4es_glRenderbufferStorageMultisample (target, samples, internalformat, width, height);

}

void glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer){    _LOAD_GLES    
 _gles_glFramebufferTextureLayer (target, attachment, texture, level, layer);

}

void *glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access){    _LOAD_GLES    
 return gl4es_glMapBufferRange (target, offset, length, access);

}

void glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length){    _LOAD_GLES    
 gl4es_glFlushMappedBufferRange (target, offset, length);

}

void glBindVertexArray (GLuint array){    _LOAD_GLES    
 last_vaobj = array;
 gl4es_glBindVertexArray (array);

}

void glDeleteVertexArrays (GLsizei n, const GLuint *arrays){    _LOAD_GLES    
 gl4es_glDeleteVertexArrays (n, arrays);

}

void glGenVertexArrays (GLsizei n, GLuint *arrays){    _LOAD_GLES    
 gl4es_glGenVertexArrays (n, arrays);

}

GLboolean glIsVertexArray (GLuint array){    _LOAD_GLES    
 return gl4es_glIsVertexArray (array);

}



// GL_VERSION_3_1
void glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount){

 _gles_glDrawArraysInstanced (mode, first, count, instancecount);

}

void glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount){

 _gles_glDrawElementsInstanced (mode, count, type, indices, instancecount);

}

void glTexBuffer (GLenum target, GLenum internalformat, GLuint buffer){

 _gles_glTexBuffer (target, internalformat, buffer);

}

void glPrimitiveRestartIndex (GLuint index){

 //glPrimitiveRestartIndex (index);

}

void glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size){

 _gles_glCopyBufferSubData (readTarget, writeTarget, readOffset, writeOffset, size);

}

void glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices){

 _gles_glGetUniformIndices (program, uniformCount, uniformNames, uniformIndices);

}

void glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params){

 _gles_glGetActiveUniformsiv (program, uniformCount, uniformIndices, pname, params);

}

void glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName){

 //glGetActiveUniformName (program, uniformIndex, bufSize, length, uniformName);
 _gles_glGetActiveUniformBlockName (program, uniformIndex, bufSize, length, uniformName);
//pack
}

GLuint glGetUniformBlockIndex (GLuint program, const GLchar *uniformBlockName){

 return glGetUniformBlockIndex (program, uniformBlockName);

}

void glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params){

 _gles_glGetActiveUniformBlockiv (program, uniformBlockIndex, pname, params);

}

void glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName){

 _gles_glGetActiveUniformBlockName (program, uniformBlockIndex, bufSize, length, uniformBlockName);

}

void glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding){

 _gles_glUniformBlockBinding (program, uniformBlockIndex, uniformBlockBinding);

}




// GL_VERSION_3_2
void glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex){

 _gles_glDrawElementsBaseVertex (mode, count, type, indices, basevertex);

}

void glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex){

 _gles_glDrawRangeElementsBaseVertex (mode, start, end, count, type, indices, basevertex);

}

void glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex){

 _gles_glDrawElementsInstancedBaseVertex (mode, count, type, indices, instancecount, basevertex);

}

void glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex){

 for(int i = 0; i<drawcount; i++){
 	_gles_glDrawElementsBaseVertex (mode, count[i], type, indices[i], basevertex[i]);
 }
//pack
}

void glProvokingVertex (GLenum mode){

 //glProvokingVertex (mode);

}

GLsync glFenceSync (GLenum condition, GLbitfield flags){

 return glFenceSync (condition, flags);

}

GLboolean glIsSync (GLsync sync){

 return glIsSync (sync);

}

void glDeleteSync (GLsync sync){

 _gles_glDeleteSync (sync);

}

GLenum glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout){

 return glClientWaitSync (sync, flags, timeout);

}

void glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout){

 _gles_glWaitSync (sync, flags, timeout);

}

void glGetInteger64v (GLenum pname, GLint64 *data){

 _gles_glGetInteger64v (pname, data);

}

void glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values){

 _gles_glGetSynciv (sync, pname, bufSize, length, values);

}

void glGetInteger64i_v (GLenum target, GLuint index, GLint64 *data){

 _gles_glGetInteger64i_v (target, index, data);

}

void glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 *params){

 _gles_glGetBufferParameteri64v (target, pname, params);

}

void glFramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level){

 _gles_glFramebufferTexture (target, attachment, texture, level);

}

void glTexImage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations){

 //_gles_glTexImage2DMultisample (target, samples, internalformat, width, height, fixedsamplelocations);
 //_gles_glTexStorage2DMultisample (target, samples, internalformat, width, height, fixedsamplelocations);
//pack
}

void glTexImage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations){

 //_gles_glTexImage3DMultisample (target, samples, internalformat, width, height, depth, fixedsamplelocations);
 //_gles_glTexStorage3DMultisample (target, samples, internalformat, width, height, depth, fixedsamplelocations);
//pack
}

void glGetMultisamplefv (GLenum pname, GLuint index, GLfloat *val){

 _gles_glGetMultisamplefv (pname, index, val);

}

void glSampleMaski (GLuint maskNumber, GLbitfield mask){

 _gles_glSampleMaski (maskNumber, mask);

}




// GL_VERSION_3_3
void glBindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name){

 //glBindFragDataLocationIndexed (program, colorNumber, index, name);

}

GLint glGetFragDataIndex (GLuint program, const GLchar *name){

 //return glGetFragDataIndex (program, name);
 return _gles_glGetFragDataLocation (program, name);
//pack
}

void glGenSamplers (GLsizei count, GLuint *samplers){

 _gles_glGenSamplers (count, samplers);

}

void glDeleteSamplers (GLsizei count, const GLuint *samplers){

 _gles_glDeleteSamplers (count, samplers);

}

GLboolean glIsSampler (GLuint sampler){

 return glIsSampler (sampler);

}

void glBindSampler (GLuint unit, GLuint sampler){

 _gles_glBindSampler (unit, sampler);

}

void glSamplerParameteri (GLuint sampler, GLenum pname, GLint param){

 _gles_glSamplerParameteri (sampler, pname, param);

}

void glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint *param){

 _gles_glSamplerParameteriv (sampler, pname, param);

}

void glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param){

 _gles_glSamplerParameterf (sampler, pname, param);

}

void glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat *param){

 _gles_glSamplerParameterfv (sampler, pname, param);

}

void glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint *param){

 _gles_glSamplerParameterIiv (sampler, pname, param);

}

void glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint *param){

 _gles_glSamplerParameterIuiv (sampler, pname, param);

}

void glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint *params){

 _gles_glGetSamplerParameteriv (sampler, pname, params);

}

void glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint *params){

 _gles_glGetSamplerParameterIiv (sampler, pname, params);

}

void glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat *params){

 _gles_glGetSamplerParameterfv (sampler, pname, params);

}

void glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint *params){

 _gles_glGetSamplerParameterIuiv (sampler, pname, params);

}

void glQueryCounter (GLuint id, GLenum target){

 //glQueryCounter (id, target);

}

void glGetQueryObjecti64v (GLuint id, GLenum pname, GLint64 *params){

 //glGetQueryObjecti64v (id, pname, params);

}

void glGetQueryObjectui64v (GLuint id, GLenum pname, GLuint64 *params){

 //glGetQueryObjectui64v (id, pname, params);

}

void glVertexAttribDivisor (GLuint index, GLuint divisor){

 gl4es_glVertexAttribDivisor (index, divisor);

}

void glVertexAttribP1ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){

 //glVertexAttribP1ui (index, type, normalized, value);

}

void glVertexAttribP1uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value){

 //glVertexAttribP1uiv (index, type, normalized, value);

}

void glVertexAttribP2ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){

 //glVertexAttribP2ui (index, type, normalized, value);

}

void glVertexAttribP2uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value){

 //glVertexAttribP2uiv (index, type, normalized, value);

}

void glVertexAttribP3ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){

 //glVertexAttribP3ui (index, type, normalized, value);

}

void glVertexAttribP3uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value){

 //glVertexAttribP3uiv (index, type, normalized, value);

}

void glVertexAttribP4ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){

 //glVertexAttribP4ui (index, type, normalized, value);

}

void glVertexAttribP4uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value){

 //glVertexAttribP4uiv (index, type, normalized, value);

}




// GL_VERSION_4_0
void glMinSampleShading (GLfloat value){

 _gles_glMinSampleShading (value);

}

void glBlendEquationi (GLuint buf, GLenum mode){

 _gles_glBlendEquationi (buf, mode);

}

void glBlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha){

 _gles_glBlendEquationSeparatei (buf, modeRGB, modeAlpha);

}

void glBlendFunci (GLuint buf, GLenum src, GLenum dst){

 _gles_glBlendFunci (buf, src, dst);

}

void glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha){

 _gles_glBlendFuncSeparatei (buf, srcRGB, dstRGB, srcAlpha, dstAlpha);

}

void glDrawArraysIndirect (GLenum mode, const void *indirect){

 _gles_glDrawArraysIndirect (mode, indirect);

}

void glDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect){

 _gles_glDrawElementsIndirect (mode, type, indirect);

}

void glUniform1d (GLint location, GLdouble x){

 glUniform1f (location, (float)x);
//pack
}

void glUniform2d (GLint location, GLdouble x, GLdouble y){

 glUniform2f (location, (float)x, (float)y);
//pack
}

void glUniform3d (GLint location, GLdouble x, GLdouble y, GLdouble z){

 glUniform3f (location, (float)x, (float)y, (float)z);
//pack
}

void glUniform4d (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w){

 glUniform4f (location, (float)x, (float)y, (float)z, (float)w);
//pack
}

void glUniform1dv (GLint location, GLsizei count, const GLdouble *value){

 GLfloat value_[1] = {(float)value[0]};
 glUniform1fv (location, count, (const GLfloat *)value_);
//pack
}

void glUniform2dv (GLint location, GLsizei count, const GLdouble *value){

 GLfloat value_[2] = {(float)value[0], (float)value[1]};
 glUniform2fv (location, count, (const GLfloat *)value_);
//pack
}

void glUniform3dv (GLint location, GLsizei count, const GLdouble *value){

 GLfloat value_[3] = {(float)value[0], (float)value[1], (float)value[2]};
 glUniform3fv (location, count, (const GLfloat *)value_);
//pack
}

void glUniform4dv (GLint location, GLsizei count, const GLdouble *value){

 GLfloat value_[4] = {(float)value[0], (float)value[1], (float)value[2], (float)value[3]};
 glUniform4fv (location, count, (const GLfloat *)value_);
//pack
}

void glUniformMatrix2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glUniformMatrix2dv (location, count, transpose, value);
//pack
}

void glUniformMatrix3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glUniformMatrix3dv (location, count, transpose, value);
//pack
}

void glUniformMatrix4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glUniformMatrix4dv (location, count, transpose, value);
//pack
}

void glUniformMatrix2x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glUniformMatrix2x3dv (location, count, transpose, value);
//pack
}

void glUniformMatrix2x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glUniformMatrix2x4dv (location, count, transpose, value);
//pack
}

void glUniformMatrix3x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glUniformMatrix3x2dv (location, count, transpose, value);
//pack
}

void glUniformMatrix3x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glUniformMatrix3x4dv (location, count, transpose, value);
//pack
}

void glUniformMatrix4x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glUniformMatrix4x2dv (location, count, transpose, value);
//pack
}

void glUniformMatrix4x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glUniformMatrix4x3dv (location, count, transpose, value);
//pack
}

void glGetUniformdv (GLuint program, GLint location, GLdouble *params){

 GLfloat params_;
 glGetUniformfv (program, location, &params_);
 *params = (GLdouble)params_;
//pack
}

GLint glGetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar *name){

 //return glGetSubroutineUniformLocation (program, shadertype, name);
 return _gles_glGetUniformLocation (program, name);

}

GLuint glGetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar *name){

 return 0; //glGetSubroutineIndex (program, shadertype, name);

}

void glGetActiveSubroutineUniformiv (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values){

 //glGetActiveSubroutineUniformiv (program, shadertype, index, pname, values);

}

void glGetActiveSubroutineUniformName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name){

 //glGetActiveSubroutineUniformName (program, shadertype, index, bufsize, length, name);

}

void glGetActiveSubroutineName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name){

 //glGetActiveSubroutineName (program, shadertype, index, bufsize, length, name);

}

void glUniformSubroutinesuiv (GLenum shadertype, GLsizei count, const GLuint *indices){

 //glUniformSubroutinesuiv (shadertype, count, indices);

}

void glGetUniformSubroutineuiv (GLenum shadertype, GLint location, GLuint *params){

 //glGetUniformSubroutineuiv (shadertype, location, params);

}

void glGetProgramStageiv (GLuint program, GLenum shadertype, GLenum pname, GLint *values){

 //glGetProgramStageiv (program, shadertype, pname, values);

}

void glPatchParameteri (GLenum pname, GLint value){

 _gles_glPatchParameteri (pname, value);

}

void glPatchParameterfv (GLenum pname, const GLfloat *values){

 //glPatchParameterfv (pname, values);

}

void glBindTransformFeedback (GLenum target, GLuint id){

 _gles_glBindTransformFeedback (target, id);

}

void glDeleteTransformFeedbacks (GLsizei n, const GLuint *ids){

 _gles_glDeleteTransformFeedbacks (n, ids);

}

void glGenTransformFeedbacks (GLsizei n, GLuint *ids){

 _gles_glGenTransformFeedbacks (n, ids);

}

GLboolean glIsTransformFeedback (GLuint id){

 return glIsTransformFeedback (id);

}

void glPauseTransformFeedback (void){

 _gles_glPauseTransformFeedback ();

}

void glResumeTransformFeedback (void){

 _gles_glResumeTransformFeedback ();

}

void glDrawTransformFeedback (GLenum mode, GLuint id){

 //glDrawTransformFeedback (mode, id);

}

void glDrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream){

 //glDrawTransformFeedbackStream (mode, id, stream);

}

void glBeginQueryIndexed (GLenum target, GLuint index, GLuint id){

 //_gles_glBeginQueryIndexed (target, index, id);

}

void glEndQueryIndexed (GLenum target, GLuint index){

 //_gles_glEndQueryIndexed (target, index);

}

void glGetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint *params){

 //glGetQueryIndexediv (target, index, pname, params);

}




// GL_VERSION_4_1
void glReleaseShaderCompiler (void){

 _gles_glReleaseShaderCompiler ();

}

void glShaderBinary (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length){

 _gles_glShaderBinary (count, shaders, binaryformat, binary, length);

}

void glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision){

 _gles_glGetShaderPrecisionFormat (shadertype, precisiontype, range, precision);

}

void glDepthRangef (GLfloat n, GLfloat f){

 _gles_glDepthRangef (n, f);

}

void glClearDepthf (GLfloat d){

 _gles_glClearDepthf (d);

}

void glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary){

 _gles_glGetProgramBinary (program, bufSize, length, binaryFormat, binary);

}

void glProgramBinary (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length){

 _gles_glProgramBinary (program, binaryFormat, binary, length);

}

void glProgramParameteri (GLuint program, GLenum pname, GLint value){

 _gles_glProgramParameteri (program, pname, value);

}

void glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program){

 _gles_glUseProgramStages (pipeline, stages, program);

}

void glActiveShaderProgram (GLuint pipeline, GLuint program){

 _gles_glActiveShaderProgram (pipeline, program);

}

GLuint glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const*strings){

 return glCreateShaderProgramv (type, count, strings);

}

void glBindProgramPipeline (GLuint pipeline){

 _gles_glBindProgramPipeline (pipeline);

}

void glDeleteProgramPipelines (GLsizei n, const GLuint *pipelines){

 _gles_glDeleteProgramPipelines (n, pipelines);

}

void glGenProgramPipelines (GLsizei n, GLuint *pipelines){

 _gles_glGenProgramPipelines (n, pipelines);

}

GLboolean glIsProgramPipeline (GLuint pipeline){

 return glIsProgramPipeline (pipeline);

}

void glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint *params){

 _gles_glGetProgramPipelineiv (pipeline, pname, params);

}

void glProgramUniform1i (GLuint program, GLint location, GLint v0){

 _gles_glProgramUniform1i (program, location, v0);

}

void glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint *value){

 _gles_glProgramUniform1iv (program, location, count, value);

}

void glProgramUniform1f (GLuint program, GLint location, GLfloat v0){

 _gles_glProgramUniform1f (program, location, v0);

}

void glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat *value){

 _gles_glProgramUniform1fv (program, location, count, value);

}

void glProgramUniform1d (GLuint program, GLint location, GLdouble v0){

 _gles_glProgramUniform1f (program, location, (float)v0);
//pack
}

void glProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble *value){

 GLfloat value_[1] = {(float)value[0]};
 _gles_glProgramUniform1fv (program, location, count, (const GLfloat *)value);
//pack
}

void glProgramUniform1ui (GLuint program, GLint location, GLuint v0){

 _gles_glProgramUniform1ui (program, location, v0);

}

void glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint *value){

 _gles_glProgramUniform1uiv (program, location, count, value);

}

void glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1){

 _gles_glProgramUniform2i (program, location, v0, v1);

}

void glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint *value){

 _gles_glProgramUniform2iv (program, location, count, value);

}

void glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1){

 _gles_glProgramUniform2f (program, location, v0, v1);

}

void glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat *value){

 _gles_glProgramUniform2fv (program, location, count, value);

}

void glProgramUniform2d (GLuint program, GLint location, GLdouble v0, GLdouble v1){

 _gles_glProgramUniform2f (program, location, (float)v0, (float)v1);
//pack
}

void glProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble *value){

 GLfloat value_[2] = {(float)value[0], (float)value[1]};
 _gles_glProgramUniform2fv (program, location, count, (const GLfloat *)value);
//pack
}

void glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1){

 _gles_glProgramUniform2ui (program, location, v0, v1);

}

void glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint *value){

 _gles_glProgramUniform2uiv (program, location, count, value);

}

void glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2){

 _gles_glProgramUniform3i (program, location, v0, v1, v2);

}

void glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint *value){

 _gles_glProgramUniform3iv (program, location, count, value);

}

void glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2){

 _gles_glProgramUniform3f (program, location, v0, v1, v2);

}

void glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat *value){

 _gles_glProgramUniform3fv (program, location, count, value);

}

void glProgramUniform3d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2){

 _gles_glProgramUniform3f (program, location, (float)v0, (float)v1, (float)v2);
//pack
}

void glProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble *value){

 GLfloat value_[3] = {(float)value[0], (float)value[1], (float)value[2]};
 _gles_glProgramUniform3fv (program, location, count, (const GLfloat *)value);
//pack
}

void glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2){

 _gles_glProgramUniform3ui (program, location, v0, v1, v2);

}

void glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint *value){

 _gles_glProgramUniform3uiv (program, location, count, value);

}

void glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3){

 _gles_glProgramUniform4i (program, location, v0, v1, v2, v3);

}

void glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint *value){

 _gles_glProgramUniform4iv (program, location, count, value);

}

void glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3){

 _gles_glProgramUniform4f (program, location, v0, v1, v2, v3);

}

void glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat *value){

 _gles_glProgramUniform4fv (program, location, count, value);

}

void glProgramUniform4d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3){

 _gles_glProgramUniform4f (program, location, (float)v0, (float)v1, (float)v2, (float)v3);
//pack
}

void glProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble *value){

 GLfloat value_[4] = {(float)value[0], (float)value[1], (float)value[2], (float)value[3]};
 _gles_glProgramUniform4fv (program, location, count, (const GLfloat *)value);
//pack
}

void glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3){

 _gles_glProgramUniform4ui (program, location, v0, v1, v2, v3);

}

void glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint *value){

 _gles_glProgramUniform4uiv (program, location, count, value);

}

void glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 _gles_glProgramUniformMatrix2fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 _gles_glProgramUniformMatrix3fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 _gles_glProgramUniformMatrix4fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glProgramUniformMatrix2dv (program, location, count, transpose, value);
//pack
}

void glProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glProgramUniformMatrix3dv (program, location, count, transpose, value);
//pack
}

void glProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glProgramUniformMatrix4dv (program, location, count, transpose, value);
//pack
}

void glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 _gles_glProgramUniformMatrix2x3fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 _gles_glProgramUniformMatrix3x2fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 _gles_glProgramUniformMatrix2x4fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 _gles_glProgramUniformMatrix4x2fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 _gles_glProgramUniformMatrix3x4fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 _gles_glProgramUniformMatrix4x3fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glProgramUniformMatrix2x3dv (program, location, count, transpose, value);
//pack
}

void glProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glProgramUniformMatrix3x2dv (program, location, count, transpose, value);
//pack
}

void glProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glProgramUniformMatrix2x4dv (program, location, count, transpose, value);
//pack
}

void glProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glProgramUniformMatrix4x2dv (program, location, count, transpose, value);
//pack
}

void glProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glProgramUniformMatrix3x4dv (program, location, count, transpose, value);
//pack
}

void glProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 //glProgramUniformMatrix4x3dv (program, location, count, transpose, value);
//pack
}

void glValidateProgramPipeline (GLuint pipeline){

 _gles_glValidateProgramPipeline (pipeline);

}

void glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog){

 _gles_glGetProgramPipelineInfoLog (pipeline, bufSize, length, infoLog);

}

void glVertexAttribL1d (GLuint index, GLdouble x){

 //glVertexAttribL1d (index, x);
//pack
}

void glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y){

 //glVertexAttribL2d (index, x, y);
//pack
}

void glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z){

 //glVertexAttribL3d (index, x, y, z);
//pack
}

void glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w){

 //glVertexAttribL4d (index, x, y, z, w);
//pack
}

void glVertexAttribL1dv (GLuint index, const GLdouble *v){

 //glVertexAttribL1dv (index, v);
//pack
}

void glVertexAttribL2dv (GLuint index, const GLdouble *v){

 //glVertexAttribL2dv (index, v);
//pack
}

void glVertexAttribL3dv (GLuint index, const GLdouble *v){

 //glVertexAttribL3dv (index, v);
//pack
}

void glVertexAttribL4dv (GLuint index, const GLdouble *v){

 //glVertexAttribL4dv (index, v);
//pack
}

void glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer){

 //glVertexAttribLPointer (index, size, type, stride, pointer);
//pack
}

void glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble *params){

 //glGetVertexAttribLdv (index, pname, params);
//pack
}

void glViewportArrayv (GLuint first, GLsizei count, const GLfloat *v){

 //_gles_glViewportArrayv (first, count, v);

}

void glViewportIndexedf (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h){

 //glViewportIndexedf (index, x, y, w, h);
 _gles_glViewport ((GLint)x, (GLint)y, (GLsizei)w, (GLsizei)h);
//pack
}

void glViewportIndexedfv (GLuint index, const GLfloat *v){

 _gles_glViewport ((GLint)v[0], (GLint)v[1], (GLsizei)v[2], (GLsizei)v[3]);
//pack
}

void glScissorArrayv (GLuint first, GLsizei count, const GLint *v){

 //_gles_glScissorArrayv (first, count, v);

}

void glScissorIndexed (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height){

 //glScissorIndexed (index, left, bottom, width, height);

}

void glScissorIndexedv (GLuint index, const GLint *v){

 //glScissorIndexedv (index, v);

}

void glDepthRangeArrayv (GLuint first, GLsizei count, const GLdouble *v){

 //glDepthRangeArrayv (first, count, v);

}

void glDepthRangeIndexed (GLuint index, GLdouble n, GLdouble f){

 //glDepthRangeIndexed (index, n, f);

}

void glGetFloati_v (GLenum target, GLuint index, GLfloat *data){

 //glGetFloati_v (target, index, data);

}

void glGetDoublei_v (GLenum target, GLuint index, GLdouble *data){

 //glGetDoublei_v (target, index, data);

}




// GL_VERSION_4_2
void glDrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance){

 //_gles_glDrawArraysInstancedBaseInstance (mode, first, count, instancecount, baseinstance);
 _gles_glDrawArraysInstanced (mode, first, count, instancecount);
//pack
}

void glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance){

 //_gles_glDrawElementsInstancedBaseVertexBaseInstance (mode, count, type, indices, instancecount, 0, baseinstance);
 _gles_glDrawElementsInstanced (mode, count, type, indices, instancecount);
//pack
}

void glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance){

 //_gles_glDrawElementsInstancedBaseVertexBaseInstance (mode, count, type, indices, instancecount, basevertex, baseinstance);
 _gles_glDrawElementsInstancedBaseVertex (mode, count, type, indices, instancecount, basevertex);
//pack
}

void glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params){

 _gles_glGetInternalformativ (target, internalformat, pname, bufSize, params);

}

void glGetActiveAtomicCounterBufferiv (GLuint program, GLuint bufferIndex, GLenum pname, GLint *params){

 //glGetActiveAtomicCounterBufferiv (program, bufferIndex, pname, params);

}

void glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format){

 _gles_glBindImageTexture (unit, texture, level, layered, layer, access, format);

}

void glMemoryBarrier (GLbitfield barriers){

 _gles_glMemoryBarrier (barriers);

}

void glTexStorage1D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width){

 _gles_glTexStorage2D (target, levels, internalformat, width, 0);
//pack
}

void glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height){

 _gles_glTexStorage2D (target, levels, internalformat, width, height);

}

void glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth){

 _gles_glTexStorage3D (target, levels, internalformat, width, height, depth);

}

void glDrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount){

 //glDrawTransformFeedbackInstanced (mode, id, instancecount);

}

void glDrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount){

 //glDrawTransformFeedbackStreamInstanced (mode, id, stream, instancecount);

}




// GL_VERSION_4_3
void glClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data){

 //glClearBufferData (target, internalformat, format, type, data);

}

void glClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data){

 //glClearBufferSubData (target, internalformat, offset, size, format, type, data);

}

void glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z){

 _gles_glDispatchCompute (num_groups_x, num_groups_y, num_groups_z);

}

void glDispatchComputeIndirect (GLintptr indirect){

 _gles_glDispatchComputeIndirect (indirect);

}

void glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth){

 _gles_glCopyImageSubData (srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);

}

void glFramebufferParameteri (GLenum target, GLenum pname, GLint param){

 _gles_glFramebufferParameteri (target, pname, param);

}

void glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint *params){

 _gles_glGetFramebufferParameteriv (target, pname, params);

}

void glGetInternalformati64v (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params){

 //glGetInternalformati64v (target, internalformat, pname, bufSize, params);

}

void glInvalidateTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth){

 //glInvalidateTexSubImage (texture, level, xoffset, yoffset, zoffset, width, height, depth);

}

void glInvalidateTexImage (GLuint texture, GLint level){

 //glInvalidateTexImage (texture, level);

}

void glInvalidateBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr length){

 //glInvalidateBufferSubData (buffer, offset, length);

}

void glInvalidateBufferData (GLuint buffer){

 //glInvalidateBufferData (buffer);

}

void glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments){

 _gles_glInvalidateFramebuffer (target, numAttachments, attachments);

}

void glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height){

 _gles_glInvalidateSubFramebuffer (target, numAttachments, attachments, x, y, width, height);

}
/*
typedef  struct {
        GLuint  count;
        GLuint  instanceCount;
        GLuint  first;
        GLuint  baseInstance;
    } DrawArraysIndirectCommand;
*/
void glMultiDrawArraysIndirect (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride){

 GLsizei i;
    GLint len_DrawArraysIndirectCommand = sizeof(DrawArraysIndirectCommand);
    DrawArraysIndirectCommand *cmd = (DrawArraysIndirectCommand *)indirect;
    for (i = 0; i < drawcount; i++){
        _gles_glDrawArraysIndirect(mode, cmd);
        if (stride == 0) {
        	cmd += len_DrawArraysIndirectCommand;
        } else {
        	cmd += stride;
        }
    }
    /*for (n = 0; n < drawcount; n++) {
        const DrawArraysIndirectCommand *cmd;
        if (stride != 0) {
            cmd = (const DrawArraysIndirectCommand  *)((GLintptr)indirect + n * stride);
        } else  {
            cmd = (const DrawArraysIndirectCommand  *)indirect + n;
        }

        glDrawArraysInstancedBaseInstance(mode, cmd->first, cmd->count, cmd->instanceCount, cmd->baseInstance);
    }*/
 //glMultiDrawArraysIndirect (mode, indirect, drawcount, stride);
//pack
}
/*
typedef  struct {
        GLuint  count;
        GLuint  instanceCount;
        GLuint  firstIndex;
        GLuint  baseVertex;
        GLuint  baseInstance;
    } DrawElementsIndirectCommand;
*/
void glMultiDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride){

 GLsizei i;
    GLint len_DrawElementsIndirectCommand = sizeof(DrawElementsIndirectCommand);
    DrawElementsIndirectCommand *cmd = (DrawElementsIndirectCommand *)indirect;
    for (i = 0; i < drawcount; i++){
        _gles_glDrawElementsIndirect(mode, type, cmd);
        if (stride == 0) {
        	cmd += len_DrawElementsIndirectCommand;
        } else {
        	cmd += stride;
        }
    }
    /*for (n = 0; n < drawcount; n++) {
        const DrawElementsIndirectCommand *cmd;
        if (stride != 0) {
            cmd = (const DrawElementsIndirectCommand  *)((GLintptr)indirect + n * stride);
        } else {
            cmd = (const DrawElementsIndirectCommand  *)indirect + n;
        }

        glDrawElementsInstancedBaseVertexBaseInstance(mode,
                                                      cmd->count,
                                                      type,
                                                      cmd->firstIndex * sizeof(DrawElementsIndirectCommand),
                                                      cmd->instanceCount,
                                                      cmd->baseVertex,
                                                      cmd->baseInstance);
    }*/
 //glMultiDrawElementsIndirect (mode, type, indirect, drawcount, stride);
//pack
}

void glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint *params){

 _gles_glGetProgramInterfaceiv (program, programInterface, pname, params);

}

GLuint glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar *name){

 return glGetProgramResourceIndex (program, programInterface, name);

}

void glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name){

 _gles_glGetProgramResourceName (program, programInterface, index, bufSize, length, name);

}

void glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params){

 _gles_glGetProgramResourceiv (program, programInterface, index, propCount, props, bufSize, length, params);

}

GLint glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar *name){

 return glGetProgramResourceLocation (program, programInterface, name);

}

GLint glGetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar *name){

 return 0; //glGetProgramResourceLocationIndex (program, programInterface, name);

}

void glShaderStorageBlockBinding (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding){

 //glShaderStorageBlockBinding (program, storageBlockIndex, storageBlockBinding);

}

void glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size){

 _gles_glTexBufferRange (target, internalformat, buffer, offset, size);

}

void glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations){

 _gles_glTexStorage2DMultisample (target, samples, internalformat, width, height, fixedsamplelocations);

}

void glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations){

 _gles_glTexStorage3DMultisample (target, samples, internalformat, width, height, depth, fixedsamplelocations);

}

void glTextureView (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers){

 //glTextureView (texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);

}

void glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride){

 _gles_glBindVertexBuffer (bindingindex, buffer, offset, stride);

}

void glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset){

 _gles_glVertexAttribFormat (attribindex, size, type, normalized, relativeoffset);

}

void glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){

 _gles_glVertexAttribIFormat (attribindex, size, type, relativeoffset);

}

void glVertexAttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){

 //glVertexAttribLFormat (attribindex, size, type, relativeoffset);

}

void glVertexAttribBinding (GLuint attribindex, GLuint bindingindex){

 _gles_glVertexAttribBinding (attribindex, bindingindex);

}

void glVertexBindingDivisor (GLuint bindingindex, GLuint divisor){

 _gles_glVertexBindingDivisor (bindingindex, divisor);

}

void glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled){

 _gles_glDebugMessageControl (source, type, severity, count, ids, enabled);

}

void glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf){

 _gles_glDebugMessageInsert (source, type, id, severity, length, buf);

}

void glDebugMessageCallback (GLDEBUGPROC callback, const void *userParam){

 _gles_glDebugMessageCallback (callback, userParam);

}

GLuint glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog){

 return glGetDebugMessageLog (count, bufSize, sources, types, ids, severities, lengths, messageLog);

}

void glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar *message){

 _gles_glPushDebugGroup (source, id, length, message);

}

void glPopDebugGroup (void){

 _gles_glPopDebugGroup ();

}

void glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar *label){

 _gles_glObjectLabel (identifier, name, length, label);

}

void glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label){

 _gles_glGetObjectLabel (identifier, name, bufSize, length, label);

}

void glObjectPtrLabel (const void *ptr, GLsizei length, const GLchar *label){

 _gles_glObjectPtrLabel (ptr, length, label);

}

void glGetObjectPtrLabel (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label){

 _gles_glGetObjectPtrLabel (ptr, bufSize, length, label);

}




// GL_VERSION_4_4
void glBufferStorage (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags){

 //glBufferStorage (target, size, data, flags);

}

void glClearTexImage (GLuint texture, GLint level, GLenum format, GLenum type, const void *data){

 //glClearTexImage (texture, level, format, type, data);

}

void glClearTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data){

 //glClearTexSubImage (texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);

}

void glBindBuffersBase (GLenum target, GLuint first, GLsizei count, const GLuint *buffers){

 //_gles_glBindBuffersBase (target, first, count, buffers);
//pack
}

void glBindBuffersRange (GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes){

 //glBindBuffersRange (target, first, count, buffers, offsets, sizes);

}

void glBindTextures (GLuint first, GLsizei count, const GLuint *textures){

 /*for (i = 0; i < count; i++) {
        GLuint texture;
        if (textures == NULL) {
            texture = 0;
        } else {
            texture = textures[i];
        }
        glActiveTexture(GL_TEXTURE0 + first + i);
        if (texture != 0) {
            GLenum target =  target of textures[i] ;
            glBindTexture(target, textures[i]);
        } else {
            for (target in all supported targets) {
                glBindTexture(target, 0);
            }
        }
    }*/
 //_gles_glBindTextures (first, count, textures);
//pack
}

void glBindSamplers (GLuint first, GLsizei count, const GLuint *samplers){

 //glBindSamplers (first, count, samplers);

}

void glBindImageTextures (GLuint first, GLsizei count, const GLuint *textures){

 //glBindImageTextures (first, count, textures);

}

void glBindVertexBuffers (GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides){

 //glBindVertexBuffers (first, count, buffers, offsets, strides);

}




// GL_VERSION_4_5
void glClipControl (GLenum origin, GLenum depth){

 //glClipControl (origin, depth);

}

void glCreateTransformFeedbacks (GLsizei n, GLuint *ids){

 //glCreateTransformFeedbacks (n, ids);

}

void glTransformFeedbackBufferBase (GLuint xfb, GLuint index, GLuint buffer){

 //glTransformFeedbackBufferBase (xfb, index, buffer);

}

void glTransformFeedbackBufferRange (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size){

 //glTransformFeedbackBufferRange (xfb, index, buffer, offset, size);

}

void glGetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint *param){

 //glGetTransformFeedbackiv (xfb, pname, param);

}

void glGetTransformFeedbacki_v (GLuint xfb, GLenum pname, GLuint index, GLint *param){

 //glGetTransformFeedbacki_v (xfb, pname, index, param);

}

void glGetTransformFeedbacki64_v (GLuint xfb, GLenum pname, GLuint index, GLint64 *param){

 //glGetTransformFeedbacki64_v (xfb, pname, index, param);

}

void glCreateBuffers (GLsizei n, GLuint *buffers){

 //glCreateBuffers (n, buffers);

}

void glNamedBufferStorage (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags){

 //glNamedBufferStorage (buffer, size, data, flags);

}

void glNamedBufferData (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage){

 //glNamedBufferData (buffer, size, data, usage);

}

void glNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data){

 //glNamedBufferSubData (buffer, offset, size, data);

}

void glCopyNamedBufferSubData (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size){

 //glCopyNamedBufferSubData (readBuffer, writeBuffer, readOffset, writeOffset, size);

}

void glClearNamedBufferData (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data){

 //glClearNamedBufferData (buffer, internalformat, format, type, data);

}

void glClearNamedBufferSubData (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data){

 //glClearNamedBufferSubData (buffer, internalformat, offset, size, format, type, data);

}

void *glMapNamedBuffer (GLuint buffer, GLenum access){

 //_gles_glBindBuffer(buffer, ...);
 return NULL; //gl4es_glMapBuffer (buffer, access);
//pack
}

void *glMapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access){

 return NULL; //gl4es_glMapNamedBufferRange (buffer, offset, length, access);
//pack
}

GLboolean glUnmapNamedBuffer (GLuint buffer){

 return gl4es_glUnmapNamedBuffer (buffer);
//pack
}

void glFlushMappedNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length){

 //_gles_glFlushMappedNamedBufferRange (buffer, offset, length);
//pack
}

void glGetNamedBufferParameteriv (GLuint buffer, GLenum pname, GLint *params){

 gl4es_glGetNamedBufferParameteriv (buffer, pname, params);
//pack
}

void glGetNamedBufferParameteri64v (GLuint buffer, GLenum pname, GLint64 *params){

 //_gles_glGetNamedBufferParameteri64v (buffer, pname, params);
//pack
}

void glGetNamedBufferPointerv (GLuint buffer, GLenum pname, void **params){

 gl4es_glGetNamedBufferPointerv (buffer, pname, params);
//pack
}

void glGetNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data){

 gl4es_glGetNamedBufferSubData (buffer, offset, size, data);
//pack
}

void glCreateFramebuffers (GLsizei n, GLuint *framebuffers){

 //glCreateFramebuffers (n, framebuffers);

}

void glNamedFramebufferRenderbuffer (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer){

 //_gles_glNamedFramebufferRenderbuffer (framebuffer, attachment, renderbuffertarget, renderbuffer);
//pack
}

void glNamedFramebufferParameteri (GLuint framebuffer, GLenum pname, GLint param){

 //_gles_glNamedFramebufferParameteri (framebuffer, pname, param);
//pack
}

void glNamedFramebufferTexture (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level){

 //_gles_glNamedFramebufferTexture (framebuffer, attachment, texture, level);
//pack
}

void glNamedFramebufferTextureLayer (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer){

 //_gles_glNamedFramebufferTextureLayer (framebuffer, attachment, texture, level, layer);
//pack
}

void glNamedFramebufferDrawBuffer (GLuint framebuffer, GLenum buf){

 //_gles_glNamedFramebufferDrawBuffer (framebuffer, buf);
//pack
}

void glNamedFramebufferDrawBuffers (GLuint framebuffer, GLsizei n, const GLenum *bufs){

 gl4es_glNamedFramebufferDrawBuffers (framebuffer, n, bufs);
//pack
}

void glNamedFramebufferReadBuffer (GLuint framebuffer, GLenum src){

 //_gles_glNamedFramebufferReadBuffer (framebuffer, src);
//pack
}

void glInvalidateNamedFramebufferData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments){

 //_gles_glInvalidateNamedFramebufferData (framebuffer, numAttachments, attachments);
//pack
}

void glInvalidateNamedFramebufferSubData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height){

 //_gles_glInvalidateNamedFramebufferSubData (framebuffer, numAttachments, attachments, x, y, width, height);
//pack
}

void glClearNamedFramebufferiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value){

 gl4es_glClearNamedFramebufferiv (framebuffer, buffer, drawbuffer, value);
//pack
}

void glClearNamedFramebufferuiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value){

 gl4es_glClearNamedFramebufferuiv (framebuffer, buffer, drawbuffer, value);
//pack
}

void glClearNamedFramebufferfv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value){

 gl4es_glClearNamedFramebufferfv (framebuffer, buffer, drawbuffer, value);
//pack
}

void glClearNamedFramebufferfi (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil){

 gl4es_glClearNamedFramebufferfi (framebuffer, buffer, drawbuffer, depth, stencil);
//pack
}

void glBlitNamedFramebuffer (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter){

 //_gles_glBlitNamedFramebuffer (readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
//pack
}

GLenum glCheckNamedFramebufferStatus (GLuint framebuffer, GLenum target){

 return GL_TRUE; //_gles_glCheckNamedFramebufferStatus (framebuffer, target);
//pack
}

void glGetNamedFramebufferParameteriv (GLuint framebuffer, GLenum pname, GLint *param){

 //_gles_glGetNamedFramebufferParameteriv (framebuffer, pname, param);
//pack
}

void glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params){

 //_gles_glGetNamedFramebufferAttachmentParameteriv (framebuffer, attachment, pname, params);
//pack
}

void glCreateRenderbuffers (GLsizei n, GLuint *renderbuffers){

 //glCreateRenderbuffers (n, renderbuffers);

}

void glNamedRenderbufferStorage (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height){

 //_gles_glNamedRenderbufferStorage (renderbuffer, internalformat, width, height);
//pack
}

void glNamedRenderbufferStorageMultisample (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height){

 //_gles_glNamedRenderbufferStorageMultisample (renderbuffer, samples, internalformat, width, height);
//pack
}

void glGetNamedRenderbufferParameteriv (GLuint renderbuffer, GLenum pname, GLint *params){

 //_gles_glGetNamedRenderbufferParameteriv (renderbuffer, pname, params);
//pack
}

void glCreateTextures (GLenum target, GLsizei n, GLuint *textures){

 //glCreateTextures (target, n, textures);

}

void glTextureBuffer (GLuint texture, GLenum internalformat, GLuint buffer){

 //glTextureBuffer (texture, internalformat, buffer);

}

void glTextureBufferRange (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size){

 //glTextureBufferRange (texture, internalformat, buffer, offset, size);

}

void glTextureStorage1D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width){

 //glTextureStorage1D (texture, levels, internalformat, width);

}

void glTextureStorage2D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height){

 //glTextureStorage2D (texture, levels, internalformat, width, height);

}

void glTextureStorage3D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth){

 //glTextureStorage3D (texture, levels, internalformat, width, height, depth);

}

void glTextureStorage2DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations){

 //glTextureStorage2DMultisample (texture, samples, internalformat, width, height, fixedsamplelocations);

}

void glTextureStorage3DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations){

 //glTextureStorage3DMultisample (texture, samples, internalformat, width, height, depth, fixedsamplelocations);

}

void glTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels){

 //glTextureSubImage1D (texture, level, xoffset, width, format, type, pixels);

}

void glTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels){

 //glTextureSubImage2D (texture, level, xoffset, yoffset, width, height, format, type, pixels);

}

void glTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels){

 //glTextureSubImage3D (texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);

}

void glCompressedTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data){

 //glCompressedTextureSubImage1D (texture, level, xoffset, width, format, imageSize, data);

}

void glCompressedTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data){

 //glCompressedTextureSubImage2D (texture, level, xoffset, yoffset, width, height, format, imageSize, data);

}

void glCompressedTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data){

 //glCompressedTextureSubImage3D (texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);

}

void glCopyTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width){

 //glCopyTextureSubImage1D (texture, level, xoffset, x, y, width);

}

void glCopyTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height){

 //glCopyTextureSubImage2D (texture, level, xoffset, yoffset, x, y, width, height);

}

void glCopyTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height){

 //glCopyTextureSubImage3D (texture, level, xoffset, yoffset, zoffset, x, y, width, height);

}

void glTextureParameterf (GLuint texture, GLenum pname, GLfloat param){

 //glTextureParameterf (texture, pname, param);

}

void glTextureParameterfv (GLuint texture, GLenum pname, const GLfloat *param){

 //glTextureParameterfv (texture, pname, param);

}

void glTextureParameteri (GLuint texture, GLenum pname, GLint param){

 //glTextureParameteri (texture, pname, param);

}

void glTextureParameterIiv (GLuint texture, GLenum pname, const GLint *params){

 //glTextureParameterIiv (texture, pname, params);

}

void glTextureParameterIuiv (GLuint texture, GLenum pname, const GLuint *params){

 //glTextureParameterIuiv (texture, pname, params);

}

void glTextureParameteriv (GLuint texture, GLenum pname, const GLint *param){

 //glTextureParameteriv (texture, pname, param);

}

void glGenerateTextureMipmap (GLuint texture){

 //glGenerateTextureMipmap (texture);

}

void glBindTextureUnit (GLuint unit, GLuint texture){

 //glBindTextureUnit (unit, texture);

}

void glGetTextureImage (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels){

 //glGetTextureImage (texture, level, format, type, bufSize, pixels);

}

void glGetCompressedTextureImage (GLuint texture, GLint level, GLsizei bufSize, void *pixels){

 //glGetCompressedTextureImage (texture, level, bufSize, pixels);

}

void glGetTextureLevelParameterfv (GLuint texture, GLint level, GLenum pname, GLfloat *params){

 //glGetTextureLevelParameterfv (texture, level, pname, params);

}

void glGetTextureLevelParameteriv (GLuint texture, GLint level, GLenum pname, GLint *params){

 //glGetTextureLevelParameteriv (texture, level, pname, params);

}

void glGetTextureParameterfv (GLuint texture, GLenum pname, GLfloat *params){

 //glGetTextureParameterfv (texture, pname, params);

}

void glGetTextureParameterIiv (GLuint texture, GLenum pname, GLint *params){

 //glGetTextureParameterIiv (texture, pname, params);

}

void glGetTextureParameterIuiv (GLuint texture, GLenum pname, GLuint *params){

 //glGetTextureParameterIuiv (texture, pname, params);

}

void glGetTextureParameteriv (GLuint texture, GLenum pname, GLint *params){

 //glGetTextureParameteriv (texture, pname, params);

}

void glCreateVertexArrays (GLsizei n, GLuint *arrays){

 //glCreateVertexArrays (n, arrays);

}

void glDisableVertexArrayAttrib (GLuint vaobj, GLuint index){

 _gles_glBindVertexArray(vaobj);
 _gles_glDisableVertexAttribArray (index);
 _gles_glBindVertexArray(last_vaobj);
//pack
}

void glEnableVertexArrayAttrib (GLuint vaobj, GLuint index){

 _gles_glBindVertexArray(vaobj);
 _gles_glEnableVertexAttribArray (index);
 _gles_glBindVertexArray(last_vaobj);
//pack
}

void glVertexArrayElementBuffer (GLuint vaobj, GLuint buffer){

 //glVertexArrayElementBuffer (vaobj, buffer);

}

void glVertexArrayVertexBuffer (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride){

 //glVertexArrayVertexBuffer (vaobj, bindingindex, buffer, offset, stride);

}

void glVertexArrayVertexBuffers (GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides){

 //glVertexArrayVertexBuffers (vaobj, first, count, buffers, offsets, strides);

}

void glVertexArrayAttribBinding (GLuint vaobj, GLuint attribindex, GLuint bindingindex){

 //glVertexArrayAttribBinding (vaobj, attribindex, bindingindex);

}

void glVertexArrayAttribFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset){

 //glVertexArrayAttribFormat (vaobj, attribindex, size, type, normalized, relativeoffset);

}

void glVertexArrayAttribIFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){

 //glVertexArrayAttribIFormat (vaobj, attribindex, size, type, relativeoffset);

}

void glVertexArrayAttribLFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){

 //glVertexArrayAttribLFormat (vaobj, attribindex, size, type, relativeoffset);

}

void glVertexArrayBindingDivisor (GLuint vaobj, GLuint bindingindex, GLuint divisor){

 //glVertexArrayBindingDivisor (vaobj, bindingindex, divisor);

}

void glGetVertexArrayiv (GLuint vaobj, GLenum pname, GLint *param){

 //glGetVertexArrayiv (vaobj, pname, param);

}

void glGetVertexArrayIndexediv (GLuint vaobj, GLuint index, GLenum pname, GLint *param){

 //glGetVertexArrayIndexediv (vaobj, index, pname, param);

}

void glGetVertexArrayIndexed64iv (GLuint vaobj, GLuint index, GLenum pname, GLint64 *param){

 //glGetVertexArrayIndexed64iv (vaobj, index, pname, param);

}

void glCreateSamplers (GLsizei n, GLuint *samplers){

 //glCreateSamplers (n, samplers);

}

void glCreateProgramPipelines (GLsizei n, GLuint *pipelines){

 //_gles_glCreateProgramPipelines (n, pipelines);

}

void glCreateQueries (GLenum target, GLsizei n, GLuint *ids){

 //glCreateQueries (target, n, ids);

}

void glGetQueryBufferObjecti64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){

 //glGetQueryBufferObjecti64v (id, buffer, pname, offset);

}

void glGetQueryBufferObjectiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){

 //glGetQueryBufferObjectiv (id, buffer, pname, offset);

}

void glGetQueryBufferObjectui64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){

 //glGetQueryBufferObjectui64v (id, buffer, pname, offset);

}

void glGetQueryBufferObjectuiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){

 //glGetQueryBufferObjectuiv (id, buffer, pname, offset);

}

void glMemoryBarrierByRegion (GLbitfield barriers){

 _gles_glMemoryBarrierByRegion (barriers);

}

void glGetTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels){

 //glGetTextureSubImage (texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);

}

void glGetCompressedTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels){

 //glGetCompressedTextureSubImage (texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);

}

GLenum glGetGraphicsResetStatus (void){

 return _gles_glGetGraphicsResetStatus ();

}

void glGetnCompressedTexImage (GLenum target, GLint lod, GLsizei bufSize, void *pixels){

 //glGetnCompressedTexImage (target, lod, bufSize, pixels);

}

void glGetnTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels){

 //glGetnTexImage (target, level, format, type, bufSize, pixels);

}

void glGetnUniformdv (GLuint program, GLint location, GLsizei bufSize, GLdouble *params){

 //glGetnUniformdv (program, location, bufSize, params);

}

void glGetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat *params){

 _gles_glGetnUniformfv (program, location, bufSize, params);

}

void glGetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint *params){

 _gles_glGetnUniformiv (program, location, bufSize, params);

}

void glGetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint *params){

 _gles_glGetnUniformuiv (program, location, bufSize, params);

}

void glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data){

 _gles_glReadnPixels (x, y, width, height, format, type, bufSize, data);

}

void glTextureBarrier (void){

 //glTextureBarrier ();

}




// GL_VERSION_4_6
void glSpecializeShader (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue){

 //glSpecializeShader (shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);

}

void glMultiDrawArraysIndirectCount (GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride){

 GLsizei i;
    //const GLubyte *cmd = (const GLubyte *)indirect;
    GLuint last_instanceCount;
    GLint len_DrawArraysIndirectCommand = sizeof(DrawArraysIndirectCommand);
    DrawArraysIndirectCommand *cmd = (DrawArraysIndirectCommand *)indirect;
    for (i = 0; i < drawcount; i++){
    	last_instanceCount = cmd->instanceCount;
    	if(cmd->instanceCount > maxdrawcount){
        	cmd->instanceCount = maxdrawcount;
        }
        cmd->instanceCount = last_instanceCount;
        _gles_glDrawArraysIndirect(mode, cmd);
        if (stride == 0) {
        	cmd += len_DrawArraysIndirectCommand;
        } else {
        	cmd += stride;
        }
    }
    /*for (n = 0; n < drawcount; n++) {
        DrawArraysIndirectCommand *cmd;
        if (stride != 0) {
            cmd = (DrawArraysIndirectCommand  *)((GLintptr)indirect + n * stride);
        } else  {
            cmd = (DrawArraysIndirectCommand  *)indirect + n;
        }
        if(cmd->instanceCount > maxdrawcount){
        	cmd->instanceCount = maxdrawcount;
        }
        glDrawArraysInstancedBaseInstance(mode, cmd->first, cmd->count, cmd->instanceCount, cmd->baseInstance);
    }*/
 //glMultiDrawArraysIndirectCount (mode, indirect, drawcount, maxdrawcount, stride);
//pack
}

void glMultiDrawElementsIndirectCount (GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride){

 GLsizei i;
    GLuint last_instanceCount;
    GLint len_DrawElementsIndirectCommand = sizeof(DrawElementsIndirectCommand);
    DrawElementsIndirectCommand *cmd = (DrawElementsIndirectCommand *)indirect;
    for (i = 0; i < drawcount; i++){
    	last_instanceCount = cmd->instanceCount;
    	if(cmd->instanceCount > maxdrawcount){
        	cmd->instanceCount = maxdrawcount;
        }
        cmd->instanceCount = last_instanceCount;
        _gles_glDrawElementsIndirect(mode, type, cmd);
        if (stride == 0) {
        	cmd += len_DrawElementsIndirectCommand;
        } else {
        	cmd += stride;
        }
    }
    /*for (n = 0; n < drawcount; n++) {
        DrawElementsIndirectCommand *cmd;
        if (stride != 0) {
            cmd = (DrawElementsIndirectCommand  *)((GLintptr)indirect + n * stride);
        } else {
            cmd = (DrawElementsIndirectCommand  *)indirect + n;
        }
        if(cmd->instanceCount > maxdrawcount){
        	cmd->instanceCount = maxdrawcount;
        }
        glDrawElementsInstancedBaseVertexBaseInstance(mode,
                                                      cmd->count,
                                                      type,
                                                      cmd->firstIndex * sizeof(DrawElementsIndirectCommand),
                                                      cmd->instanceCount,
                                                      cmd->baseVertex,
                                                      cmd->baseInstance);
    }*/
 //glMultiDrawElementsIndirectCount (mode, type, indirect, drawcount, maxdrawcount, stride);
//pack
}

void glPolygonOffsetClamp (GLfloat factor, GLfloat units, GLfloat clamp){

 //_gles_glPolygonOffsetClamp (factor, units, clamp);

}



