LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE:= egl
LOCAL_CXXFLAGS:=-std=c++11 -fno-exceptions -frtti

LOCAL_CFLAGS += -DVK_USE_PLATFORM_ANDROID_KHR

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../include
LOCAL_C_INCLUDES += $(LOCAL_PATH)
LOCAL_EXPORT_C_INCLUDES:= $(LOCAL_C_INCLUDES) -DBCMHOST

LOCAL_SRC_FILES:= \
    api/eglContext.cpp \
    api/eglConfig.cpp \
    api/egl.cpp \
    api/eglSurface.cpp \
    display/displayDriver.cpp \
    display/displayDriversContainer.cpp \
    thread/renderingThread.cpp \
    platform/platformFactory.cpp \
    platform/vulkan/WSIPlaneDisplay.cpp \
    platform/vulkan/vulkanWindowInterface.cpp \
    platform/vulkan/vulkanWSI.cpp \
    platform/vulkan/vulkanAPI.cpp \
    rendering_api/rendering_api.c \
    utils/eglLogger.cpp

include $(BUILD_STATIC_LIBRARY)