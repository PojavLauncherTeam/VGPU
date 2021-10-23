// OpenGL 2.0 >> 3.0

// Simplified version of the header file


#define GLAPI extern





// GL_VERSION_1_0

GLAPI void gl4es_glCullFace (GLenum mode);
GLAPI void gl4es_glFrontFace (GLenum mode);
GLAPI void gl4es_glHint (GLenum target, GLenum mode);
GLAPI void gl4es_glLineWidth (GLfloat width);
GLAPI void gl4es_glPointSize (GLfloat size);
GLAPI void gl4es_glPolygonMode (GLenum face, GLenum mode);
GLAPI void gl4es_glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void gl4es_glTexParameterf (GLenum target, GLenum pname, GLfloat param);
GLAPI void gl4es_glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params);
GLAPI void gl4es_glTexParameteri (GLenum target, GLenum pname, GLint param);
GLAPI void gl4es_glTexParameteriv (GLenum target, GLenum pname, const GLint *params);
GLAPI void gl4es_glTexImage1D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
GLAPI void gl4es_glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
GLAPI void gl4es_glDrawBuffer (GLenum buf);
GLAPI void gl4es_glClear (GLbitfield mask);
GLAPI void gl4es_glClearColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLAPI void gl4es_glClearStencil (GLint s);
GLAPI void gl4es_glClearDepth (GLdouble depth);
GLAPI void gl4es_glStencilMask (GLuint mask);
GLAPI void gl4es_glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
GLAPI void gl4es_glDepthMask (GLboolean flag);
GLAPI void gl4es_glDisable (GLenum cap);
GLAPI void gl4es_glEnable (GLenum cap);
GLAPI void gl4es_glFinish (void);
GLAPI void gl4es_glFlush (void);
GLAPI void gl4es_glBlendFunc (GLenum sfactor, GLenum dfactor);
GLAPI void gl4es_glLogicOp (GLenum opcode);
GLAPI void gl4es_glStencilFunc (GLenum func, GLint ref, GLuint mask);
GLAPI void gl4es_glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
GLAPI void gl4es_glDepthFunc (GLenum func);
GLAPI void gl4es_glPixelStoref (GLenum pname, GLfloat param);
GLAPI void gl4es_glPixelStorei (GLenum pname, GLint param);
GLAPI void gl4es_glReadBuffer (GLenum src);
GLAPI void gl4es_glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
GLAPI void gl4es_glGetBooleanv (GLenum pname, GLboolean *data);
GLAPI void gl4es_glGetDoublev (GLenum pname, GLdouble *data);
GLAPI GLenum gl4es_glGetError (void);
GLAPI void gl4es_glGetFloatv (GLenum pname, GLfloat *data);
GLAPI void gl4es_glGetIntegerv (GLenum pname, GLint *data);
GLAPI const GLubyte *gl4es_glGetString (GLenum name);
GLAPI void gl4es_glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
GLAPI void gl4es_glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params);
GLAPI void gl4es_glGetTexParameteriv (GLenum target, GLenum pname, GLint *params);
GLAPI void gl4es_glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params);
GLAPI void gl4es_glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params);
GLAPI GLboolean gl4es_glIsEnabled (GLenum cap);
GLAPI void gl4es_glDepthRange (GLdouble n, GLdouble f);
GLAPI void gl4es_glViewport (GLint x, GLint y, GLsizei width, GLsizei height);


// GL_VERSION_1_1

GLAPI void gl4es_glDrawArrays (GLenum mode, GLint first, GLsizei count);
GLAPI void gl4es_glDrawElements (GLenum mode, GLsizei count, GLenum type, const void *indices);
GLAPI void gl4es_glGetPointerv (GLenum pname, void **params);
GLAPI void gl4es_glPolygonOffset (GLfloat factor, GLfloat units);
GLAPI void gl4es_glCopyTexImage1D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
GLAPI void gl4es_glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
GLAPI void gl4es_glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
GLAPI void gl4es_glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void gl4es_glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
GLAPI void gl4es_glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
GLAPI void gl4es_glBindTexture (GLenum target, GLuint texture);
GLAPI void gl4es_glDeleteTextures (GLsizei n, const GLuint *textures);
GLAPI void gl4es_glGenTextures (GLsizei n, GLuint *textures);
GLAPI GLboolean gl4es_glIsTexture (GLuint texture);


// GL_VERSION_1_2

GLAPI void gl4es_glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
GLAPI void gl4es_glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
GLAPI void gl4es_glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
GLAPI void gl4es_glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);


// GL_VERSION_1_3

GLAPI void gl4es_glActiveTexture (GLenum texture);
GLAPI void gl4es_glSampleCoverage (GLfloat value, GLboolean invert);
GLAPI void gl4es_glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
GLAPI void gl4es_glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
GLAPI void gl4es_glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
GLAPI void gl4es_glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
GLAPI void gl4es_glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
GLAPI void gl4es_glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
GLAPI void gl4es_glGetCompressedTexImage (GLenum target, GLint level, void *img);


// GL_VERSION_1_4

GLAPI void gl4es_glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
GLAPI void gl4es_glMultiDrawArrays (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
GLAPI void gl4es_glMultiDrawElements (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount);
GLAPI void gl4es_glPointParameterf (GLenum pname, GLfloat param);
GLAPI void gl4es_glPointParameterfv (GLenum pname, const GLfloat *params);
GLAPI void gl4es_glPointParameteri (GLenum pname, GLint param);
GLAPI void gl4es_glPointParameteriv (GLenum pname, const GLint *params);
GLAPI void gl4es_glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLAPI void gl4es_glBlendEquation (GLenum mode);


// GL_VERSION_1_5

GLAPI void gl4es_glGenQueries (GLsizei n, GLuint *ids);
GLAPI void gl4es_glDeleteQueries (GLsizei n, const GLuint *ids);
GLAPI GLboolean gl4es_glIsQuery (GLuint id);
GLAPI void gl4es_glBeginQuery (GLenum target, GLuint id);
GLAPI void gl4es_glEndQuery (GLenum target);
GLAPI void gl4es_glGetQueryiv (GLenum target, GLenum pname, GLint *params);
GLAPI void gl4es_glGetQueryObjectiv (GLuint id, GLenum pname, GLint *params);
GLAPI void gl4es_glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint *params);
GLAPI void gl4es_glBindBuffer (GLenum target, GLuint buffer);
GLAPI void gl4es_glDeleteBuffers (GLsizei n, const GLuint *buffers);
GLAPI void gl4es_glGenBuffers (GLsizei n, GLuint *buffers);
GLAPI GLboolean gl4es_glIsBuffer (GLuint buffer);
GLAPI void gl4es_glBufferData (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
GLAPI void gl4es_glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
GLAPI void gl4es_glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, void *data);
GLAPI void *gl4es_glMapBuffer (GLenum target, GLenum access);
GLAPI GLboolean gl4es_glUnmapBuffer (GLenum target);
GLAPI void gl4es_glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params);
GLAPI void gl4es_glGetBufferPointerv (GLenum target, GLenum pname, void **params);


// GL_VERSION_2_0

GLAPI void gl4es_glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha);
GLAPI void gl4es_glDrawBuffers (GLsizei n, const GLenum *bufs);
GLAPI void gl4es_glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
GLAPI void gl4es_glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask);
GLAPI void gl4es_glStencilMaskSeparate (GLenum face, GLuint mask);
GLAPI void gl4es_glAttachShader (GLuint program, GLuint shader);
GLAPI void gl4es_glBindAttribLocation (GLuint program, GLuint index, const GLchar *name);
GLAPI void gl4es_glCompileShader (GLuint shader);
GLAPI GLuint gl4es_glCreateProgram (void);
GLAPI GLuint gl4es_glCreateShader (GLenum type);
GLAPI void gl4es_glDeleteProgram (GLuint program);
GLAPI void gl4es_glDeleteShader (GLuint shader);
GLAPI void gl4es_glDetachShader (GLuint program, GLuint shader);
GLAPI void gl4es_glDisableVertexAttribArray (GLuint index);
GLAPI void gl4es_glEnableVertexAttribArray (GLuint index);
GLAPI void gl4es_glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
GLAPI void gl4es_glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
GLAPI void gl4es_glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
GLAPI GLint gl4es_glGetAttribLocation (GLuint program, const GLchar *name);
GLAPI void gl4es_glGetProgramiv (GLuint program, GLenum pname, GLint *params);
GLAPI void gl4es_glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
GLAPI void gl4es_glGetShaderiv (GLuint shader, GLenum pname, GLint *params);
GLAPI void gl4es_glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
GLAPI void gl4es_glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
GLAPI GLint gl4es_glGetUniformLocation (GLuint program, const GLchar *name);
GLAPI void gl4es_glGetUniformfv (GLuint program, GLint location, GLfloat *params);
GLAPI void gl4es_glGetUniformiv (GLuint program, GLint location, GLint *params);
GLAPI void gl4es_glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble *params);
GLAPI void gl4es_glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params);
GLAPI void gl4es_glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params);
GLAPI void gl4es_glGetVertexAttribPointerv (GLuint index, GLenum pname, void **pointer);
GLAPI GLboolean gl4es_glIsProgram (GLuint program);
GLAPI GLboolean gl4es_glIsShader (GLuint shader);
GLAPI void gl4es_glLinkProgram (GLuint program);
GLAPI void gl4es_glShaderSource (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
GLAPI void gl4es_glUseProgram (GLuint program);
GLAPI void gl4es_glUniform1f (GLint location, GLfloat v0);
GLAPI void gl4es_glUniform2f (GLint location, GLfloat v0, GLfloat v1);
GLAPI void gl4es_glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
GLAPI void gl4es_glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
GLAPI void gl4es_glUniform1i (GLint location, GLint v0);
GLAPI void gl4es_glUniform2i (GLint location, GLint v0, GLint v1);
GLAPI void gl4es_glUniform3i (GLint location, GLint v0, GLint v1, GLint v2);
GLAPI void gl4es_glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
GLAPI void gl4es_glUniform1fv (GLint location, GLsizei count, const GLfloat *value);
GLAPI void gl4es_glUniform2fv (GLint location, GLsizei count, const GLfloat *value);
GLAPI void gl4es_glUniform3fv (GLint location, GLsizei count, const GLfloat *value);
GLAPI void gl4es_glUniform4fv (GLint location, GLsizei count, const GLfloat *value);
GLAPI void gl4es_glUniform1iv (GLint location, GLsizei count, const GLint *value);
GLAPI void gl4es_glUniform2iv (GLint location, GLsizei count, const GLint *value);
GLAPI void gl4es_glUniform3iv (GLint location, GLsizei count, const GLint *value);
GLAPI void gl4es_glUniform4iv (GLint location, GLsizei count, const GLint *value);
GLAPI void gl4es_glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glValidateProgram (GLuint program);
GLAPI void gl4es_glVertexAttrib1d (GLuint index, GLdouble x);
GLAPI void gl4es_glVertexAttrib1dv (GLuint index, const GLdouble *v);
GLAPI void gl4es_glVertexAttrib1f (GLuint index, GLfloat x);
GLAPI void gl4es_glVertexAttrib1fv (GLuint index, const GLfloat *v);
GLAPI void gl4es_glVertexAttrib1s (GLuint index, GLshort x);
GLAPI void gl4es_glVertexAttrib1sv (GLuint index, const GLshort *v);
GLAPI void gl4es_glVertexAttrib2d (GLuint index, GLdouble x, GLdouble y);
GLAPI void gl4es_glVertexAttrib2dv (GLuint index, const GLdouble *v);
GLAPI void gl4es_glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y);
GLAPI void gl4es_glVertexAttrib2fv (GLuint index, const GLfloat *v);
GLAPI void gl4es_glVertexAttrib2s (GLuint index, GLshort x, GLshort y);
GLAPI void gl4es_glVertexAttrib2sv (GLuint index, const GLshort *v);
GLAPI void gl4es_glVertexAttrib3d (GLuint index, GLdouble x, GLdouble y, GLdouble z);
GLAPI void gl4es_glVertexAttrib3dv (GLuint index, const GLdouble *v);
GLAPI void gl4es_glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z);
GLAPI void gl4es_glVertexAttrib3fv (GLuint index, const GLfloat *v);
GLAPI void gl4es_glVertexAttrib3s (GLuint index, GLshort x, GLshort y, GLshort z);
GLAPI void gl4es_glVertexAttrib3sv (GLuint index, const GLshort *v);
GLAPI void gl4es_glVertexAttrib4Nbv (GLuint index, const GLbyte *v);
GLAPI void gl4es_glVertexAttrib4Niv (GLuint index, const GLint *v);
GLAPI void gl4es_glVertexAttrib4Nsv (GLuint index, const GLshort *v);
GLAPI void gl4es_glVertexAttrib4Nub (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
GLAPI void gl4es_glVertexAttrib4Nubv (GLuint index, const GLubyte *v);
GLAPI void gl4es_glVertexAttrib4Nuiv (GLuint index, const GLuint *v);
GLAPI void gl4es_glVertexAttrib4Nusv (GLuint index, const GLushort *v);
GLAPI void gl4es_glVertexAttrib4bv (GLuint index, const GLbyte *v);
GLAPI void gl4es_glVertexAttrib4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLAPI void gl4es_glVertexAttrib4dv (GLuint index, const GLdouble *v);
GLAPI void gl4es_glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GLAPI void gl4es_glVertexAttrib4fv (GLuint index, const GLfloat *v);
GLAPI void gl4es_glVertexAttrib4iv (GLuint index, const GLint *v);
GLAPI void gl4es_glVertexAttrib4s (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
GLAPI void gl4es_glVertexAttrib4sv (GLuint index, const GLshort *v);
GLAPI void gl4es_glVertexAttrib4ubv (GLuint index, const GLubyte *v);
GLAPI void gl4es_glVertexAttrib4uiv (GLuint index, const GLuint *v);
GLAPI void gl4es_glVertexAttrib4usv (GLuint index, const GLushort *v);
GLAPI void gl4es_glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);


// GL_VERSION_2_1

GLAPI void gl4es_glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);


// GL_VERSION_3_0

GLAPI void gl4es_glColorMaski (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
GLAPI void gl4es_glGetBooleani_v (GLenum target, GLuint index, GLboolean *data);
GLAPI void gl4es_glGetIntegeri_v (GLenum target, GLuint index, GLint *data);
GLAPI void gl4es_glEnablei (GLenum target, GLuint index);
GLAPI void gl4es_glDisablei (GLenum target, GLuint index);
GLAPI GLboolean gl4es_glIsEnabledi (GLenum target, GLuint index);
GLAPI void gl4es_glBeginTransformFeedback (GLenum primitiveMode);
GLAPI void gl4es_glEndTransformFeedback (void);
GLAPI void gl4es_glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLAPI void gl4es_glBindBufferBase (GLenum target, GLuint index, GLuint buffer);
GLAPI void gl4es_glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
GLAPI void gl4es_glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
GLAPI void gl4es_glClampColor (GLenum target, GLenum clamp);
GLAPI void gl4es_glBeginConditionalRender (GLuint id, GLenum mode);
GLAPI void gl4es_glEndConditionalRender (void);
GLAPI void gl4es_glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
GLAPI void gl4es_glGetVertexAttribIiv (GLuint index, GLenum pname, GLint *params);
GLAPI void gl4es_glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint *params);
GLAPI void gl4es_glVertexAttribI1i (GLuint index, GLint x);
GLAPI void gl4es_glVertexAttribI2i (GLuint index, GLint x, GLint y);
GLAPI void gl4es_glVertexAttribI3i (GLuint index, GLint x, GLint y, GLint z);
GLAPI void gl4es_glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w);
GLAPI void gl4es_glVertexAttribI1ui (GLuint index, GLuint x);
GLAPI void gl4es_glVertexAttribI2ui (GLuint index, GLuint x, GLuint y);
GLAPI void gl4es_glVertexAttribI3ui (GLuint index, GLuint x, GLuint y, GLuint z);
GLAPI void gl4es_glVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
GLAPI void gl4es_glVertexAttribI1iv (GLuint index, const GLint *v);
GLAPI void gl4es_glVertexAttribI2iv (GLuint index, const GLint *v);
GLAPI void gl4es_glVertexAttribI3iv (GLuint index, const GLint *v);
GLAPI void gl4es_glVertexAttribI4iv (GLuint index, const GLint *v);
GLAPI void gl4es_glVertexAttribI1uiv (GLuint index, const GLuint *v);
GLAPI void gl4es_glVertexAttribI2uiv (GLuint index, const GLuint *v);
GLAPI void gl4es_glVertexAttribI3uiv (GLuint index, const GLuint *v);
GLAPI void gl4es_glVertexAttribI4uiv (GLuint index, const GLuint *v);
GLAPI void gl4es_glVertexAttribI4bv (GLuint index, const GLbyte *v);
GLAPI void gl4es_glVertexAttribI4sv (GLuint index, const GLshort *v);
GLAPI void gl4es_glVertexAttribI4ubv (GLuint index, const GLubyte *v);
GLAPI void gl4es_glVertexAttribI4usv (GLuint index, const GLushort *v);
GLAPI void gl4es_glGetUniformuiv (GLuint program, GLint location, GLuint *params);
GLAPI void gl4es_glBindFragDataLocation (GLuint program, GLuint color, const GLchar *name);
GLAPI GLint gl4es_glGetFragDataLocation (GLuint program, const GLchar *name);
GLAPI void gl4es_glUniform1ui (GLint location, GLuint v0);
GLAPI void gl4es_glUniform2ui (GLint location, GLuint v0, GLuint v1);
GLAPI void gl4es_glUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2);
GLAPI void gl4es_glUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
GLAPI void gl4es_glUniform1uiv (GLint location, GLsizei count, const GLuint *value);
GLAPI void gl4es_glUniform2uiv (GLint location, GLsizei count, const GLuint *value);
GLAPI void gl4es_glUniform3uiv (GLint location, GLsizei count, const GLuint *value);
GLAPI void gl4es_glUniform4uiv (GLint location, GLsizei count, const GLuint *value);
GLAPI void gl4es_glTexParameterIiv (GLenum target, GLenum pname, const GLint *params);
GLAPI void gl4es_glTexParameterIuiv (GLenum target, GLenum pname, const GLuint *params);
GLAPI void gl4es_glGetTexParameterIiv (GLenum target, GLenum pname, GLint *params);
GLAPI void gl4es_glGetTexParameterIuiv (GLenum target, GLenum pname, GLuint *params);
GLAPI void gl4es_glClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint *value);
GLAPI void gl4es_glClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint *value);
GLAPI void gl4es_glClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat *value);
GLAPI void gl4es_glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
GLAPI const GLubyte *gl4es_glGetStringi (GLenum name, GLuint index);
GLAPI GLboolean gl4es_glIsRenderbuffer (GLuint renderbuffer);
GLAPI void gl4es_glBindRenderbuffer (GLenum target, GLuint renderbuffer);
GLAPI void gl4es_glDeleteRenderbuffers (GLsizei n, const GLuint *renderbuffers);
GLAPI void gl4es_glGenRenderbuffers (GLsizei n, GLuint *renderbuffers);
GLAPI void gl4es_glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void gl4es_glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint *params);
GLAPI GLboolean gl4es_glIsFramebuffer (GLuint framebuffer);
GLAPI void gl4es_glBindFramebuffer (GLenum target, GLuint framebuffer);
GLAPI void gl4es_glDeleteFramebuffers (GLsizei n, const GLuint *framebuffers);
GLAPI void gl4es_glGenFramebuffers (GLsizei n, GLuint *framebuffers);
GLAPI GLenum gl4es_glCheckFramebufferStatus (GLenum target);
GLAPI void gl4es_glFramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLAPI void gl4es_glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLAPI void gl4es_glFramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
GLAPI void gl4es_glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
GLAPI void gl4es_glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint *params);
GLAPI void gl4es_glGenerateMipmap (GLenum target);
GLAPI void gl4es_glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLAPI void gl4es_glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void gl4es_glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
GLAPI void *gl4es_glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
GLAPI void gl4es_glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length);
GLAPI void gl4es_glBindVertexArray (GLuint array);
GLAPI void gl4es_glDeleteVertexArrays (GLsizei n, const GLuint *arrays);
GLAPI void gl4es_glGenVertexArrays (GLsizei n, GLuint *arrays);
GLAPI GLboolean gl4es_glIsVertexArray (GLuint array);



// GL_VERSION_3_1
GLAPI void gl4es_glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
GLAPI void gl4es_glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
GLAPI void gl4es_glTexBuffer (GLenum target, GLenum internalformat, GLuint buffer);
GLAPI void gl4es_glPrimitiveRestartIndex (GLuint index);
GLAPI void gl4es_glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLAPI void gl4es_glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
GLAPI void gl4es_glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
GLAPI void gl4es_glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
GLAPI GLuint gl4es_glGetUniformBlockIndex (GLuint program, const GLchar *uniformBlockName);
GLAPI void gl4es_glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
GLAPI void gl4es_glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
GLAPI void gl4es_glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);



// GL_VERSION_3_2
GLAPI void gl4es_glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
GLAPI void gl4es_glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
GLAPI void gl4es_glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
GLAPI void gl4es_glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);
GLAPI void gl4es_glProvokingVertex (GLenum mode);
GLAPI GLsync gl4es_glFenceSync (GLenum condition, GLbitfield flags);
GLAPI GLboolean gl4es_glIsSync (GLsync sync);
GLAPI void gl4es_glDeleteSync (GLsync sync);
GLAPI GLenum gl4es_glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
GLAPI void gl4es_glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
GLAPI void gl4es_glGetInteger64v (GLenum pname, GLint64 *data);
GLAPI void gl4es_glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
GLAPI void gl4es_glGetInteger64i_v (GLenum target, GLuint index, GLint64 *data);
GLAPI void gl4es_glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 *params);
GLAPI void gl4es_glFramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level);
GLAPI void gl4es_glTexImage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
GLAPI void gl4es_glTexImage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
GLAPI void gl4es_glGetMultisamplefv (GLenum pname, GLuint index, GLfloat *val);
GLAPI void gl4es_glSampleMaski (GLuint maskNumber, GLbitfield mask);



// GL_VERSION_3_3
GLAPI void gl4es_glBindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
GLAPI GLint gl4es_glGetFragDataIndex (GLuint program, const GLchar *name);
GLAPI void gl4es_glGenSamplers (GLsizei count, GLuint *samplers);
GLAPI void gl4es_glDeleteSamplers (GLsizei count, const GLuint *samplers);
GLAPI GLboolean gl4es_glIsSampler (GLuint sampler);
GLAPI void gl4es_glBindSampler (GLuint unit, GLuint sampler);
GLAPI void gl4es_glSamplerParameteri (GLuint sampler, GLenum pname, GLint param);
GLAPI void gl4es_glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint *param);
GLAPI void gl4es_glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param);
GLAPI void gl4es_glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat *param);
GLAPI void gl4es_glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint *param);
GLAPI void gl4es_glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint *param);
GLAPI void gl4es_glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint *params);
GLAPI void gl4es_glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint *params);
GLAPI void gl4es_glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat *params);
GLAPI void gl4es_glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint *params);
GLAPI void gl4es_glQueryCounter (GLuint id, GLenum target);
GLAPI void gl4es_glGetQueryObjecti64v (GLuint id, GLenum pname, GLint64 *params);
GLAPI void gl4es_glGetQueryObjectui64v (GLuint id, GLenum pname, GLuint64 *params);
GLAPI void gl4es_glVertexAttribDivisor (GLuint index, GLuint divisor);
GLAPI void gl4es_glVertexAttribP1ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLAPI void gl4es_glVertexAttribP1uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
GLAPI void gl4es_glVertexAttribP2ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLAPI void gl4es_glVertexAttribP2uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
GLAPI void gl4es_glVertexAttribP3ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLAPI void gl4es_glVertexAttribP3uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
GLAPI void gl4es_glVertexAttribP4ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLAPI void gl4es_glVertexAttribP4uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);



// GL_VERSION_4_0
GLAPI void gl4es_glMinSampleShading (GLfloat value);
GLAPI void gl4es_glBlendEquationi (GLuint buf, GLenum mode);
GLAPI void gl4es_glBlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
GLAPI void gl4es_glBlendFunci (GLuint buf, GLenum src, GLenum dst);
GLAPI void gl4es_glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
GLAPI void gl4es_glDrawArraysIndirect (GLenum mode, const void *indirect);
GLAPI void gl4es_glDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect);
GLAPI void gl4es_glUniform1d (GLint location, GLdouble x);
GLAPI void gl4es_glUniform2d (GLint location, GLdouble x, GLdouble y);
GLAPI void gl4es_glUniform3d (GLint location, GLdouble x, GLdouble y, GLdouble z);
GLAPI void gl4es_glUniform4d (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLAPI void gl4es_glUniform1dv (GLint location, GLsizei count, const GLdouble *value);
GLAPI void gl4es_glUniform2dv (GLint location, GLsizei count, const GLdouble *value);
GLAPI void gl4es_glUniform3dv (GLint location, GLsizei count, const GLdouble *value);
GLAPI void gl4es_glUniform4dv (GLint location, GLsizei count, const GLdouble *value);
GLAPI void gl4es_glUniformMatrix2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glUniformMatrix3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glUniformMatrix4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glUniformMatrix2x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glUniformMatrix2x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glUniformMatrix3x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glUniformMatrix3x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glUniformMatrix4x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glUniformMatrix4x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glGetUniformdv (GLuint program, GLint location, GLdouble *params);
GLAPI GLint gl4es_glGetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar *name);
GLAPI GLuint gl4es_glGetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar *name);
GLAPI void gl4es_glGetActiveSubroutineUniformiv (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
GLAPI void gl4es_glGetActiveSubroutineUniformName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
GLAPI void gl4es_glGetActiveSubroutineName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
GLAPI void gl4es_glUniformSubroutinesuiv (GLenum shadertype, GLsizei count, const GLuint *indices);
GLAPI void gl4es_glGetUniformSubroutineuiv (GLenum shadertype, GLint location, GLuint *params);
GLAPI void gl4es_glGetProgramStageiv (GLuint program, GLenum shadertype, GLenum pname, GLint *values);
GLAPI void gl4es_glPatchParameteri (GLenum pname, GLint value);
GLAPI void gl4es_glPatchParameterfv (GLenum pname, const GLfloat *values);
GLAPI void gl4es_glBindTransformFeedback (GLenum target, GLuint id);
GLAPI void gl4es_glDeleteTransformFeedbacks (GLsizei n, const GLuint *ids);
GLAPI void gl4es_glGenTransformFeedbacks (GLsizei n, GLuint *ids);
GLAPI GLboolean gl4es_glIsTransformFeedback (GLuint id);
GLAPI void gl4es_glPauseTransformFeedback (void);
GLAPI void gl4es_glResumeTransformFeedback (void);
GLAPI void gl4es_glDrawTransformFeedback (GLenum mode, GLuint id);
GLAPI void gl4es_glDrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream);
GLAPI void gl4es_glBeginQueryIndexed (GLenum target, GLuint index, GLuint id);
GLAPI void gl4es_glEndQueryIndexed (GLenum target, GLuint index);
GLAPI void gl4es_glGetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint *params);



// GL_VERSION_4_1
GLAPI void gl4es_glReleaseShaderCompiler (void);
GLAPI void gl4es_glShaderBinary (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
GLAPI void gl4es_glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
GLAPI void gl4es_glDepthRangef (GLfloat n, GLfloat f);
GLAPI void gl4es_glClearDepthf (GLfloat d);
GLAPI void gl4es_glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
GLAPI void gl4es_glProgramBinary (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
GLAPI void gl4es_glProgramParameteri (GLuint program, GLenum pname, GLint value);
GLAPI void gl4es_glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program);
GLAPI void gl4es_glActiveShaderProgram (GLuint pipeline, GLuint program);
GLAPI GLuint gl4es_glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const*strings);
GLAPI void gl4es_glBindProgramPipeline (GLuint pipeline);
GLAPI void gl4es_glDeleteProgramPipelines (GLsizei n, const GLuint *pipelines);
GLAPI void gl4es_glGenProgramPipelines (GLsizei n, GLuint *pipelines);
GLAPI GLboolean gl4es_glIsProgramPipeline (GLuint pipeline);
GLAPI void gl4es_glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint *params);
GLAPI void gl4es_glProgramUniform1i (GLuint program, GLint location, GLint v0);
GLAPI void gl4es_glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint *value);
GLAPI void gl4es_glProgramUniform1f (GLuint program, GLint location, GLfloat v0);
GLAPI void gl4es_glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
GLAPI void gl4es_glProgramUniform1d (GLuint program, GLint location, GLdouble v0);
GLAPI void gl4es_glProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble *value);
GLAPI void gl4es_glProgramUniform1ui (GLuint program, GLint location, GLuint v0);
GLAPI void gl4es_glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
GLAPI void gl4es_glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1);
GLAPI void gl4es_glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint *value);
GLAPI void gl4es_glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1);
GLAPI void gl4es_glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
GLAPI void gl4es_glProgramUniform2d (GLuint program, GLint location, GLdouble v0, GLdouble v1);
GLAPI void gl4es_glProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble *value);
GLAPI void gl4es_glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1);
GLAPI void gl4es_glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
GLAPI void gl4es_glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
GLAPI void gl4es_glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint *value);
GLAPI void gl4es_glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
GLAPI void gl4es_glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
GLAPI void gl4es_glProgramUniform3d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
GLAPI void gl4es_glProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble *value);
GLAPI void gl4es_glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
GLAPI void gl4es_glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
GLAPI void gl4es_glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
GLAPI void gl4es_glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint *value);
GLAPI void gl4es_glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
GLAPI void gl4es_glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
GLAPI void gl4es_glProgramUniform4d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
GLAPI void gl4es_glProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble *value);
GLAPI void gl4es_glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
GLAPI void gl4es_glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
GLAPI void gl4es_glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void gl4es_glProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void gl4es_glValidateProgramPipeline (GLuint pipeline);
GLAPI void gl4es_glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
GLAPI void gl4es_glVertexAttribL1d (GLuint index, GLdouble x);
GLAPI void gl4es_glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y);
GLAPI void gl4es_glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z);
GLAPI void gl4es_glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLAPI void gl4es_glVertexAttribL1dv (GLuint index, const GLdouble *v);
GLAPI void gl4es_glVertexAttribL2dv (GLuint index, const GLdouble *v);
GLAPI void gl4es_glVertexAttribL3dv (GLuint index, const GLdouble *v);
GLAPI void gl4es_glVertexAttribL4dv (GLuint index, const GLdouble *v);
GLAPI void gl4es_glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
GLAPI void gl4es_glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble *params);
GLAPI void gl4es_glViewportArrayv (GLuint first, GLsizei count, const GLfloat *v);
GLAPI void gl4es_glViewportIndexedf (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
GLAPI void gl4es_glViewportIndexedfv (GLuint index, const GLfloat *v);
GLAPI void gl4es_glScissorArrayv (GLuint first, GLsizei count, const GLint *v);
GLAPI void gl4es_glScissorIndexed (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
GLAPI void gl4es_glScissorIndexedv (GLuint index, const GLint *v);
GLAPI void gl4es_glDepthRangeArrayv (GLuint first, GLsizei count, const GLdouble *v);
GLAPI void gl4es_glDepthRangeIndexed (GLuint index, GLdouble n, GLdouble f);
GLAPI void gl4es_glGetFloati_v (GLenum target, GLuint index, GLfloat *data);
GLAPI void gl4es_glGetDoublei_v (GLenum target, GLuint index, GLdouble *data);



// GL_VERSION_4_2
GLAPI void gl4es_glDrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
GLAPI void gl4es_glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
GLAPI void gl4es_glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
GLAPI void gl4es_glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params);
GLAPI void gl4es_glGetActiveAtomicCounterBufferiv (GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
GLAPI void gl4es_glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
GLAPI void gl4es_glMemoryBarrier (GLbitfield barriers);
GLAPI void gl4es_glTexStorage1D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
GLAPI void gl4es_glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void gl4es_glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
GLAPI void gl4es_glDrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount);
GLAPI void gl4es_glDrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);



// GL_VERSION_4_3
GLAPI void gl4es_glClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
GLAPI void gl4es_glClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
GLAPI void gl4es_glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
GLAPI void gl4es_glDispatchComputeIndirect (GLintptr indirect);
GLAPI void gl4es_glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
GLAPI void gl4es_glFramebufferParameteri (GLenum target, GLenum pname, GLint param);
GLAPI void gl4es_glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint *params);
GLAPI void gl4es_glGetInternalformati64v (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params);
GLAPI void gl4es_glInvalidateTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
GLAPI void gl4es_glInvalidateTexImage (GLuint texture, GLint level);
GLAPI void gl4es_glInvalidateBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr length);
GLAPI void gl4es_glInvalidateBufferData (GLuint buffer);
GLAPI void gl4es_glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments);
GLAPI void gl4es_glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void gl4es_glMultiDrawArraysIndirect (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
GLAPI void gl4es_glMultiDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
GLAPI void gl4es_glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint *params);
GLAPI GLuint gl4es_glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar *name);
GLAPI void gl4es_glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
GLAPI void gl4es_glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params);
GLAPI GLint gl4es_glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar *name);
GLAPI GLint gl4es_glGetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar *name);
GLAPI void gl4es_glShaderStorageBlockBinding (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
GLAPI void gl4es_glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLAPI void gl4es_glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
GLAPI void gl4es_glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
GLAPI void gl4es_glTextureView (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
GLAPI void gl4es_glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
GLAPI void gl4es_glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
GLAPI void gl4es_glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLAPI void gl4es_glVertexAttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLAPI void gl4es_glVertexAttribBinding (GLuint attribindex, GLuint bindingindex);
GLAPI void gl4es_glVertexBindingDivisor (GLuint bindingindex, GLuint divisor);
GLAPI void gl4es_glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
GLAPI void gl4es_glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
GLAPI void gl4es_glDebugMessageCallback (GLDEBUGPROC callback, const void *userParam);
GLAPI GLuint gl4es_glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
GLAPI void gl4es_glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar *message);
GLAPI void gl4es_glPopDebugGroup (void);
GLAPI void gl4es_glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
GLAPI void gl4es_glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
GLAPI void gl4es_glObjectPtrLabel (const void *ptr, GLsizei length, const GLchar *label);
GLAPI void gl4es_glGetObjectPtrLabel (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);



// GL_VERSION_4_4
GLAPI void gl4es_glBufferStorage (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
GLAPI void gl4es_glClearTexImage (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
GLAPI void gl4es_glClearTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
GLAPI void gl4es_glBindBuffersBase (GLenum target, GLuint first, GLsizei count, const GLuint *buffers);
GLAPI void gl4es_glBindBuffersRange (GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
GLAPI void gl4es_glBindTextures (GLuint first, GLsizei count, const GLuint *textures);
GLAPI void gl4es_glBindSamplers (GLuint first, GLsizei count, const GLuint *samplers);
GLAPI void gl4es_glBindImageTextures (GLuint first, GLsizei count, const GLuint *textures);
GLAPI void gl4es_glBindVertexBuffers (GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);



// GL_VERSION_4_5
GLAPI void gl4es_glClipControl (GLenum origin, GLenum depth);
GLAPI void gl4es_glCreateTransformFeedbacks (GLsizei n, GLuint *ids);
GLAPI void gl4es_glTransformFeedbackBufferBase (GLuint xfb, GLuint index, GLuint buffer);
GLAPI void gl4es_glTransformFeedbackBufferRange (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLAPI void gl4es_glGetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint *param);
GLAPI void gl4es_glGetTransformFeedbacki_v (GLuint xfb, GLenum pname, GLuint index, GLint *param);
GLAPI void gl4es_glGetTransformFeedbacki64_v (GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
GLAPI void gl4es_glCreateBuffers (GLsizei n, GLuint *buffers);
GLAPI void gl4es_glNamedBufferStorage (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
GLAPI void gl4es_glNamedBufferData (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
GLAPI void gl4es_glNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
GLAPI void gl4es_glCopyNamedBufferSubData (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLAPI void gl4es_glClearNamedBufferData (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
GLAPI void gl4es_glClearNamedBufferSubData (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
GLAPI void *gl4es_glMapNamedBuffer (GLuint buffer, GLenum access);
GLAPI void *gl4es_glMapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
GLAPI GLboolean gl4es_glUnmapNamedBuffer (GLuint buffer);
GLAPI void gl4es_glFlushMappedNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length);
GLAPI void gl4es_glGetNamedBufferParameteriv (GLuint buffer, GLenum pname, GLint *params);
GLAPI void gl4es_glGetNamedBufferParameteri64v (GLuint buffer, GLenum pname, GLint64 *params);
GLAPI void gl4es_glGetNamedBufferPointerv (GLuint buffer, GLenum pname, void **params);
GLAPI void gl4es_glGetNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
GLAPI void gl4es_glCreateFramebuffers (GLsizei n, GLuint *framebuffers);
GLAPI void gl4es_glNamedFramebufferRenderbuffer (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
GLAPI void gl4es_glNamedFramebufferParameteri (GLuint framebuffer, GLenum pname, GLint param);
GLAPI void gl4es_glNamedFramebufferTexture (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
GLAPI void gl4es_glNamedFramebufferTextureLayer (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
GLAPI void gl4es_glNamedFramebufferDrawBuffer (GLuint framebuffer, GLenum buf);
GLAPI void gl4es_glNamedFramebufferDrawBuffers (GLuint framebuffer, GLsizei n, const GLenum *bufs);
GLAPI void gl4es_glNamedFramebufferReadBuffer (GLuint framebuffer, GLenum src);
GLAPI void gl4es_glInvalidateNamedFramebufferData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
GLAPI void gl4es_glInvalidateNamedFramebufferSubData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void gl4es_glClearNamedFramebufferiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
GLAPI void gl4es_glClearNamedFramebufferuiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
GLAPI void gl4es_glClearNamedFramebufferfv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
GLAPI void gl4es_glClearNamedFramebufferfi (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
GLAPI void gl4es_glBlitNamedFramebuffer (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLAPI GLenum gl4es_glCheckNamedFramebufferStatus (GLuint framebuffer, GLenum target);
GLAPI void gl4es_glGetNamedFramebufferParameteriv (GLuint framebuffer, GLenum pname, GLint *param);
GLAPI void gl4es_glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
GLAPI void gl4es_glCreateRenderbuffers (GLsizei n, GLuint *renderbuffers);
GLAPI void gl4es_glNamedRenderbufferStorage (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void gl4es_glNamedRenderbufferStorageMultisample (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void gl4es_glGetNamedRenderbufferParameteriv (GLuint renderbuffer, GLenum pname, GLint *params);
GLAPI void gl4es_glCreateTextures (GLenum target, GLsizei n, GLuint *textures);
GLAPI void gl4es_glTextureBuffer (GLuint texture, GLenum internalformat, GLuint buffer);
GLAPI void gl4es_glTextureBufferRange (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLAPI void gl4es_glTextureStorage1D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
GLAPI void gl4es_glTextureStorage2D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void gl4es_glTextureStorage3D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
GLAPI void gl4es_glTextureStorage2DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
GLAPI void gl4es_glTextureStorage3DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
GLAPI void gl4es_glTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
GLAPI void gl4es_glTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
GLAPI void gl4es_glTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
GLAPI void gl4es_glCompressedTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
GLAPI void gl4es_glCompressedTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
GLAPI void gl4es_glCompressedTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
GLAPI void gl4es_glCopyTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
GLAPI void gl4es_glCopyTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void gl4es_glCopyTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void gl4es_glTextureParameterf (GLuint texture, GLenum pname, GLfloat param);
GLAPI void gl4es_glTextureParameterfv (GLuint texture, GLenum pname, const GLfloat *param);
GLAPI void gl4es_glTextureParameteri (GLuint texture, GLenum pname, GLint param);
GLAPI void gl4es_glTextureParameterIiv (GLuint texture, GLenum pname, const GLint *params);
GLAPI void gl4es_glTextureParameterIuiv (GLuint texture, GLenum pname, const GLuint *params);
GLAPI void gl4es_glTextureParameteriv (GLuint texture, GLenum pname, const GLint *param);
GLAPI void gl4es_glGenerateTextureMipmap (GLuint texture);
GLAPI void gl4es_glBindTextureUnit (GLuint unit, GLuint texture);
GLAPI void gl4es_glGetTextureImage (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
GLAPI void gl4es_glGetCompressedTextureImage (GLuint texture, GLint level, GLsizei bufSize, void *pixels);
GLAPI void gl4es_glGetTextureLevelParameterfv (GLuint texture, GLint level, GLenum pname, GLfloat *params);
GLAPI void gl4es_glGetTextureLevelParameteriv (GLuint texture, GLint level, GLenum pname, GLint *params);
GLAPI void gl4es_glGetTextureParameterfv (GLuint texture, GLenum pname, GLfloat *params);
GLAPI void gl4es_glGetTextureParameterIiv (GLuint texture, GLenum pname, GLint *params);
GLAPI void gl4es_glGetTextureParameterIuiv (GLuint texture, GLenum pname, GLuint *params);
GLAPI void gl4es_glGetTextureParameteriv (GLuint texture, GLenum pname, GLint *params);
GLAPI void gl4es_glCreateVertexArrays (GLsizei n, GLuint *arrays);
GLAPI void gl4es_glDisableVertexArrayAttrib (GLuint vaobj, GLuint index);
GLAPI void gl4es_glEnableVertexArrayAttrib (GLuint vaobj, GLuint index);
GLAPI void gl4es_glVertexArrayElementBuffer (GLuint vaobj, GLuint buffer);
GLAPI void gl4es_glVertexArrayVertexBuffer (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
GLAPI void gl4es_glVertexArrayVertexBuffers (GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
GLAPI void gl4es_glVertexArrayAttribBinding (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
GLAPI void gl4es_glVertexArrayAttribFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
GLAPI void gl4es_glVertexArrayAttribIFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLAPI void gl4es_glVertexArrayAttribLFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLAPI void gl4es_glVertexArrayBindingDivisor (GLuint vaobj, GLuint bindingindex, GLuint divisor);
GLAPI void gl4es_glGetVertexArrayiv (GLuint vaobj, GLenum pname, GLint *param);
GLAPI void gl4es_glGetVertexArrayIndexediv (GLuint vaobj, GLuint index, GLenum pname, GLint *param);
GLAPI void gl4es_glGetVertexArrayIndexed64iv (GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
GLAPI void gl4es_glCreateSamplers (GLsizei n, GLuint *samplers);
GLAPI void gl4es_glCreateProgramPipelines (GLsizei n, GLuint *pipelines);
GLAPI void gl4es_glCreateQueries (GLenum target, GLsizei n, GLuint *ids);
GLAPI void gl4es_glGetQueryBufferObjecti64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
GLAPI void gl4es_glGetQueryBufferObjectiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
GLAPI void gl4es_glGetQueryBufferObjectui64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
GLAPI void gl4es_glGetQueryBufferObjectuiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
GLAPI void gl4es_glMemoryBarrierByRegion (GLbitfield barriers);
GLAPI void gl4es_glGetTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
GLAPI void gl4es_glGetCompressedTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
GLAPI GLenum gl4es_glGetGraphicsResetStatus (void);
GLAPI void gl4es_glGetnCompressedTexImage (GLenum target, GLint lod, GLsizei bufSize, void *pixels);
GLAPI void gl4es_glGetnTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
GLAPI void gl4es_glGetnUniformdv (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
GLAPI void gl4es_glGetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
GLAPI void gl4es_glGetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint *params);
GLAPI void gl4es_glGetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
GLAPI void gl4es_glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
GLAPI void gl4es_glTextureBarrier (void);



// GL_VERSION_4_6
GLAPI void gl4es_glSpecializeShader (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
GLAPI void gl4es_glMultiDrawArraysIndirectCount (GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
GLAPI void gl4es_glMultiDrawElementsIndirectCount (GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
GLAPI void gl4es_glPolygonOffsetClamp (GLfloat factor, GLfloat units, GLfloat clamp);


