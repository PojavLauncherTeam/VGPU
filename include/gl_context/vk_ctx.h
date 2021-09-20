

// ======== structure declaration
struct vk_ctx;

struct vk_state;
struct vk_resource;


// ======== structure definition
struct vk_state_t {
	uint texture_number;
};

struct vk_resource_t {
	uint texture_id;
};

struct vk_ctx_t {
	vk_state_t vk_state;
	vk_resource_t vk_resource;
};

