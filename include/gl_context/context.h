

#include "get.h"
#include "typedef.h"
#include "vk_ctx.h"
#include "GL_ctx.h"
#include "EGL_ctx.h"

struct gl_context_t {
	struct vk_ctx;
	struct GL_ctx;
	struct EGL_ctx;
};

static inline gl_context_t* get_ctx() {
    return (gl_context_t*)getGlThreadSpecific();
}
