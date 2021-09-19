

// ======== structure declaration
struct GL_ctx;

struct GL_state;
struct GL_resource;


// ======== structure definition
struct GL_ctx {
	struct GL_state;
	struct GL_resource;
};

struct GL_state {
	uint texture_number;
};

struct GL_resource {
	uint texture_id;
};
