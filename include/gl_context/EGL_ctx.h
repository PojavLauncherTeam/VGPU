

// ======== structure declaration
struct EGL_ctx;

struct EGL_state;
struct EGL_resource;


// ======== structure definition
struct EGL_state_t {
	uint texture_number;
};

struct EGL_resource_t {
	VkSurfaceKHR surface;
	VkInstance instance;
	VkDevice device;
};

struct EGL_ctx_t {
	EGL_state_t EGL_state;
	EGL_resource_t EGL_resource;
};
