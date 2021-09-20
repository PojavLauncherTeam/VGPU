
#include <stdlib.h>

#include "EGL/egl.h"
#include "vulkan/vulkan.h"

#include "get.h"
#include "typedef.h"
#include "vk_ctx.h"
#include "GL_ctx.h"
#include "EGL_ctx.h"

struct gl_context_t {
	vk_ctx_t vk_ctx;
	GL_ctx_t GL_ctx;
	EGL_ctx_t EGL_ctx;
};

static inline void set_ctx(gl_context_t* ctx) {
    setGlThreadSpecific((void*)ctx);
}
static inline gl_context_t* get_ctx() {
    return (gl_context_t*)getGlThreadSpecific();
}

static void free_all(EGLContext _ctx) {
	gl_context_t* ctx = (gl_context_t*)_ctx;
	
	// free EGLResource, vkResource
	free(ctx->EGL_ctx.EGL_resource.surface);
	free(ctx->EGL_ctx.EGL_resource.instance);
	
	free(ctx);
	
}