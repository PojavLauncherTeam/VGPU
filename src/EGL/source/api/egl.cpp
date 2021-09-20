


#include "EGL/egl.h"
#include "utils/auxs.h"
#include "utils/egl_state.h"
#include "utils/ctx.h"

#include "vulkan/vk_wrapper.h"


#define CHECK_DISPLAY \
	if (dpy != egl_state.display) { \
		egl_state.error = EGL_BAD_DISPLAY; \
		return EGL_FALSE; \
	}
	

/*EGL functions */

// ==== Window & Surface
EGLDisplay  
eglGetDisplay (EGLNativeDisplayType display) {
	
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    if (display == EGL_DEFAULT_DISPLAY) {
    	// create vk instance as the dpy...
    	CreateInstance(&device.instance_);
		egl_state.instance = device.instance_;
		
        //egl_state.display = (EGLDisplay)0x1;
        egl_state.display = (EGLDisplay)(egl_state.instance);
        return egl_state.display;
    }
    return EGL_NO_DISPLAY;
#else
    return EGL_NO_DISPLAY;
#endif

}

EGLBoolean  
eglInitialize (EGLDisplay dpy, EGLint *major, EGLint *minor) {  
	if (*major<0 || *minor<0) {
		egl_state.error = EGL_FALSE;
		egl_state.dpy_init = EGL_FALSE;
		return EGL_FALSE;
	}
	if (dpy != egl_state.display) {
		egl_state.error = EGL_BAD_DISPLAY;
		egl_state.dpy_init = EGL_FALSE;
		return EGL_FALSE;
	}
	if (major==NULL || minor==NULL)
		egl_state.dpy_init = EGL_FALSE;
	else
		egl_state.dpy_init = EGL_TRUE;
	egl_state.error = EGL_TRUE;
	return EGL_TRUE;
}

EGLBoolean  
eglBindAPI (EGLenum api) {  
	switch (api) {
		case EGL_OPENGL_API:
		case EGL_OPENGL_ES_API:		// This only supports the OpenGL/ES API...
			egl_state.error = EGL_TRUE;
			return EGL_TRUE;
		case EGL_OPENVG_API:
			egl_state.error = EGL_BAD_PARAMETER;
			return EGL_FALSE;
	}
	egl_state.error = EGL_BAD_PARAMETER;
	return EGL_FALSE;
}

EGLSurface  
eglCreateWindowSurface (EGLDisplay dpy, EGLConfig config, EGLNativeWindowType window, const EGLint *attrib_list) {
	CHECK_DISPLAY
	
	VkSurfaceKHR* surface = (VkSurfaceKHR*)AllocAObject(sizeof(VkSurfaceKHR));
	// Use dpy as the vk instance...
	CreateAndroidSurface((VkInstance)dpy, window, surface);
	//egl_state.surface = surface; 
	device.surface_ = *surface;
	
	// TODO: Alloc a VkSurface...
	
	return (EGLSurface) (surface);
	//return (EGLSurface) (egl_state.surface);
}
// ==== Config
EGLBoolean  
eglGetConfigs (EGLDisplay dpy, EGLConfig *configs, EGLint config_size, EGLint *num_config) {
	CHECK_DISPLAY
	
	if (config_size <= 0) {
		egl_state.error = EGL_BAD_ACCESS;
		return EGL_FALSE;
	}
	if (configs == NULL) {
		egl_state.error = EGL_BAD_ATTRIBUTE;
		return EGL_FALSE;
	}
	
	*configs = dpy;
	*num_config = 1;
	
	return EGL_TRUE;
}
	
EGLBoolean  
eglChooseConfig (EGLDisplay dpy, const EGLint *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config) {  
	CHECK_DISPLAY
	
	if (config_size <= 0) {
		egl_state.error = EGL_BAD_ACCESS;
		return EGL_FALSE;
	}
	if (attrib_list == NULL) {
		egl_state.error = EGL_BAD_ATTRIBUTE;
		return EGL_FALSE;
	}
	if (configs == NULL) {
		egl_state.error = EGL_BAD_ATTRIBUTE;
		return EGL_FALSE;
	}
	
	*configs = dpy;
	*num_config = 1;
	
	return EGL_TRUE;
}
	
EGLBoolean  
eglGetConfigAttrib (EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint *value) {  
	CHECK_DISPLAY
	
	if (attribute == EGL_SURFACE_TYPE) {
		*value = EGL_WINDOW_BIT;
	}
	*value = EGL_WINDOW_BIT;
	
	return EGL_TRUE;
}
	
// ==== Context
EGLContext  
eglCreateContext (EGLDisplay dpy, EGLConfig config, EGLContext share_list, const EGLint *attrib_list) {
	CHECK_DISPLAY
	
	gl_context_t* ctx_ = (gl_context_t*)AllocAObject(sizeof(gl_context_t));
	// TODO: create a vk device
	
	return ctx_;
}

EGLBoolean  
eglMakeCurrent (EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx_) {
	CHECK_DISPLAY
	
	ctx = (gl_context_t*)ctx_;
	
	ctx->EGL_ctx.EGL_resource.instance = (VkInstance)dpy;
	ctx->EGL_ctx.EGL_resource.surface = (VkSurfaceKHR)draw;
	
	// TODO: create a swapchain
	SET_CTX(ctx);
	if (ctx)
		egl_state.bindctx = EGL_TRUE;
	else
		egl_state.bindctx = EGL_FALSE;
	
	return EGL_TRUE;
}

// ==== SwapBuffer
EGLBoolean  
eglSwapBuffers (EGLDisplay dpy, EGLSurface draw) {  
	GET_CTX
	CHECK_DISPLAY
	
	return EGL_TRUE;
}

EGLBoolean  
eglSwapInterval (EGLDisplay dpy, EGLint interval) {
	CHECK_DISPLAY
	
	return EGL_TRUE;
}

// ==== Get
EGLint  
eglGetError (void) {  
	return egl_state.error;
}

EGLContext  
eglGetCurrentContext (void) {
	GET_CTX
	
	if (egl_state.bindctx == EGL_FALSE) {
		egl_state.error = EGL_BAD_CONTEXT;
		return EGL_NO_CONTEXT;
	}
	
	return (EGLContext) ctx;
}

EGLSurface  
eglGetCurrentSurface (EGLint readdraw) {  
	GET_CTX
	
	if (egl_state.bindctx)
		return (EGLDisplay) (ctx->EGL_ctx.EGL_resource.surface);
	else
		return (EGLDisplay) (egl_state.surface);
	
	return EGL_NO_SURFACE;
}

EGLDisplay  
eglGetCurrentDisplay (void) {  
	GET_CTX
	
	if (egl_state.bindctx)
		return (EGLDisplay) (ctx->EGL_ctx.EGL_resource.instance);
	else
		return (EGLDisplay) (egl_state.display);
	
	return EGL_NO_DISPLAY;
}

const char *  
eglQueryString(EGLDisplay dpy, EGLint name)
{
    CHECK_DISPLAY
    
    switch(name) {
    case EGL_CLIENT_APIS:   return "EGL_OPENGL_ES_API EGL_OPENGL_API\0"; break;
    case EGL_VENDOR:        return "vgpu_vk\0"; break;
    case EGL_VERSION:       return "1.4\0"; break;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    case EGL_EXTENSIONS:    return "EGL_KHR_image_base EGL_ANDROID_image_native_buffer\0"; break;
#else
    case EGL_EXTENSIONS:    return "\0"; break;
#endif
    default:                return "\0"; break;
    }

    return "\0";
}

// ==== Clear
EGLBoolean  
eglDestroyContext (EGLDisplay dpy, EGLContext ctx) {  
	CHECK_DISPLAY
	
	egl_state.instance = (VkInstance)dpy;
	
	free_all(ctx);
	SET_CTX(nullptr)
	egl_state.bindctx = EGL_FALSE;
	
	return EGL_TRUE;
}

EGLBoolean  
eglDestroySurface (EGLDisplay dpy, EGLSurface surface) {  
	GET_CTX
	CHECK_DISPLAY
	
	if (egl_state.bindctx)
		DestroySurfaceKHR(ctx->EGL_ctx.EGL_resource.instance, ctx->EGL_ctx.EGL_resource.surface);
	else
		DestroySurfaceKHR(egl_state.instance, egl_state.surface);
	
	return EGL_TRUE;
}

EGLBoolean  
eglTerminate (EGLDisplay dpy) {
	GET_CTX
	CHECK_DISPLAY
	
	if (egl_state.bindctx)
		DestroyInstance(ctx->EGL_ctx.EGL_resource.instance);
	else
		DestroyInstance(egl_state.instance);
	
	return EGL_TRUE;
}

EGLBoolean  
eglReleaseThread (void) {
	GET_CTX
	
	//clear_all_ctx(ctx);
	
	return EGL_TRUE;
}