


#include "pack.h"



// GL_VERSION_3_1
void glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount){

 glDrawArraysInstanced (mode, first, count, instancecount);

}

void glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount){

 glDrawElementsInstanced (mode, count, type, indices, instancecount);

}

void glTexBuffer (GLenum target, GLenum internalformat, GLuint buffer){

 glTexBuffer (target, internalformat, buffer);

}

void glPrimitiveRestartIndex (GLuint index){

 glPrimitiveRestartIndex (index);

}

void glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size){

 glCopyBufferSubData (readTarget, writeTarget, readOffset, writeOffset, size);

}

void glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices){

 glGetUniformIndices (program, uniformCount, uniformNames, uniformIndices);

}

void glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params){

 glGetActiveUniformsiv (program, uniformCount, uniformIndices, pname, params);

}

void glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName){

 glGetActiveUniformName (program, uniformIndex, bufSize, length, uniformName);

}

GLuint glGetUniformBlockIndex (GLuint program, const GLchar *uniformBlockName){

 return glGetUniformBlockIndex (program, uniformBlockName);

}

void glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params){

 glGetActiveUniformBlockiv (program, uniformBlockIndex, pname, params);

}

void glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName){

 glGetActiveUniformBlockName (program, uniformBlockIndex, bufSize, length, uniformBlockName);

}

void glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding){

 glUniformBlockBinding (program, uniformBlockIndex, uniformBlockBinding);

}




// GL_VERSION_3_2
void glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex){

 glDrawElementsBaseVertex (mode, count, type, indices, basevertex);

}

void glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex){

 glDrawRangeElementsBaseVertex (mode, start, end, count, type, indices, basevertex);

}

void glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex){

 glDrawElementsInstancedBaseVertex (mode, count, type, indices, instancecount, basevertex);

}

void glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex){

 glMultiDrawElementsBaseVertex (mode, count, type, indices, drawcount, basevertex);

}

void glProvokingVertex (GLenum mode){

 glProvokingVertex (mode);

}

GLsync glFenceSync (GLenum condition, GLbitfield flags){

 return glFenceSync (condition, flags);

}

GLboolean glIsSync (GLsync sync){

 return glIsSync (sync);

}

void glDeleteSync (GLsync sync){

 glDeleteSync (sync);

}

GLenum glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout){

 return glClientWaitSync (sync, flags, timeout);

}

void glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout){

 glWaitSync (sync, flags, timeout);

}

void glGetInteger64v (GLenum pname, GLint64 *data){

 glGetInteger64v (pname, data);

}

void glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values){

 glGetSynciv (sync, pname, bufSize, length, values);

}

void glGetInteger64i_v (GLenum target, GLuint index, GLint64 *data){

 glGetInteger64i_v (target, index, data);

}

void glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 *params){

 glGetBufferParameteri64v (target, pname, params);

}

void glFramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level){

 glFramebufferTexture (target, attachment, texture, level);

}

void glTexImage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations){

 glTexImage2DMultisample (target, samples, internalformat, width, height, fixedsamplelocations);

}

void glTexImage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations){

 glTexImage3DMultisample (target, samples, internalformat, width, height, depth, fixedsamplelocations);

}

void glGetMultisamplefv (GLenum pname, GLuint index, GLfloat *val){

 glGetMultisamplefv (pname, index, val);

}

void glSampleMaski (GLuint maskNumber, GLbitfield mask){

 glSampleMaski (maskNumber, mask);

}




// GL_VERSION_3_3
void glBindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name){

 glBindFragDataLocationIndexed (program, colorNumber, index, name);

}

GLint glGetFragDataIndex (GLuint program, const GLchar *name){

 return glGetFragDataIndex (program, name);

}

void glGenSamplers (GLsizei count, GLuint *samplers){

 glGenSamplers (count, samplers);

}

void glDeleteSamplers (GLsizei count, const GLuint *samplers){

 glDeleteSamplers (count, samplers);

}

GLboolean glIsSampler (GLuint sampler){

 return glIsSampler (sampler);

}

void glBindSampler (GLuint unit, GLuint sampler){

 glBindSampler (unit, sampler);

}

void glSamplerParameteri (GLuint sampler, GLenum pname, GLint param){

 glSamplerParameteri (sampler, pname, param);

}

void glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint *param){

 glSamplerParameteriv (sampler, pname, param);

}

void glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param){

 glSamplerParameterf (sampler, pname, param);

}

void glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat *param){

 glSamplerParameterfv (sampler, pname, param);

}

void glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint *param){

 glSamplerParameterIiv (sampler, pname, param);

}

void glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint *param){

 glSamplerParameterIuiv (sampler, pname, param);

}

void glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint *params){

 glGetSamplerParameteriv (sampler, pname, params);

}

void glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint *params){

 glGetSamplerParameterIiv (sampler, pname, params);

}

void glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat *params){

 glGetSamplerParameterfv (sampler, pname, params);

}

void glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint *params){

 glGetSamplerParameterIuiv (sampler, pname, params);

}

void glQueryCounter (GLuint id, GLenum target){

 glQueryCounter (id, target);

}

void glGetQueryObjecti64v (GLuint id, GLenum pname, GLint64 *params){

 glGetQueryObjecti64v (id, pname, params);

}

void glGetQueryObjectui64v (GLuint id, GLenum pname, GLuint64 *params){

 glGetQueryObjectui64v (id, pname, params);

}

void glVertexAttribDivisor (GLuint index, GLuint divisor){

 glVertexAttribDivisor (index, divisor);

}

void glVertexAttribP1ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){

 glVertexAttribP1ui (index, type, normalized, value);

}

void glVertexAttribP1uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value){

 glVertexAttribP1uiv (index, type, normalized, value);

}

void glVertexAttribP2ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){

 glVertexAttribP2ui (index, type, normalized, value);

}

void glVertexAttribP2uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value){

 glVertexAttribP2uiv (index, type, normalized, value);

}

void glVertexAttribP3ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){

 glVertexAttribP3ui (index, type, normalized, value);

}

void glVertexAttribP3uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value){

 glVertexAttribP3uiv (index, type, normalized, value);

}

void glVertexAttribP4ui (GLuint index, GLenum type, GLboolean normalized, GLuint value){

 glVertexAttribP4ui (index, type, normalized, value);

}

void glVertexAttribP4uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value){

 glVertexAttribP4uiv (index, type, normalized, value);

}




// GL_VERSION_4_0
void glMinSampleShading (GLfloat value){

 glMinSampleShading (value);

}

void glBlendEquationi (GLuint buf, GLenum mode){

 glBlendEquationi (buf, mode);

}

void glBlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha){

 glBlendEquationSeparatei (buf, modeRGB, modeAlpha);

}

void glBlendFunci (GLuint buf, GLenum src, GLenum dst){

 glBlendFunci (buf, src, dst);

}

void glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha){

 glBlendFuncSeparatei (buf, srcRGB, dstRGB, srcAlpha, dstAlpha);

}

void glDrawArraysIndirect (GLenum mode, const void *indirect){

 glDrawArraysIndirect (mode, indirect);

}

void glDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect){

 glDrawElementsIndirect (mode, type, indirect);

}

void glUniform1d (GLint location, GLdouble x){

 glUniform1d (location, x);

}

void glUniform2d (GLint location, GLdouble x, GLdouble y){

 glUniform2d (location, x, y);

}

void glUniform3d (GLint location, GLdouble x, GLdouble y, GLdouble z){

 glUniform3d (location, x, y, z);

}

void glUniform4d (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w){

 glUniform4d (location, x, y, z, w);

}

void glUniform1dv (GLint location, GLsizei count, const GLdouble *value){

 glUniform1dv (location, count, value);

}

void glUniform2dv (GLint location, GLsizei count, const GLdouble *value){

 glUniform2dv (location, count, value);

}

void glUniform3dv (GLint location, GLsizei count, const GLdouble *value){

 glUniform3dv (location, count, value);

}

void glUniform4dv (GLint location, GLsizei count, const GLdouble *value){

 glUniform4dv (location, count, value);

}

void glUniformMatrix2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glUniformMatrix2dv (location, count, transpose, value);

}

void glUniformMatrix3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glUniformMatrix3dv (location, count, transpose, value);

}

void glUniformMatrix4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glUniformMatrix4dv (location, count, transpose, value);

}

void glUniformMatrix2x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glUniformMatrix2x3dv (location, count, transpose, value);

}

void glUniformMatrix2x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glUniformMatrix2x4dv (location, count, transpose, value);

}

void glUniformMatrix3x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glUniformMatrix3x2dv (location, count, transpose, value);

}

void glUniformMatrix3x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glUniformMatrix3x4dv (location, count, transpose, value);

}

void glUniformMatrix4x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glUniformMatrix4x2dv (location, count, transpose, value);

}

void glUniformMatrix4x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glUniformMatrix4x3dv (location, count, transpose, value);

}

void glGetUniformdv (GLuint program, GLint location, GLdouble *params){

 glGetUniformdv (program, location, params);

}

GLint glGetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar *name){

 return glGetSubroutineUniformLocation (program, shadertype, name);

}

GLuint glGetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar *name){

 return glGetSubroutineIndex (program, shadertype, name);

}

void glGetActiveSubroutineUniformiv (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values){

 glGetActiveSubroutineUniformiv (program, shadertype, index, pname, values);

}

void glGetActiveSubroutineUniformName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name){

 glGetActiveSubroutineUniformName (program, shadertype, index, bufsize, length, name);

}

void glGetActiveSubroutineName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name){

 glGetActiveSubroutineName (program, shadertype, index, bufsize, length, name);

}

void glUniformSubroutinesuiv (GLenum shadertype, GLsizei count, const GLuint *indices){

 glUniformSubroutinesuiv (shadertype, count, indices);

}

void glGetUniformSubroutineuiv (GLenum shadertype, GLint location, GLuint *params){

 glGetUniformSubroutineuiv (shadertype, location, params);

}

void glGetProgramStageiv (GLuint program, GLenum shadertype, GLenum pname, GLint *values){

 glGetProgramStageiv (program, shadertype, pname, values);

}

void glPatchParameteri (GLenum pname, GLint value){

 glPatchParameteri (pname, value);

}

void glPatchParameterfv (GLenum pname, const GLfloat *values){

 glPatchParameterfv (pname, values);

}

void glBindTransformFeedback (GLenum target, GLuint id){

 glBindTransformFeedback (target, id);

}

void glDeleteTransformFeedbacks (GLsizei n, const GLuint *ids){

 glDeleteTransformFeedbacks (n, ids);

}

void glGenTransformFeedbacks (GLsizei n, GLuint *ids){

 glGenTransformFeedbacks (n, ids);

}

GLboolean glIsTransformFeedback (GLuint id){

 return glIsTransformFeedback (id);

}

void glPauseTransformFeedback (void){

 glPauseTransformFeedback ();

}

void glResumeTransformFeedback (void){

 glResumeTransformFeedback ();

}

void glDrawTransformFeedback (GLenum mode, GLuint id){

 glDrawTransformFeedback (mode, id);

}

void glDrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream){

 glDrawTransformFeedbackStream (mode, id, stream);

}

void glBeginQueryIndexed (GLenum target, GLuint index, GLuint id){

 glBeginQueryIndexed (target, index, id);

}

void glEndQueryIndexed (GLenum target, GLuint index){

 glEndQueryIndexed (target, index);

}

void glGetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint *params){

 glGetQueryIndexediv (target, index, pname, params);

}




// GL_VERSION_4_1
void glReleaseShaderCompiler (void){

 glReleaseShaderCompiler ();

}

void glShaderBinary (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length){

 glShaderBinary (count, shaders, binaryformat, binary, length);

}

void glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision){

 glGetShaderPrecisionFormat (shadertype, precisiontype, range, precision);

}

void glDepthRangef (GLfloat n, GLfloat f){

 glDepthRangef (n, f);

}

void glClearDepthf (GLfloat d){

 glClearDepthf (d);

}

void glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary){

 glGetProgramBinary (program, bufSize, length, binaryFormat, binary);

}

void glProgramBinary (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length){

 glProgramBinary (program, binaryFormat, binary, length);

}

void glProgramParameteri (GLuint program, GLenum pname, GLint value){

 glProgramParameteri (program, pname, value);

}

void glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program){

 glUseProgramStages (pipeline, stages, program);

}

void glActiveShaderProgram (GLuint pipeline, GLuint program){

 glActiveShaderProgram (pipeline, program);

}

GLuint glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const*strings){

 return glCreateShaderProgramv (type, count, strings);

}

void glBindProgramPipeline (GLuint pipeline){

 glBindProgramPipeline (pipeline);

}

void glDeleteProgramPipelines (GLsizei n, const GLuint *pipelines){

 glDeleteProgramPipelines (n, pipelines);

}

void glGenProgramPipelines (GLsizei n, GLuint *pipelines){

 glGenProgramPipelines (n, pipelines);

}

GLboolean glIsProgramPipeline (GLuint pipeline){

 return glIsProgramPipeline (pipeline);

}

void glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint *params){

 glGetProgramPipelineiv (pipeline, pname, params);

}

void glProgramUniform1i (GLuint program, GLint location, GLint v0){

 glProgramUniform1i (program, location, v0);

}

void glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint *value){

 glProgramUniform1iv (program, location, count, value);

}

void glProgramUniform1f (GLuint program, GLint location, GLfloat v0){

 glProgramUniform1f (program, location, v0);

}

void glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat *value){

 glProgramUniform1fv (program, location, count, value);

}

void glProgramUniform1d (GLuint program, GLint location, GLdouble v0){

 glProgramUniform1d (program, location, v0);

}

void glProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble *value){

 glProgramUniform1dv (program, location, count, value);

}

void glProgramUniform1ui (GLuint program, GLint location, GLuint v0){

 glProgramUniform1ui (program, location, v0);

}

void glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint *value){

 glProgramUniform1uiv (program, location, count, value);

}

void glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1){

 glProgramUniform2i (program, location, v0, v1);

}

void glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint *value){

 glProgramUniform2iv (program, location, count, value);

}

void glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1){

 glProgramUniform2f (program, location, v0, v1);

}

void glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat *value){

 glProgramUniform2fv (program, location, count, value);

}

void glProgramUniform2d (GLuint program, GLint location, GLdouble v0, GLdouble v1){

 glProgramUniform2d (program, location, v0, v1);

}

void glProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble *value){

 glProgramUniform2dv (program, location, count, value);

}

void glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1){

 glProgramUniform2ui (program, location, v0, v1);

}

void glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint *value){

 glProgramUniform2uiv (program, location, count, value);

}

void glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2){

 glProgramUniform3i (program, location, v0, v1, v2);

}

void glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint *value){

 glProgramUniform3iv (program, location, count, value);

}

void glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2){

 glProgramUniform3f (program, location, v0, v1, v2);

}

void glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat *value){

 glProgramUniform3fv (program, location, count, value);

}

void glProgramUniform3d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2){

 glProgramUniform3d (program, location, v0, v1, v2);

}

void glProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble *value){

 glProgramUniform3dv (program, location, count, value);

}

void glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2){

 glProgramUniform3ui (program, location, v0, v1, v2);

}

void glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint *value){

 glProgramUniform3uiv (program, location, count, value);

}

void glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3){

 glProgramUniform4i (program, location, v0, v1, v2, v3);

}

void glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint *value){

 glProgramUniform4iv (program, location, count, value);

}

void glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3){

 glProgramUniform4f (program, location, v0, v1, v2, v3);

}

void glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat *value){

 glProgramUniform4fv (program, location, count, value);

}

void glProgramUniform4d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3){

 glProgramUniform4d (program, location, v0, v1, v2, v3);

}

void glProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble *value){

 glProgramUniform4dv (program, location, count, value);

}

void glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3){

 glProgramUniform4ui (program, location, v0, v1, v2, v3);

}

void glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint *value){

 glProgramUniform4uiv (program, location, count, value);

}

void glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 glProgramUniformMatrix2fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 glProgramUniformMatrix3fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 glProgramUniformMatrix4fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glProgramUniformMatrix2dv (program, location, count, transpose, value);

}

void glProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glProgramUniformMatrix3dv (program, location, count, transpose, value);

}

void glProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glProgramUniformMatrix4dv (program, location, count, transpose, value);

}

void glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 glProgramUniformMatrix2x3fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 glProgramUniformMatrix3x2fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 glProgramUniformMatrix2x4fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 glProgramUniformMatrix4x2fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 glProgramUniformMatrix3x4fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value){

 glProgramUniformMatrix4x3fv (program, location, count, transpose, value);

}

void glProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glProgramUniformMatrix2x3dv (program, location, count, transpose, value);

}

void glProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glProgramUniformMatrix3x2dv (program, location, count, transpose, value);

}

void glProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glProgramUniformMatrix2x4dv (program, location, count, transpose, value);

}

void glProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glProgramUniformMatrix4x2dv (program, location, count, transpose, value);

}

void glProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glProgramUniformMatrix3x4dv (program, location, count, transpose, value);

}

void glProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value){

 glProgramUniformMatrix4x3dv (program, location, count, transpose, value);

}

void glValidateProgramPipeline (GLuint pipeline){

 glValidateProgramPipeline (pipeline);

}

void glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog){

 glGetProgramPipelineInfoLog (pipeline, bufSize, length, infoLog);

}

void glVertexAttribL1d (GLuint index, GLdouble x){

 glVertexAttribL1d (index, x);

}

void glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y){

 glVertexAttribL2d (index, x, y);

}

void glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z){

 glVertexAttribL3d (index, x, y, z);

}

void glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w){

 glVertexAttribL4d (index, x, y, z, w);

}

void glVertexAttribL1dv (GLuint index, const GLdouble *v){

 glVertexAttribL1dv (index, v);

}

void glVertexAttribL2dv (GLuint index, const GLdouble *v){

 glVertexAttribL2dv (index, v);

}

void glVertexAttribL3dv (GLuint index, const GLdouble *v){

 glVertexAttribL3dv (index, v);

}

void glVertexAttribL4dv (GLuint index, const GLdouble *v){

 glVertexAttribL4dv (index, v);

}

void glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer){

 glVertexAttribLPointer (index, size, type, stride, pointer);

}

void glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble *params){

 glGetVertexAttribLdv (index, pname, params);

}

void glViewportArrayv (GLuint first, GLsizei count, const GLfloat *v){

 glViewportArrayv (first, count, v);

}

void glViewportIndexedf (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h){

 glViewportIndexedf (index, x, y, w, h);

}

void glViewportIndexedfv (GLuint index, const GLfloat *v){

 glViewportIndexedfv (index, v);

}

void glScissorArrayv (GLuint first, GLsizei count, const GLint *v){

 glScissorArrayv (first, count, v);

}

void glScissorIndexed (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height){

 glScissorIndexed (index, left, bottom, width, height);

}

void glScissorIndexedv (GLuint index, const GLint *v){

 glScissorIndexedv (index, v);

}

void glDepthRangeArrayv (GLuint first, GLsizei count, const GLdouble *v){

 glDepthRangeArrayv (first, count, v);

}

void glDepthRangeIndexed (GLuint index, GLdouble n, GLdouble f){

 glDepthRangeIndexed (index, n, f);

}

void glGetFloati_v (GLenum target, GLuint index, GLfloat *data){

 glGetFloati_v (target, index, data);

}

void glGetDoublei_v (GLenum target, GLuint index, GLdouble *data){

 glGetDoublei_v (target, index, data);

}




// GL_VERSION_4_2
void glDrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance){

 glDrawArraysInstancedBaseInstance (mode, first, count, instancecount, baseinstance);

}

void glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance){

 glDrawElementsInstancedBaseInstance (mode, count, type, indices, instancecount, baseinstance);

}

void glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance){

 glDrawElementsInstancedBaseVertexBaseInstance (mode, count, type, indices, instancecount, basevertex, baseinstance);

}

void glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params){

 glGetInternalformativ (target, internalformat, pname, bufSize, params);

}

void glGetActiveAtomicCounterBufferiv (GLuint program, GLuint bufferIndex, GLenum pname, GLint *params){

 glGetActiveAtomicCounterBufferiv (program, bufferIndex, pname, params);

}

void glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format){

 glBindImageTexture (unit, texture, level, layered, layer, access, format);

}

void glMemoryBarrier (GLbitfield barriers){

 glMemoryBarrier (barriers);

}

void glTexStorage1D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width){

 glTexStorage1D (target, levels, internalformat, width);

}

void glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height){

 glTexStorage2D (target, levels, internalformat, width, height);

}

void glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth){

 glTexStorage3D (target, levels, internalformat, width, height, depth);

}

void glDrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount){

 glDrawTransformFeedbackInstanced (mode, id, instancecount);

}

void glDrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount){

 glDrawTransformFeedbackStreamInstanced (mode, id, stream, instancecount);

}




// GL_VERSION_4_3
void glClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data){

 glClearBufferData (target, internalformat, format, type, data);

}

void glClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data){

 glClearBufferSubData (target, internalformat, offset, size, format, type, data);

}

void glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z){

 glDispatchCompute (num_groups_x, num_groups_y, num_groups_z);

}

void glDispatchComputeIndirect (GLintptr indirect){

 glDispatchComputeIndirect (indirect);

}

void glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth){

 glCopyImageSubData (srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);

}

void glFramebufferParameteri (GLenum target, GLenum pname, GLint param){

 glFramebufferParameteri (target, pname, param);

}

void glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint *params){

 glGetFramebufferParameteriv (target, pname, params);

}

void glGetInternalformati64v (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params){

 glGetInternalformati64v (target, internalformat, pname, bufSize, params);

}

void glInvalidateTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth){

 glInvalidateTexSubImage (texture, level, xoffset, yoffset, zoffset, width, height, depth);

}

void glInvalidateTexImage (GLuint texture, GLint level){

 glInvalidateTexImage (texture, level);

}

void glInvalidateBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr length){

 glInvalidateBufferSubData (buffer, offset, length);

}

void glInvalidateBufferData (GLuint buffer){

 glInvalidateBufferData (buffer);

}

void glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments){

 glInvalidateFramebuffer (target, numAttachments, attachments);

}

void glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height){

 glInvalidateSubFramebuffer (target, numAttachments, attachments, x, y, width, height);

}

void glMultiDrawArraysIndirect (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride){

 glMultiDrawArraysIndirect (mode, indirect, drawcount, stride);

}

void glMultiDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride){

 glMultiDrawElementsIndirect (mode, type, indirect, drawcount, stride);

}

void glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint *params){

 glGetProgramInterfaceiv (program, programInterface, pname, params);

}

GLuint glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar *name){

 return glGetProgramResourceIndex (program, programInterface, name);

}

void glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name){

 glGetProgramResourceName (program, programInterface, index, bufSize, length, name);

}

void glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params){

 glGetProgramResourceiv (program, programInterface, index, propCount, props, bufSize, length, params);

}

GLint glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar *name){

 return glGetProgramResourceLocation (program, programInterface, name);

}

GLint glGetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar *name){

 return glGetProgramResourceLocationIndex (program, programInterface, name);

}

void glShaderStorageBlockBinding (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding){

 glShaderStorageBlockBinding (program, storageBlockIndex, storageBlockBinding);

}

void glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size){

 glTexBufferRange (target, internalformat, buffer, offset, size);

}

void glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations){

 glTexStorage2DMultisample (target, samples, internalformat, width, height, fixedsamplelocations);

}

void glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations){

 glTexStorage3DMultisample (target, samples, internalformat, width, height, depth, fixedsamplelocations);

}

void glTextureView (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers){

 glTextureView (texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);

}

void glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride){

 glBindVertexBuffer (bindingindex, buffer, offset, stride);

}

void glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset){

 glVertexAttribFormat (attribindex, size, type, normalized, relativeoffset);

}

void glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){

 glVertexAttribIFormat (attribindex, size, type, relativeoffset);

}

void glVertexAttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){

 glVertexAttribLFormat (attribindex, size, type, relativeoffset);

}

void glVertexAttribBinding (GLuint attribindex, GLuint bindingindex){

 glVertexAttribBinding (attribindex, bindingindex);

}

void glVertexBindingDivisor (GLuint bindingindex, GLuint divisor){

 glVertexBindingDivisor (bindingindex, divisor);

}

void glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled){

 glDebugMessageControl (source, type, severity, count, ids, enabled);

}

void glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf){

 glDebugMessageInsert (source, type, id, severity, length, buf);

}

void glDebugMessageCallback (GLDEBUGPROC callback, const void *userParam){

 glDebugMessageCallback (callback, userParam);

}

GLuint glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog){

 return glGetDebugMessageLog (count, bufSize, sources, types, ids, severities, lengths, messageLog);

}

void glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar *message){

 glPushDebugGroup (source, id, length, message);

}

void glPopDebugGroup (void){

 glPopDebugGroup ();

}

void glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar *label){

 glObjectLabel (identifier, name, length, label);

}

void glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label){

 glGetObjectLabel (identifier, name, bufSize, length, label);

}

void glObjectPtrLabel (const void *ptr, GLsizei length, const GLchar *label){

 glObjectPtrLabel (ptr, length, label);

}

void glGetObjectPtrLabel (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label){

 glGetObjectPtrLabel (ptr, bufSize, length, label);

}




// GL_VERSION_4_4
void glBufferStorage (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags){

 glBufferStorage (target, size, data, flags);

}

void glClearTexImage (GLuint texture, GLint level, GLenum format, GLenum type, const void *data){

 glClearTexImage (texture, level, format, type, data);

}

void glClearTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data){

 glClearTexSubImage (texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);

}

void glBindBuffersBase (GLenum target, GLuint first, GLsizei count, const GLuint *buffers){

 glBindBuffersBase (target, first, count, buffers);

}

void glBindBuffersRange (GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes){

 glBindBuffersRange (target, first, count, buffers, offsets, sizes);

}

void glBindTextures (GLuint first, GLsizei count, const GLuint *textures){

 glBindTextures (first, count, textures);

}

void glBindSamplers (GLuint first, GLsizei count, const GLuint *samplers){

 glBindSamplers (first, count, samplers);

}

void glBindImageTextures (GLuint first, GLsizei count, const GLuint *textures){

 glBindImageTextures (first, count, textures);

}

void glBindVertexBuffers (GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides){

 glBindVertexBuffers (first, count, buffers, offsets, strides);

}




// GL_VERSION_4_5
void glClipControl (GLenum origin, GLenum depth){

 glClipControl (origin, depth);

}

void glCreateTransformFeedbacks (GLsizei n, GLuint *ids){

 glCreateTransformFeedbacks (n, ids);

}

void glTransformFeedbackBufferBase (GLuint xfb, GLuint index, GLuint buffer){

 glTransformFeedbackBufferBase (xfb, index, buffer);

}

void glTransformFeedbackBufferRange (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size){

 glTransformFeedbackBufferRange (xfb, index, buffer, offset, size);

}

void glGetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint *param){

 glGetTransformFeedbackiv (xfb, pname, param);

}

void glGetTransformFeedbacki_v (GLuint xfb, GLenum pname, GLuint index, GLint *param){

 glGetTransformFeedbacki_v (xfb, pname, index, param);

}

void glGetTransformFeedbacki64_v (GLuint xfb, GLenum pname, GLuint index, GLint64 *param){

 glGetTransformFeedbacki64_v (xfb, pname, index, param);

}

void glCreateBuffers (GLsizei n, GLuint *buffers){

 glCreateBuffers (n, buffers);

}

void glNamedBufferStorage (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags){

 glNamedBufferStorage (buffer, size, data, flags);

}

void glNamedBufferData (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage){

 glNamedBufferData (buffer, size, data, usage);

}

void glNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data){

 glNamedBufferSubData (buffer, offset, size, data);

}

void glCopyNamedBufferSubData (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size){

 glCopyNamedBufferSubData (readBuffer, writeBuffer, readOffset, writeOffset, size);

}

void glClearNamedBufferData (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data){

 glClearNamedBufferData (buffer, internalformat, format, type, data);

}

void glClearNamedBufferSubData (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data){

 glClearNamedBufferSubData (buffer, internalformat, offset, size, format, type, data);

}

void *glMapNamedBuffer (GLuint buffer, GLenum access){

 return glMapNamedBuffer (buffer, access);

}

void *glMapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access){

 return glMapNamedBufferRange (buffer, offset, length, access);

}

GLboolean glUnmapNamedBuffer (GLuint buffer){

 return glUnmapNamedBuffer (buffer);

}

void glFlushMappedNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length){

 glFlushMappedNamedBufferRange (buffer, offset, length);

}

void glGetNamedBufferParameteriv (GLuint buffer, GLenum pname, GLint *params){

 glGetNamedBufferParameteriv (buffer, pname, params);

}

void glGetNamedBufferParameteri64v (GLuint buffer, GLenum pname, GLint64 *params){

 glGetNamedBufferParameteri64v (buffer, pname, params);

}

void glGetNamedBufferPointerv (GLuint buffer, GLenum pname, void **params){

 glGetNamedBufferPointerv (buffer, pname, params);

}

void glGetNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data){

 glGetNamedBufferSubData (buffer, offset, size, data);

}

void glCreateFramebuffers (GLsizei n, GLuint *framebuffers){

 glCreateFramebuffers (n, framebuffers);

}

void glNamedFramebufferRenderbuffer (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer){

 glNamedFramebufferRenderbuffer (framebuffer, attachment, renderbuffertarget, renderbuffer);

}

void glNamedFramebufferParameteri (GLuint framebuffer, GLenum pname, GLint param){

 glNamedFramebufferParameteri (framebuffer, pname, param);

}

void glNamedFramebufferTexture (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level){

 glNamedFramebufferTexture (framebuffer, attachment, texture, level);

}

void glNamedFramebufferTextureLayer (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer){

 glNamedFramebufferTextureLayer (framebuffer, attachment, texture, level, layer);

}

void glNamedFramebufferDrawBuffer (GLuint framebuffer, GLenum buf){

 glNamedFramebufferDrawBuffer (framebuffer, buf);

}

void glNamedFramebufferDrawBuffers (GLuint framebuffer, GLsizei n, const GLenum *bufs){

 glNamedFramebufferDrawBuffers (framebuffer, n, bufs);

}

void glNamedFramebufferReadBuffer (GLuint framebuffer, GLenum src){

 glNamedFramebufferReadBuffer (framebuffer, src);

}

void glInvalidateNamedFramebufferData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments){

 glInvalidateNamedFramebufferData (framebuffer, numAttachments, attachments);

}

void glInvalidateNamedFramebufferSubData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height){

 glInvalidateNamedFramebufferSubData (framebuffer, numAttachments, attachments, x, y, width, height);

}

void glClearNamedFramebufferiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value){

 glClearNamedFramebufferiv (framebuffer, buffer, drawbuffer, value);

}

void glClearNamedFramebufferuiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value){

 glClearNamedFramebufferuiv (framebuffer, buffer, drawbuffer, value);

}

void glClearNamedFramebufferfv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value){

 glClearNamedFramebufferfv (framebuffer, buffer, drawbuffer, value);

}

void glClearNamedFramebufferfi (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil){

 glClearNamedFramebufferfi (framebuffer, buffer, drawbuffer, depth, stencil);

}

void glBlitNamedFramebuffer (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter){

 glBlitNamedFramebuffer (readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);

}

GLenum glCheckNamedFramebufferStatus (GLuint framebuffer, GLenum target){

 return glCheckNamedFramebufferStatus (framebuffer, target);

}

void glGetNamedFramebufferParameteriv (GLuint framebuffer, GLenum pname, GLint *param){

 glGetNamedFramebufferParameteriv (framebuffer, pname, param);

}

void glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params){

 glGetNamedFramebufferAttachmentParameteriv (framebuffer, attachment, pname, params);

}

void glCreateRenderbuffers (GLsizei n, GLuint *renderbuffers){

 glCreateRenderbuffers (n, renderbuffers);

}

void glNamedRenderbufferStorage (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height){

 glNamedRenderbufferStorage (renderbuffer, internalformat, width, height);

}

void glNamedRenderbufferStorageMultisample (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height){

 glNamedRenderbufferStorageMultisample (renderbuffer, samples, internalformat, width, height);

}

void glGetNamedRenderbufferParameteriv (GLuint renderbuffer, GLenum pname, GLint *params){

 glGetNamedRenderbufferParameteriv (renderbuffer, pname, params);

}

void glCreateTextures (GLenum target, GLsizei n, GLuint *textures){

 glCreateTextures (target, n, textures);

}

void glTextureBuffer (GLuint texture, GLenum internalformat, GLuint buffer){

 glTextureBuffer (texture, internalformat, buffer);

}

void glTextureBufferRange (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size){

 glTextureBufferRange (texture, internalformat, buffer, offset, size);

}

void glTextureStorage1D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width){

 glTextureStorage1D (texture, levels, internalformat, width);

}

void glTextureStorage2D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height){

 glTextureStorage2D (texture, levels, internalformat, width, height);

}

void glTextureStorage3D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth){

 glTextureStorage3D (texture, levels, internalformat, width, height, depth);

}

void glTextureStorage2DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations){

 glTextureStorage2DMultisample (texture, samples, internalformat, width, height, fixedsamplelocations);

}

void glTextureStorage3DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations){

 glTextureStorage3DMultisample (texture, samples, internalformat, width, height, depth, fixedsamplelocations);

}

void glTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels){

 glTextureSubImage1D (texture, level, xoffset, width, format, type, pixels);

}

void glTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels){

 glTextureSubImage2D (texture, level, xoffset, yoffset, width, height, format, type, pixels);

}

void glTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels){

 glTextureSubImage3D (texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);

}

void glCompressedTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data){

 glCompressedTextureSubImage1D (texture, level, xoffset, width, format, imageSize, data);

}

void glCompressedTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data){

 glCompressedTextureSubImage2D (texture, level, xoffset, yoffset, width, height, format, imageSize, data);

}

void glCompressedTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data){

 glCompressedTextureSubImage3D (texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);

}

void glCopyTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width){

 glCopyTextureSubImage1D (texture, level, xoffset, x, y, width);

}

void glCopyTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height){

 glCopyTextureSubImage2D (texture, level, xoffset, yoffset, x, y, width, height);

}

void glCopyTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height){

 glCopyTextureSubImage3D (texture, level, xoffset, yoffset, zoffset, x, y, width, height);

}

void glTextureParameterf (GLuint texture, GLenum pname, GLfloat param){

 glTextureParameterf (texture, pname, param);

}

void glTextureParameterfv (GLuint texture, GLenum pname, const GLfloat *param){

 glTextureParameterfv (texture, pname, param);

}

void glTextureParameteri (GLuint texture, GLenum pname, GLint param){

 glTextureParameteri (texture, pname, param);

}

void glTextureParameterIiv (GLuint texture, GLenum pname, const GLint *params){

 glTextureParameterIiv (texture, pname, params);

}

void glTextureParameterIuiv (GLuint texture, GLenum pname, const GLuint *params){

 glTextureParameterIuiv (texture, pname, params);

}

void glTextureParameteriv (GLuint texture, GLenum pname, const GLint *param){

 glTextureParameteriv (texture, pname, param);

}

void glGenerateTextureMipmap (GLuint texture){

 glGenerateTextureMipmap (texture);

}

void glBindTextureUnit (GLuint unit, GLuint texture){

 glBindTextureUnit (unit, texture);

}

void glGetTextureImage (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels){

 glGetTextureImage (texture, level, format, type, bufSize, pixels);

}

void glGetCompressedTextureImage (GLuint texture, GLint level, GLsizei bufSize, void *pixels){

 glGetCompressedTextureImage (texture, level, bufSize, pixels);

}

void glGetTextureLevelParameterfv (GLuint texture, GLint level, GLenum pname, GLfloat *params){

 glGetTextureLevelParameterfv (texture, level, pname, params);

}

void glGetTextureLevelParameteriv (GLuint texture, GLint level, GLenum pname, GLint *params){

 glGetTextureLevelParameteriv (texture, level, pname, params);

}

void glGetTextureParameterfv (GLuint texture, GLenum pname, GLfloat *params){

 glGetTextureParameterfv (texture, pname, params);

}

void glGetTextureParameterIiv (GLuint texture, GLenum pname, GLint *params){

 glGetTextureParameterIiv (texture, pname, params);

}

void glGetTextureParameterIuiv (GLuint texture, GLenum pname, GLuint *params){

 glGetTextureParameterIuiv (texture, pname, params);

}

void glGetTextureParameteriv (GLuint texture, GLenum pname, GLint *params){

 glGetTextureParameteriv (texture, pname, params);

}

void glCreateVertexArrays (GLsizei n, GLuint *arrays){

 glCreateVertexArrays (n, arrays);

}

void glDisableVertexArrayAttrib (GLuint vaobj, GLuint index){

 glDisableVertexArrayAttrib (vaobj, index);

}

void glEnableVertexArrayAttrib (GLuint vaobj, GLuint index){

 glEnableVertexArrayAttrib (vaobj, index);

}

void glVertexArrayElementBuffer (GLuint vaobj, GLuint buffer){

 glVertexArrayElementBuffer (vaobj, buffer);

}

void glVertexArrayVertexBuffer (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride){

 glVertexArrayVertexBuffer (vaobj, bindingindex, buffer, offset, stride);

}

void glVertexArrayVertexBuffers (GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides){

 glVertexArrayVertexBuffers (vaobj, first, count, buffers, offsets, strides);

}

void glVertexArrayAttribBinding (GLuint vaobj, GLuint attribindex, GLuint bindingindex){

 glVertexArrayAttribBinding (vaobj, attribindex, bindingindex);

}

void glVertexArrayAttribFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset){

 glVertexArrayAttribFormat (vaobj, attribindex, size, type, normalized, relativeoffset);

}

void glVertexArrayAttribIFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){

 glVertexArrayAttribIFormat (vaobj, attribindex, size, type, relativeoffset);

}

void glVertexArrayAttribLFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset){

 glVertexArrayAttribLFormat (vaobj, attribindex, size, type, relativeoffset);

}

void glVertexArrayBindingDivisor (GLuint vaobj, GLuint bindingindex, GLuint divisor){

 glVertexArrayBindingDivisor (vaobj, bindingindex, divisor);

}

void glGetVertexArrayiv (GLuint vaobj, GLenum pname, GLint *param){

 glGetVertexArrayiv (vaobj, pname, param);

}

void glGetVertexArrayIndexediv (GLuint vaobj, GLuint index, GLenum pname, GLint *param){

 glGetVertexArrayIndexediv (vaobj, index, pname, param);

}

void glGetVertexArrayIndexed64iv (GLuint vaobj, GLuint index, GLenum pname, GLint64 *param){

 glGetVertexArrayIndexed64iv (vaobj, index, pname, param);

}

void glCreateSamplers (GLsizei n, GLuint *samplers){

 glCreateSamplers (n, samplers);

}

void glCreateProgramPipelines (GLsizei n, GLuint *pipelines){

 glCreateProgramPipelines (n, pipelines);

}

void glCreateQueries (GLenum target, GLsizei n, GLuint *ids){

 glCreateQueries (target, n, ids);

}

void glGetQueryBufferObjecti64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){

 glGetQueryBufferObjecti64v (id, buffer, pname, offset);

}

void glGetQueryBufferObjectiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){

 glGetQueryBufferObjectiv (id, buffer, pname, offset);

}

void glGetQueryBufferObjectui64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){

 glGetQueryBufferObjectui64v (id, buffer, pname, offset);

}

void glGetQueryBufferObjectuiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset){

 glGetQueryBufferObjectuiv (id, buffer, pname, offset);

}

void glMemoryBarrierByRegion (GLbitfield barriers){

 glMemoryBarrierByRegion (barriers);

}

void glGetTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels){

 glGetTextureSubImage (texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);

}

void glGetCompressedTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels){

 glGetCompressedTextureSubImage (texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);

}

GLenum glGetGraphicsResetStatus (void){

 return glGetGraphicsResetStatus ();

}

void glGetnCompressedTexImage (GLenum target, GLint lod, GLsizei bufSize, void *pixels){

 glGetnCompressedTexImage (target, lod, bufSize, pixels);

}

void glGetnTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels){

 glGetnTexImage (target, level, format, type, bufSize, pixels);

}

void glGetnUniformdv (GLuint program, GLint location, GLsizei bufSize, GLdouble *params){

 glGetnUniformdv (program, location, bufSize, params);

}

void glGetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat *params){

 glGetnUniformfv (program, location, bufSize, params);

}

void glGetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint *params){

 glGetnUniformiv (program, location, bufSize, params);

}

void glGetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint *params){

 glGetnUniformuiv (program, location, bufSize, params);

}

void glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data){

 glReadnPixels (x, y, width, height, format, type, bufSize, data);

}

void glTextureBarrier (void){

 glTextureBarrier ();

}




// GL_VERSION_4_6
void glSpecializeShader (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue){

 glSpecializeShader (shader, pEntryPoint, numSpecializationConstants, pConstantIndex, pConstantValue);

}

void glMultiDrawArraysIndirectCount (GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride){

 glMultiDrawArraysIndirectCount (mode, indirect, drawcount, maxdrawcount, stride);

}

void glMultiDrawElementsIndirectCount (GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride){

 glMultiDrawElementsIndirectCount (mode, type, indirect, drawcount, maxdrawcount, stride);

}

void glPolygonOffsetClamp (GLfloat factor, GLfloat units, GLfloat clamp){

 glPolygonOffsetClamp (factor, units, clamp);

}



