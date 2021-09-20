

#include <stdio.h>
#include <stdlib.h>
#include <android/log.h>
#define Printf(...) __android_log_print(ANDROID_LOG_INFO, "VGPU_VK", __VA_ARGS__)
//#define Printf(String, ...) printf("VGPU_VK: " #String , __VA_ARGS__)

// Vulkan call wrapper
#define CALL_VK(func)                                                 \
    if (VK_SUCCESS != (func)) {                                         \
    __android_log_print(ANDROID_LOG_ERROR, "VGPU_VK: ",               \
                        "Vulkan error. File[%s], line[%d]", __FILE__, \
                        __LINE__);                                    \
    //assert(false);                                                    \
  }
  
static void* AllocAObject(long size) {
	return malloc(size);
}