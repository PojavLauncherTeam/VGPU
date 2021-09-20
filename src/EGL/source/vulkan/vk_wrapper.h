#include "vulkan/vulkan.h"
#include "vk_global.h"

#define VK_EXTERN extern

// ==== Structures
VK_EXTERN VulkanDeviceInfo device;
VK_EXTERN VulkanSwapchainInfo swapchain;
VK_EXTERN VulkanGfxPipelineInfo gfxPipeline;
VK_EXTERN VulkanRenderInfo render;

// ==== Functions
VK_EXTERN void CreateInstance(VkInstance *instance);
VK_EXTERN void CreateAndroidSurface(VkInstance instance, 
										ANativeWindow* platformWindow, 
										VkSurfaceKHR* surface);
VK_EXTERN void CreateVulkanDevice(ANativeWindow* platformWindow);

VK_EXTERN void DestroyInstance(VkInstance instance);
VK_EXTERN void DestroySurfaceKHR(VkInstance instance, 
									VkSurfaceKHR surface);



