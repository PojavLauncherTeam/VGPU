

// ======== structure declaration
struct vk_ctx;

struct vk_state;
struct vk_resource;


// ======== structure definition
struct vk_ctx {
	struct vk_state;
	struct vk_resource;
};

struct vk_state {
	uint texture_number;
};

struct vk_resource {
	uint texture_id;
};
