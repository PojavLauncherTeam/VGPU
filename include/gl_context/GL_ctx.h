

// ======== structure declaration
struct GL_ctx;

struct GL_state;
struct GL_resource;


// ======== structure definition
struct GL_state_t {
	uint texture_number;
};

struct GL_resource_t {
	uint texture_id;
};

struct GL_ctx_t {
	GL_state_t GL_state;
	GL_resource_t GL_resource;
};

