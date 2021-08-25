// Copyright 2016 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// This file is generated.
#ifndef VULKAN_WRAPPER_H
#define VULKAN_WRAPPER_H

#define VK_NO_PROTOTYPES 1
#include "vulkan/vulkan.h"

/* Initialize the Vulkan function pointer variables declared in this header.
 * Returns 0 if vulkan is not available, non-zero if it is available.
 */

#define VKAPI 
//VKAPI int InitVulkan(void);

// VK_core
VKAPI PFN_vkCreateInstance    vk_CreateInstance;
VKAPI PFN_vkDestroyInstance    vk_DestroyInstance;
VKAPI PFN_vkEnumeratePhysicalDevices    vk_EnumeratePhysicalDevices;
VKAPI PFN_vkGetPhysicalDeviceFeatures    vk_GetPhysicalDeviceFeatures;
VKAPI PFN_vkGetPhysicalDeviceFormatProperties    vk_GetPhysicalDeviceFormatProperties;
VKAPI PFN_vkGetPhysicalDeviceImageFormatProperties    vk_GetPhysicalDeviceImageFormatProperties;
VKAPI PFN_vkGetPhysicalDeviceProperties    vk_GetPhysicalDeviceProperties;
VKAPI PFN_vkGetPhysicalDeviceQueueFamilyProperties    vk_GetPhysicalDeviceQueueFamilyProperties;
VKAPI PFN_vkGetPhysicalDeviceMemoryProperties    vk_GetPhysicalDeviceMemoryProperties;
VKAPI PFN_vkGetInstanceProcAddr    vk_GetInstanceProcAddr;
VKAPI PFN_vkGetDeviceProcAddr    vk_GetDeviceProcAddr;
VKAPI PFN_vkCreateDevice    vk_CreateDevice;
VKAPI PFN_vkDestroyDevice    vk_DestroyDevice;
VKAPI PFN_vkEnumerateInstanceExtensionProperties    vk_EnumerateInstanceExtensionProperties;
VKAPI PFN_vkEnumerateDeviceExtensionProperties    vk_EnumerateDeviceExtensionProperties;
VKAPI PFN_vkEnumerateInstanceLayerProperties    vk_EnumerateInstanceLayerProperties;
VKAPI PFN_vkEnumerateDeviceLayerProperties    vk_EnumerateDeviceLayerProperties;
VKAPI PFN_vkGetDeviceQueue    vk_GetDeviceQueue;
VKAPI PFN_vkQueueSubmit    vk_QueueSubmit;
VKAPI PFN_vkQueueWaitIdle    vk_QueueWaitIdle;
VKAPI PFN_vkDeviceWaitIdle    vk_DeviceWaitIdle;
VKAPI PFN_vkAllocateMemory    vk_AllocateMemory;
VKAPI PFN_vkFreeMemory    vk_FreeMemory;
VKAPI PFN_vkMapMemory    vk_MapMemory;
VKAPI PFN_vkUnmapMemory    vk_UnmapMemory;
VKAPI PFN_vkFlushMappedMemoryRanges    vk_FlushMappedMemoryRanges;
VKAPI PFN_vkInvalidateMappedMemoryRanges    vk_InvalidateMappedMemoryRanges;
VKAPI PFN_vkGetDeviceMemoryCommitment    vk_GetDeviceMemoryCommitment;
VKAPI PFN_vkBindBufferMemory    vk_BindBufferMemory;
VKAPI PFN_vkBindImageMemory    vk_BindImageMemory;
VKAPI PFN_vkGetBufferMemoryRequirements    vk_GetBufferMemoryRequirements;
VKAPI PFN_vkGetImageMemoryRequirements    vk_GetImageMemoryRequirements;
VKAPI PFN_vkGetImageSparseMemoryRequirements    vk_GetImageSparseMemoryRequirements;
VKAPI PFN_vkGetPhysicalDeviceSparseImageFormatProperties    vk_GetPhysicalDeviceSparseImageFormatProperties;
VKAPI PFN_vkQueueBindSparse    vk_QueueBindSparse;
VKAPI PFN_vkCreateFence    vk_CreateFence;
VKAPI PFN_vkDestroyFence    vk_DestroyFence;
VKAPI PFN_vkResetFences    vk_ResetFences;
VKAPI PFN_vkGetFenceStatus    vk_GetFenceStatus;
VKAPI PFN_vkWaitForFences    vk_WaitForFences;
VKAPI PFN_vkCreateSemaphore    vk_CreateSemaphore;
VKAPI PFN_vkDestroySemaphore    vk_DestroySemaphore;
VKAPI PFN_vkCreateEvent    vk_CreateEvent;
VKAPI PFN_vkDestroyEvent    vk_DestroyEvent;
VKAPI PFN_vkGetEventStatus    vk_GetEventStatus;
VKAPI PFN_vkSetEvent    vk_SetEvent;
VKAPI PFN_vkResetEvent    vk_ResetEvent;
VKAPI PFN_vkCreateQueryPool    vk_CreateQueryPool;
VKAPI PFN_vkDestroyQueryPool    vk_DestroyQueryPool;
VKAPI PFN_vkGetQueryPoolResults    vk_GetQueryPoolResults;
VKAPI PFN_vkCreateBuffer    vk_CreateBuffer;
VKAPI PFN_vkDestroyBuffer    vk_DestroyBuffer;
VKAPI PFN_vkCreateBufferView    vk_CreateBufferView;
VKAPI PFN_vkDestroyBufferView    vk_DestroyBufferView;
VKAPI PFN_vkCreateImage    vk_CreateImage;
VKAPI PFN_vkDestroyImage    vk_DestroyImage;
VKAPI PFN_vkGetImageSubresourceLayout    vk_GetImageSubresourceLayout;
VKAPI PFN_vkCreateImageView    vk_CreateImageView;
VKAPI PFN_vkDestroyImageView    vk_DestroyImageView;
VKAPI PFN_vkCreateShaderModule    vk_CreateShaderModule;
VKAPI PFN_vkDestroyShaderModule    vk_DestroyShaderModule;
VKAPI PFN_vkCreatePipelineCache    vk_CreatePipelineCache;
VKAPI PFN_vkDestroyPipelineCache    vk_DestroyPipelineCache;
VKAPI PFN_vkGetPipelineCacheData    vk_GetPipelineCacheData;
VKAPI PFN_vkMergePipelineCaches    vk_MergePipelineCaches;
VKAPI PFN_vkCreateGraphicsPipelines    vk_CreateGraphicsPipelines;
VKAPI PFN_vkCreateComputePipelines    vk_CreateComputePipelines;
VKAPI PFN_vkDestroyPipeline    vk_DestroyPipeline;
VKAPI PFN_vkCreatePipelineLayout    vk_CreatePipelineLayout;
VKAPI PFN_vkDestroyPipelineLayout    vk_DestroyPipelineLayout;
VKAPI PFN_vkCreateSampler    vk_CreateSampler;
VKAPI PFN_vkDestroySampler    vk_DestroySampler;
VKAPI PFN_vkCreateDescriptorSetLayout    vk_CreateDescriptorSetLayout;
VKAPI PFN_vkDestroyDescriptorSetLayout    vk_DestroyDescriptorSetLayout;
VKAPI PFN_vkCreateDescriptorPool    vk_CreateDescriptorPool;
VKAPI PFN_vkDestroyDescriptorPool    vk_DestroyDescriptorPool;
VKAPI PFN_vkResetDescriptorPool    vk_ResetDescriptorPool;
VKAPI PFN_vkAllocateDescriptorSets    vk_AllocateDescriptorSets;
VKAPI PFN_vkFreeDescriptorSets    vk_FreeDescriptorSets;
VKAPI PFN_vkUpdateDescriptorSets    vk_UpdateDescriptorSets;
VKAPI PFN_vkCreateFramebuffer    vk_CreateFramebuffer;
VKAPI PFN_vkDestroyFramebuffer    vk_DestroyFramebuffer;
VKAPI PFN_vkCreateRenderPass    vk_CreateRenderPass;
VKAPI PFN_vkDestroyRenderPass    vk_DestroyRenderPass;
VKAPI PFN_vkGetRenderAreaGranularity    vk_GetRenderAreaGranularity;
VKAPI PFN_vkCreateCommandPool    vk_CreateCommandPool;
VKAPI PFN_vkDestroyCommandPool    vk_DestroyCommandPool;
VKAPI PFN_vkResetCommandPool    vk_ResetCommandPool;
VKAPI PFN_vkAllocateCommandBuffers    vk_AllocateCommandBuffers;
VKAPI PFN_vkFreeCommandBuffers    vk_FreeCommandBuffers;
VKAPI PFN_vkBeginCommandBuffer    vk_BeginCommandBuffer;
VKAPI PFN_vkEndCommandBuffer    vk_EndCommandBuffer;
VKAPI PFN_vkResetCommandBuffer    vk_ResetCommandBuffer;
VKAPI PFN_vkCmdBindPipeline    vk_CmdBindPipeline;
VKAPI PFN_vkCmdSetViewport    vk_CmdSetViewport;
VKAPI PFN_vkCmdSetScissor    vk_CmdSetScissor;
VKAPI PFN_vkCmdSetLineWidth    vk_CmdSetLineWidth;
VKAPI PFN_vkCmdSetDepthBias    vk_CmdSetDepthBias;
VKAPI PFN_vkCmdSetBlendConstants    vk_CmdSetBlendConstants;
VKAPI PFN_vkCmdSetDepthBounds    vk_CmdSetDepthBounds;
VKAPI PFN_vkCmdSetStencilCompareMask    vk_CmdSetStencilCompareMask;
VKAPI PFN_vkCmdSetStencilWriteMask    vk_CmdSetStencilWriteMask;
VKAPI PFN_vkCmdSetStencilReference    vk_CmdSetStencilReference;
VKAPI PFN_vkCmdBindDescriptorSets    vk_CmdBindDescriptorSets;
VKAPI PFN_vkCmdBindIndexBuffer    vk_CmdBindIndexBuffer;
VKAPI PFN_vkCmdBindVertexBuffers    vk_CmdBindVertexBuffers;
VKAPI PFN_vkCmdDraw    vk_CmdDraw;
VKAPI PFN_vkCmdDrawIndexed    vk_CmdDrawIndexed;
VKAPI PFN_vkCmdDrawIndirect    vk_CmdDrawIndirect;
VKAPI PFN_vkCmdDrawIndexedIndirect    vk_CmdDrawIndexedIndirect;
VKAPI PFN_vkCmdDispatch    vk_CmdDispatch;
VKAPI PFN_vkCmdDispatchIndirect    vk_CmdDispatchIndirect;
VKAPI PFN_vkCmdCopyBuffer    vk_CmdCopyBuffer;
VKAPI PFN_vkCmdCopyImage    vk_CmdCopyImage;
VKAPI PFN_vkCmdBlitImage    vk_CmdBlitImage;
VKAPI PFN_vkCmdCopyBufferToImage    vk_CmdCopyBufferToImage;
VKAPI PFN_vkCmdCopyImageToBuffer    vk_CmdCopyImageToBuffer;
VKAPI PFN_vkCmdUpdateBuffer    vk_CmdUpdateBuffer;
VKAPI PFN_vkCmdFillBuffer    vk_CmdFillBuffer;
VKAPI PFN_vkCmdClearColorImage    vk_CmdClearColorImage;
VKAPI PFN_vkCmdClearDepthStencilImage    vk_CmdClearDepthStencilImage;
VKAPI PFN_vkCmdClearAttachments    vk_CmdClearAttachments;
VKAPI PFN_vkCmdResolveImage    vk_CmdResolveImage;
VKAPI PFN_vkCmdSetEvent    vk_CmdSetEvent;
VKAPI PFN_vkCmdResetEvent    vk_CmdResetEvent;
VKAPI PFN_vkCmdWaitEvents    vk_CmdWaitEvents;
VKAPI PFN_vkCmdPipelineBarrier    vk_CmdPipelineBarrier;
VKAPI PFN_vkCmdBeginQuery    vk_CmdBeginQuery;
VKAPI PFN_vkCmdEndQuery    vk_CmdEndQuery;
VKAPI PFN_vkCmdResetQueryPool    vk_CmdResetQueryPool;
VKAPI PFN_vkCmdWriteTimestamp    vk_CmdWriteTimestamp;
VKAPI PFN_vkCmdCopyQueryPoolResults    vk_CmdCopyQueryPoolResults;
VKAPI PFN_vkCmdPushConstants    vk_CmdPushConstants;
VKAPI PFN_vkCmdBeginRenderPass    vk_CmdBeginRenderPass;
VKAPI PFN_vkCmdNextSubpass    vk_CmdNextSubpass;
VKAPI PFN_vkCmdEndRenderPass    vk_CmdEndRenderPass;
VKAPI PFN_vkCmdExecuteCommands    vk_CmdExecuteCommands;

// VK_KHR_surface
VKAPI PFN_vkDestroySurfaceKHR    vk_DestroySurfaceKHR;
VKAPI PFN_vkGetPhysicalDeviceSurfaceSupportKHR    vk_GetPhysicalDeviceSurfaceSupportKHR;
VKAPI PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR    vk_GetPhysicalDeviceSurfaceCapabilitiesKHR;
VKAPI PFN_vkGetPhysicalDeviceSurfaceFormatsKHR    vk_GetPhysicalDeviceSurfaceFormatsKHR;
VKAPI PFN_vkGetPhysicalDeviceSurfacePresentModesKHR    vk_GetPhysicalDeviceSurfacePresentModesKHR;

// VK_KHR_swapchain
VKAPI PFN_vkCreateSwapchainKHR    vk_CreateSwapchainKHR;
VKAPI PFN_vkDestroySwapchainKHR    vk_DestroySwapchainKHR;
VKAPI PFN_vkGetSwapchainImagesKHR    vk_GetSwapchainImagesKHR;
VKAPI PFN_vkAcquireNextImageKHR    vk_AcquireNextImageKHR;
VKAPI PFN_vkQueuePresentKHR    vk_QueuePresentKHR;

// VK_KHR_display
VKAPI PFN_vkGetPhysicalDeviceDisplayPropertiesKHR    vk_GetPhysicalDeviceDisplayPropertiesKHR;
VKAPI PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR    vk_GetPhysicalDeviceDisplayPlanePropertiesKHR;
VKAPI PFN_vkGetDisplayPlaneSupportedDisplaysKHR    vk_GetDisplayPlaneSupportedDisplaysKHR;
VKAPI PFN_vkGetDisplayModePropertiesKHR    vk_GetDisplayModePropertiesKHR;
VKAPI PFN_vkCreateDisplayModeKHR    vk_CreateDisplayModeKHR;
VKAPI PFN_vkGetDisplayPlaneCapabilitiesKHR    vk_GetDisplayPlaneCapabilitiesKHR;
VKAPI PFN_vkCreateDisplayPlaneSurfaceKHR    vk_CreateDisplayPlaneSurfaceKHR;

// VK_KHR_display_swapchain
VKAPI PFN_vkCreateSharedSwapchainsKHR    vk_CreateSharedSwapchainsKHR;

#ifdef VK_USE_PLATFORM_XLIB_KHR
// VK_KHR_xlib_surface
VKAPI PFN_vkCreateXlibSurfaceKHR    vk_CreateXlibSurfaceKHR;
VKAPI PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR    vk_GetPhysicalDeviceXlibPresentationSupportKHR;
#endif

#ifdef VK_USE_PLATFORM_XCB_KHR
// VK_KHR_xcb_surface
VKAPI PFN_vkCreateXcbSurfaceKHR    vk_CreateXcbSurfaceKHR;
VKAPI PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR    vk_GetPhysicalDeviceXcbPresentationSupportKHR;
#endif

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
// VK_KHR_wayland_surface
VKAPI PFN_vkCreateWaylandSurfaceKHR    vk_CreateWaylandSurfaceKHR;
VKAPI PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR    vk_GetPhysicalDeviceWaylandPresentationSupportKHR;
#endif

#ifdef VK_USE_PLATFORM_MIR_KHR
// VK_KHR_mir_surface
VKAPI PFN_vkCreateMirSurfaceKHR    vk_CreateMirSurfaceKHR;
VKAPI PFN_vkGetPhysicalDeviceMirPresentationSupportKHR    vk_GetPhysicalDeviceMirPresentationSupportKHR;
#endif

#ifdef VK_USE_PLATFORM_ANDROID_KHR
// VK_KHR_android_surface
VKAPI PFN_vkCreateAndroidSurfaceKHR    vk_CreateAndroidSurfaceKHR;
#endif

#ifdef VK_USE_PLATFORM_WIN32_KHR
// VK_KHR_win32_surface
VKAPI PFN_vkCreateWin32SurfaceKHR    vk_CreateWin32SurfaceKHR;
VKAPI PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR    vk_GetPhysicalDeviceWin32PresentationSupportKHR;
#endif

#ifdef USE_DEBUG_EXTENTIONS
#include <vulkan/vk_sdk_platform.h>
// VK_EXT_debug_report
VKAPI PFN_vkCreateDebugReportCallbackEXT    vk_CreateDebugReportCallbackEXT;
VKAPI PFN_vkDestroyDebugReportCallbackEXT    vk_DestroyDebugReportCallbackEXT;
VKAPI PFN_vkDebugReportMessageEXT    vk_DebugReportMessageEXT;
#endif


#endif // VULKAN_WRAPPER_H
