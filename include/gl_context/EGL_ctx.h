

// ======== structure declaration
struct EGL_ctx;

struct EGL_state;
struct EGL_resource;


// ======== structure definition
struct EGL_ctx {
	struct EGL_state;
	struct EGL_resource;
};

struct EGL_state {
	uint texture_number;
};

struct EGL_resource {
	uint texture_id;
};
