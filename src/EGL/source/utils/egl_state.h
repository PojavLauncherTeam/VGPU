

#include "EGL/egl.h"
#include "vulkan/vulkan.h"

struct egl_state_t {
	EGLint error = EGL_TRUE;
	EGLDisplay display = 0x0;
	EGLBoolean dpy_init = EGL_FALSE;
	EGLNativeWindowType window;
	
	EGLint bindctx = 0;
	
	VkInstance instance;
	VkSurfaceKHR surface;
};

extern egl_state_t egl_state;