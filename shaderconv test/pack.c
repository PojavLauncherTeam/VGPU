






// GL_VERSION_3_1
GLAPI void glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
GLAPI void glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
GLAPI void glTexBuffer (GLenum target, GLenum internalformat, GLuint buffer);
GLAPI void glPrimitiveRestartIndex (GLuint index);
GLAPI void glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLAPI void glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
GLAPI void glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
GLAPI void glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
GLAPI GLuint glGetUniformBlockIndex (GLuint program, const GLchar *uniformBlockName);
GLAPI void glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
GLAPI void glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
GLAPI void glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);



// GL_VERSION_3_2
GLAPI void glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
GLAPI void glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
GLAPI void glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
GLAPI void glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);
GLAPI void glProvokingVertex (GLenum mode);
GLAPI GLsync glFenceSync (GLenum condition, GLbitfield flags);
GLAPI GLboolean glIsSync (GLsync sync);
GLAPI void glDeleteSync (GLsync sync);
GLAPI GLenum glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
GLAPI void glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout);
GLAPI void glGetInteger64v (GLenum pname, GLint64 *data);
GLAPI void glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
GLAPI void glGetInteger64i_v (GLenum target, GLuint index, GLint64 *data);
GLAPI void glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 *params);
GLAPI void glFramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level);
GLAPI void glTexImage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
GLAPI void glTexImage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
GLAPI void glGetMultisamplefv (GLenum pname, GLuint index, GLfloat *val);
GLAPI void glSampleMaski (GLuint maskNumber, GLbitfield mask);



// GL_VERSION_3_3
GLAPI void glBindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
GLAPI GLint glGetFragDataIndex (GLuint program, const GLchar *name);
GLAPI void glGenSamplers (GLsizei count, GLuint *samplers);
GLAPI void glDeleteSamplers (GLsizei count, const GLuint *samplers);
GLAPI GLboolean glIsSampler (GLuint sampler);
GLAPI void glBindSampler (GLuint unit, GLuint sampler);
GLAPI void glSamplerParameteri (GLuint sampler, GLenum pname, GLint param);
GLAPI void glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint *param);
GLAPI void glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param);
GLAPI void glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat *param);
GLAPI void glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint *param);
GLAPI void glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint *param);
GLAPI void glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint *params);
GLAPI void glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint *params);
GLAPI void glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat *params);
GLAPI void glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint *params);
GLAPI void glQueryCounter (GLuint id, GLenum target);
GLAPI void glGetQueryObjecti64v (GLuint id, GLenum pname, GLint64 *params);
GLAPI void glGetQueryObjectui64v (GLuint id, GLenum pname, GLuint64 *params);
GLAPI void glVertexAttribDivisor (GLuint index, GLuint divisor);
GLAPI void glVertexAttribP1ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLAPI void glVertexAttribP1uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
GLAPI void glVertexAttribP2ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLAPI void glVertexAttribP2uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
GLAPI void glVertexAttribP3ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLAPI void glVertexAttribP3uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
GLAPI void glVertexAttribP4ui (GLuint index, GLenum type, GLboolean normalized, GLuint value);
GLAPI void glVertexAttribP4uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);



// GL_VERSION_4_0
GLAPI void glMinSampleShading (GLfloat value);
GLAPI void glBlendEquationi (GLuint buf, GLenum mode);
GLAPI void glBlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
GLAPI void glBlendFunci (GLuint buf, GLenum src, GLenum dst);
GLAPI void glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
GLAPI void glDrawArraysIndirect (GLenum mode, const void *indirect);
GLAPI void glDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect);
GLAPI void glUniform1d (GLint location, GLdouble x);
GLAPI void glUniform2d (GLint location, GLdouble x, GLdouble y);
GLAPI void glUniform3d (GLint location, GLdouble x, GLdouble y, GLdouble z);
GLAPI void glUniform4d (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLAPI void glUniform1dv (GLint location, GLsizei count, const GLdouble *value);
GLAPI void glUniform2dv (GLint location, GLsizei count, const GLdouble *value);
GLAPI void glUniform3dv (GLint location, GLsizei count, const GLdouble *value);
GLAPI void glUniform4dv (GLint location, GLsizei count, const GLdouble *value);
GLAPI void glUniformMatrix2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glUniformMatrix3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glUniformMatrix4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glUniformMatrix2x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glUniformMatrix2x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glUniformMatrix3x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glUniformMatrix3x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glUniformMatrix4x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glUniformMatrix4x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glGetUniformdv (GLuint program, GLint location, GLdouble *params);
GLAPI GLint glGetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar *name);
GLAPI GLuint glGetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar *name);
GLAPI void glGetActiveSubroutineUniformiv (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
GLAPI void glGetActiveSubroutineUniformName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
GLAPI void glGetActiveSubroutineName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
GLAPI void glUniformSubroutinesuiv (GLenum shadertype, GLsizei count, const GLuint *indices);
GLAPI void glGetUniformSubroutineuiv (GLenum shadertype, GLint location, GLuint *params);
GLAPI void glGetProgramStageiv (GLuint program, GLenum shadertype, GLenum pname, GLint *values);
GLAPI void glPatchParameteri (GLenum pname, GLint value);
GLAPI void glPatchParameterfv (GLenum pname, const GLfloat *values);
GLAPI void glBindTransformFeedback (GLenum target, GLuint id);
GLAPI void glDeleteTransformFeedbacks (GLsizei n, const GLuint *ids);
GLAPI void glGenTransformFeedbacks (GLsizei n, GLuint *ids);
GLAPI GLboolean glIsTransformFeedback (GLuint id);
GLAPI void glPauseTransformFeedback (void);
GLAPI void glResumeTransformFeedback (void);
GLAPI void glDrawTransformFeedback (GLenum mode, GLuint id);
GLAPI void glDrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream);
GLAPI void glBeginQueryIndexed (GLenum target, GLuint index, GLuint id);
GLAPI void glEndQueryIndexed (GLenum target, GLuint index);
GLAPI void glGetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint *params);



// GL_VERSION_4_1
GLAPI void glReleaseShaderCompiler (void);
GLAPI void glShaderBinary (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
GLAPI void glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
GLAPI void glDepthRangef (GLfloat n, GLfloat f);
GLAPI void glClearDepthf (GLfloat d);
GLAPI void glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
GLAPI void glProgramBinary (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
GLAPI void glProgramParameteri (GLuint program, GLenum pname, GLint value);
GLAPI void glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program);
GLAPI void glActiveShaderProgram (GLuint pipeline, GLuint program);
GLAPI GLuint glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const*strings);
GLAPI void glBindProgramPipeline (GLuint pipeline);
GLAPI void glDeleteProgramPipelines (GLsizei n, const GLuint *pipelines);
GLAPI void glGenProgramPipelines (GLsizei n, GLuint *pipelines);
GLAPI GLboolean glIsProgramPipeline (GLuint pipeline);
GLAPI void glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint *params);
GLAPI void glProgramUniform1i (GLuint program, GLint location, GLint v0);
GLAPI void glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint *value);
GLAPI void glProgramUniform1f (GLuint program, GLint location, GLfloat v0);
GLAPI void glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
GLAPI void glProgramUniform1d (GLuint program, GLint location, GLdouble v0);
GLAPI void glProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble *value);
GLAPI void glProgramUniform1ui (GLuint program, GLint location, GLuint v0);
GLAPI void glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
GLAPI void glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1);
GLAPI void glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint *value);
GLAPI void glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1);
GLAPI void glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
GLAPI void glProgramUniform2d (GLuint program, GLint location, GLdouble v0, GLdouble v1);
GLAPI void glProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble *value);
GLAPI void glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1);
GLAPI void glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
GLAPI void glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
GLAPI void glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint *value);
GLAPI void glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
GLAPI void glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
GLAPI void glProgramUniform3d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
GLAPI void glProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble *value);
GLAPI void glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
GLAPI void glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
GLAPI void glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
GLAPI void glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint *value);
GLAPI void glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
GLAPI void glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat *value);
GLAPI void glProgramUniform4d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
GLAPI void glProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble *value);
GLAPI void glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
GLAPI void glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint *value);
GLAPI void glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
GLAPI void glProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
GLAPI void glValidateProgramPipeline (GLuint pipeline);
GLAPI void glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
GLAPI void glVertexAttribL1d (GLuint index, GLdouble x);
GLAPI void glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y);
GLAPI void glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z);
GLAPI void glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLAPI void glVertexAttribL1dv (GLuint index, const GLdouble *v);
GLAPI void glVertexAttribL2dv (GLuint index, const GLdouble *v);
GLAPI void glVertexAttribL3dv (GLuint index, const GLdouble *v);
GLAPI void glVertexAttribL4dv (GLuint index, const GLdouble *v);
GLAPI void glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
GLAPI void glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble *params);
GLAPI void glViewportArrayv (GLuint first, GLsizei count, const GLfloat *v);
GLAPI void glViewportIndexedf (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
GLAPI void glViewportIndexedfv (GLuint index, const GLfloat *v);
GLAPI void glScissorArrayv (GLuint first, GLsizei count, const GLint *v);
GLAPI void glScissorIndexed (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
GLAPI void glScissorIndexedv (GLuint index, const GLint *v);
GLAPI void glDepthRangeArrayv (GLuint first, GLsizei count, const GLdouble *v);
GLAPI void glDepthRangeIndexed (GLuint index, GLdouble n, GLdouble f);
GLAPI void glGetFloati_v (GLenum target, GLuint index, GLfloat *data);
GLAPI void glGetDoublei_v (GLenum target, GLuint index, GLdouble *data);



// GL_VERSION_4_2
GLAPI void glDrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
GLAPI void glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
GLAPI void glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
GLAPI void glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params);
GLAPI void glGetActiveAtomicCounterBufferiv (GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
GLAPI void glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
GLAPI void glMemoryBarrier (GLbitfield barriers);
GLAPI void glTexStorage1D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
GLAPI void glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
GLAPI void glDrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount);
GLAPI void glDrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);



// GL_VERSION_4_3
GLAPI void glClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
GLAPI void glClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
GLAPI void glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
GLAPI void glDispatchComputeIndirect (GLintptr indirect);
GLAPI void glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
GLAPI void glFramebufferParameteri (GLenum target, GLenum pname, GLint param);
GLAPI void glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint *params);
GLAPI void glGetInternalformati64v (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params);
GLAPI void glInvalidateTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
GLAPI void glInvalidateTexImage (GLuint texture, GLint level);
GLAPI void glInvalidateBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr length);
GLAPI void glInvalidateBufferData (GLuint buffer);
GLAPI void glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments);
GLAPI void glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void glMultiDrawArraysIndirect (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
GLAPI void glMultiDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
GLAPI void glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint *params);
GLAPI GLuint glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar *name);
GLAPI void glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
GLAPI void glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params);
GLAPI GLint glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar *name);
GLAPI GLint glGetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar *name);
GLAPI void glShaderStorageBlockBinding (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
GLAPI void glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLAPI void glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
GLAPI void glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
GLAPI void glTextureView (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
GLAPI void glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
GLAPI void glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
GLAPI void glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLAPI void glVertexAttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLAPI void glVertexAttribBinding (GLuint attribindex, GLuint bindingindex);
GLAPI void glVertexBindingDivisor (GLuint bindingindex, GLuint divisor);
GLAPI void glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
GLAPI void glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
GLAPI void glDebugMessageCallback (GLDEBUGPROC callback, const void *userParam);
GLAPI GLuint glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
GLAPI void glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar *message);
GLAPI void glPopDebugGroup (void);
GLAPI void glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
GLAPI void glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
GLAPI void glObjectPtrLabel (const void *ptr, GLsizei length, const GLchar *label);
GLAPI void glGetObjectPtrLabel (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);



// GL_VERSION_4_4
GLAPI void glBufferStorage (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
GLAPI void glClearTexImage (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
GLAPI void glClearTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
GLAPI void glBindBuffersBase (GLenum target, GLuint first, GLsizei count, const GLuint *buffers);
GLAPI void glBindBuffersRange (GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
GLAPI void glBindTextures (GLuint first, GLsizei count, const GLuint *textures);
GLAPI void glBindSamplers (GLuint first, GLsizei count, const GLuint *samplers);
GLAPI void glBindImageTextures (GLuint first, GLsizei count, const GLuint *textures);
GLAPI void glBindVertexBuffers (GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);



// GL_VERSION_4_5
GLAPI void glClipControl (GLenum origin, GLenum depth);
GLAPI void glCreateTransformFeedbacks (GLsizei n, GLuint *ids);
GLAPI void glTransformFeedbackBufferBase (GLuint xfb, GLuint index, GLuint buffer);
GLAPI void glTransformFeedbackBufferRange (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLAPI void glGetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint *param);
GLAPI void glGetTransformFeedbacki_v (GLuint xfb, GLenum pname, GLuint index, GLint *param);
GLAPI void glGetTransformFeedbacki64_v (GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
GLAPI void glCreateBuffers (GLsizei n, GLuint *buffers);
GLAPI void glNamedBufferStorage (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
GLAPI void glNamedBufferData (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
GLAPI void glNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
GLAPI void glCopyNamedBufferSubData (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLAPI void glClearNamedBufferData (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
GLAPI void glClearNamedBufferSubData (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
GLAPI void *glMapNamedBuffer (GLuint buffer, GLenum access);
GLAPI void *glMapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
GLAPI GLboolean glUnmapNamedBuffer (GLuint buffer);
GLAPI void glFlushMappedNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length);
GLAPI void glGetNamedBufferParameteriv (GLuint buffer, GLenum pname, GLint *params);
GLAPI void glGetNamedBufferParameteri64v (GLuint buffer, GLenum pname, GLint64 *params);
GLAPI void glGetNamedBufferPointerv (GLuint buffer, GLenum pname, void **params);
GLAPI void glGetNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
GLAPI void glCreateFramebuffers (GLsizei n, GLuint *framebuffers);
GLAPI void glNamedFramebufferRenderbuffer (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
GLAPI void glNamedFramebufferParameteri (GLuint framebuffer, GLenum pname, GLint param);
GLAPI void glNamedFramebufferTexture (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
GLAPI void glNamedFramebufferTextureLayer (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
GLAPI void glNamedFramebufferDrawBuffer (GLuint framebuffer, GLenum buf);
GLAPI void glNamedFramebufferDrawBuffers (GLuint framebuffer, GLsizei n, const GLenum *bufs);
GLAPI void glNamedFramebufferReadBuffer (GLuint framebuffer, GLenum src);
GLAPI void glInvalidateNamedFramebufferData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
GLAPI void glInvalidateNamedFramebufferSubData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void glClearNamedFramebufferiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
GLAPI void glClearNamedFramebufferuiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
GLAPI void glClearNamedFramebufferfv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
GLAPI void glClearNamedFramebufferfi (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
GLAPI void glBlitNamedFramebuffer (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLAPI GLenum glCheckNamedFramebufferStatus (GLuint framebuffer, GLenum target);
GLAPI void glGetNamedFramebufferParameteriv (GLuint framebuffer, GLenum pname, GLint *param);
GLAPI void glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
GLAPI void glCreateRenderbuffers (GLsizei n, GLuint *renderbuffers);
GLAPI void glNamedRenderbufferStorage (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void glNamedRenderbufferStorageMultisample (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void glGetNamedRenderbufferParameteriv (GLuint renderbuffer, GLenum pname, GLint *params);
GLAPI void glCreateTextures (GLenum target, GLsizei n, GLuint *textures);
GLAPI void glTextureBuffer (GLuint texture, GLenum internalformat, GLuint buffer);
GLAPI void glTextureBufferRange (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLAPI void glTextureStorage1D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
GLAPI void glTextureStorage2D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void glTextureStorage3D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
GLAPI void glTextureStorage2DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
GLAPI void glTextureStorage3DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
GLAPI void glTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
GLAPI void glTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
GLAPI void glTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
GLAPI void glCompressedTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
GLAPI void glCompressedTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
GLAPI void glCompressedTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
GLAPI void glCopyTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
GLAPI void glCopyTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void glCopyTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void glTextureParameterf (GLuint texture, GLenum pname, GLfloat param);
GLAPI void glTextureParameterfv (GLuint texture, GLenum pname, const GLfloat *param);
GLAPI void glTextureParameteri (GLuint texture, GLenum pname, GLint param);
GLAPI void glTextureParameterIiv (GLuint texture, GLenum pname, const GLint *params);
GLAPI void glTextureParameterIuiv (GLuint texture, GLenum pname, const GLuint *params);
GLAPI void glTextureParameteriv (GLuint texture, GLenum pname, const GLint *param);
GLAPI void glGenerateTextureMipmap (GLuint texture);
GLAPI void glBindTextureUnit (GLuint unit, GLuint texture);
GLAPI void glGetTextureImage (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
GLAPI void glGetCompressedTextureImage (GLuint texture, GLint level, GLsizei bufSize, void *pixels);
GLAPI void glGetTextureLevelParameterfv (GLuint texture, GLint level, GLenum pname, GLfloat *params);
GLAPI void glGetTextureLevelParameteriv (GLuint texture, GLint level, GLenum pname, GLint *params);
GLAPI void glGetTextureParameterfv (GLuint texture, GLenum pname, GLfloat *params);
GLAPI void glGetTextureParameterIiv (GLuint texture, GLenum pname, GLint *params);
GLAPI void glGetTextureParameterIuiv (GLuint texture, GLenum pname, GLuint *params);
GLAPI void glGetTextureParameteriv (GLuint texture, GLenum pname, GLint *params);
GLAPI void glCreateVertexArrays (GLsizei n, GLuint *arrays);
GLAPI void glDisableVertexArrayAttrib (GLuint vaobj, GLuint index);
GLAPI void glEnableVertexArrayAttrib (GLuint vaobj, GLuint index);
GLAPI void glVertexArrayElementBuffer (GLuint vaobj, GLuint buffer);
GLAPI void glVertexArrayVertexBuffer (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
GLAPI void glVertexArrayVertexBuffers (GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
GLAPI void glVertexArrayAttribBinding (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
GLAPI void glVertexArrayAttribFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
GLAPI void glVertexArrayAttribIFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLAPI void glVertexArrayAttribLFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
GLAPI void glVertexArrayBindingDivisor (GLuint vaobj, GLuint bindingindex, GLuint divisor);
GLAPI void glGetVertexArrayiv (GLuint vaobj, GLenum pname, GLint *param);
GLAPI void glGetVertexArrayIndexediv (GLuint vaobj, GLuint index, GLenum pname, GLint *param);
GLAPI void glGetVertexArrayIndexed64iv (GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
GLAPI void glCreateSamplers (GLsizei n, GLuint *samplers);
GLAPI void glCreateProgramPipelines (GLsizei n, GLuint *pipelines);
GLAPI void glCreateQueries (GLenum target, GLsizei n, GLuint *ids);
GLAPI void glGetQueryBufferObjecti64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
GLAPI void glGetQueryBufferObjectiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
GLAPI void glGetQueryBufferObjectui64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
GLAPI void glGetQueryBufferObjectuiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
GLAPI void glMemoryBarrierByRegion (GLbitfield barriers);
GLAPI void glGetTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
GLAPI void glGetCompressedTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
GLAPI GLenum glGetGraphicsResetStatus (void);
GLAPI void glGetnCompressedTexImage (GLenum target, GLint lod, GLsizei bufSize, void *pixels);
GLAPI void glGetnTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
GLAPI void glGetnUniformdv (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
GLAPI void glGetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
GLAPI void glGetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint *params);
GLAPI void glGetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
GLAPI void glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
GLAPI void glTextureBarrier (void);



// GL_VERSION_4_6
GLAPI void glSpecializeShader (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
GLAPI void glMultiDrawArraysIndirectCount (GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
GLAPI void glMultiDrawElementsIndirectCount (GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
GLAPI void glPolygonOffsetClamp (GLfloat factor, GLfloat units, GLfloat clamp);


