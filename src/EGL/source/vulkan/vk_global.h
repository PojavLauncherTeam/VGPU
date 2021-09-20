


// Global Variables ...
struct VulkanDeviceInfo {
  bool initialized_;

  VkInstance instance_;
  VkPhysicalDevice gpuDevice_;
  VkPhysicalDeviceMemoryProperties gpuMemoryProperties_;
  VkDevice device_;
  uint32_t queueFamilyIndex_;

  VkSurfaceKHR surface_;
  VkQueue queue_;
};
//VulkanDeviceInfo device;

struct VulkanSwapchainInfo {
  VkSwapchainKHR swapchain_;
  uint32_t swapchainLength_;

  VkExtent2D displaySize_;
  VkFormat displayFormat_;

  // array of frame buffers and views
  VkFramebuffer* framebuffers_;
  VkImage* displayImages_;
  VkImageView* displayViews_;
};
//VulkanSwapchainInfo swapchain;

typedef struct texture_object {
  VkSampler sampler;
  VkImage image;
  VkImageLayout imageLayout;
  VkDeviceMemory mem;
  VkImageView view;
  int32_t tex_width;
  int32_t tex_height;
} texture_object;
static const VkFormat kTexFmt = VK_FORMAT_R8G8B8A8_UNORM;
#define TUTORIAL_TEXTURE_COUNT 1
/*const char* texFiles[TUTORIAL_TEXTURE_COUNT] = {
    "sample_tex.png",
};*/
//struct texture_object textures[TUTORIAL_TEXTURE_COUNT];

struct VulkanBufferInfo {
  VkBuffer vertexBuf_;
};
//VulkanBufferInfo buffers;

struct VulkanGfxPipelineInfo {
  VkDescriptorSetLayout dscLayout_;
  VkDescriptorPool descPool_;
  VkDescriptorSet descSet_;
  VkPipelineLayout layout_;
  VkPipelineCache cache_;
  VkPipeline pipeline_;
};
//VulkanGfxPipelineInfo gfxPipeline;

struct VulkanRenderInfo {
  VkRenderPass renderPass_;
  VkCommandPool cmdPool_;
  VkCommandBuffer* cmdBuffer_;
  uint32_t cmdBufferLen_;
  VkSemaphore semaphore_;
  VkFence fence_;
};
//VulkanRenderInfo render;

