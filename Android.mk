LOCAL_PATH := $(call my-dir)

###########################
#
# EGL shared library
#
###########################

include $(CLEAR_VARS)

LOCAL_MODULE:= egl_vk
LOCAL_CXXFLAGS:=-std=c++11 -fno-exceptions -frtti

LOCAL_CFLAGS += -DVK_USE_PLATFORM_ANDROID_KHR

LOCAL_C_INCLUDES := $(LOCAL_PATH)/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/src/EGL/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/src/EGL/source
LOCAL_EXPORT_C_INCLUDES:= $(LOCAL_C_INCLUDES) -DBCMHOST

LOCAL_SRC_FILES:= \
    src/loader/vk_loader.cpp \
    src/EGL/source/api/eglContext.cpp \
    src/EGL/source/api/eglConfig.cpp \
    src/EGL/source/api/egl.cpp \
    src/EGL/source/api/eglSurface.cpp \
    src/EGL/source/display/displayDriver.cpp \
    src/EGL/source/display/displayDriversContainer.cpp \
    src/EGL/source/thread/renderingThread.cpp \
    src/EGL/source/platform/platformFactory.cpp \
    src/EGL/source/platform/vulkan/WSIPlaneDisplay.cpp \
    src/EGL/source/platform/vulkan/vulkanWindowInterface.cpp \
    src/EGL/source/platform/vulkan/vulkanWSI.cpp \
    src/EGL/source/platform/vulkan/vulkanAPI.cpp \
    src/EGL/source/rendering_api/rendering_api.c \
    src/EGL/source/utils/eglLogger.cpp

include $(BUILD_SHARED_LIBRARY)

###########################
#
# GL shared library
#
###########################

include $(CLEAR_VARS)

LOCAL_MODULE := vgpu_vk

LOCAL_C_INCLUDES := $(LOCAL_PATH)/glslang/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/src/GL
LOCAL_C_INCLUDES += $(LOCAL_PATH)/src/EGL/include

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES) -DBCMHOST

LOCAL_SRC_FILES := \
    src/loader/vk_loader.cpp \
    src/GL/api/gl.cpp \
    src/GL/api/eglInterface.cpp \
    src/GL/context/context.cpp \
    src/GL/context/contextBufferObject.cpp \
    src/GL/context/contextFrameBuffer.cpp \
    src/GL/context/contextRenderBuffer.cpp \
    src/GL/context/contextRendering.cpp \
    src/GL/context/contextShader.cpp \
    src/GL/context/contextShaderProgram.cpp \
    src/GL/context/contextSpecialFunctions.cpp \
    src/GL/context/contextStateFragmentOperations.cpp \
    src/GL/context/contextStateFramebufferOperations.cpp \
    src/GL/context/contextStateManager.cpp \
    src/GL/context/contextStatePixelOperations.cpp \
    src/GL/context/contextStateQueries.cpp \
    src/GL/context/contextStateRasterization.cpp \
    src/GL/context/contextStateViewportTransformation.cpp \
    src/GL/context/contextTexture.cpp \
    src/GL/context/contextUtilities.cpp \
    src/GL/context/contextVertexAttributes.cpp \
    src/GL/glslang/glslangCompiler.cpp \
    src/GL/glslang/glslangLinker.cpp \
    src/GL/glslang/glslangIoMapResolver.cpp \
    src/GL/glslang/glslangShaderCompiler.cpp \
    src/GL/glslang/shaderConverter.cpp \
    src/GL/resources/attachment.cpp \
    src/GL/resources/bufferObject.cpp \
    src/GL/resources/framebuffer.cpp \
    src/GL/resources/genericVertexAttributes.cpp \
    src/GL/resources/resourceManager.cpp \
    src/GL/resources/renderbuffer.cpp \
    src/GL/resources/shader.cpp \
    src/GL/resources/shaderProgram.cpp \
    src/GL/resources/shaderReflection.cpp \
    src/GL/resources/shaderResourceInterface.cpp \
    src/GL/resources/texture.cpp \
    src/GL/resources/rect.cpp \
    src/GL/resources/sampler.cpp \
    src/GL/state/stateManager.cpp \
    src/GL/state/stateActiveObjects.cpp \
    src/GL/state/stateInputAssembly.cpp \
    src/GL/state/stateFragmentOperations.cpp \
    src/GL/state/stateFramebufferOperations.cpp \
    src/GL/state/statePixelStorage.cpp \
    src/GL/state/stateRasterization.cpp \
    src/GL/state/stateHintAspects.cpp \
    src/GL/state/stateViewportTransformation.cpp \
    src/GL/utils/GlToVkConverter.cpp \
    src/GL/utils/parser_helpers.cpp \
    src/GL/utils/VkToGlConverter.cpp \
    src/GL/utils/glLogger.cpp \
    src/GL/utils/glUtils.cpp \
    src/GL/vulkan/cbManager.cpp \
    src/GL/vulkan/clearPass.cpp \
    src/GL/vulkan/renderPass.cpp \
    src/GL/vulkan/buffer.cpp \
    src/GL/vulkan/memory.cpp \
    src/GL/vulkan/sampler.cpp \
    src/GL/vulkan/image.cpp \
    src/GL/vulkan/imageView.cpp \
    src/GL/vulkan/pipeline.cpp \
    src/GL/vulkan/framebuffer.cpp \
    src/GL/vulkan/context.cpp \
    src/GL/vulkan/utils.cpp
    

LOCAL_CFLAGS = -g -fexceptions -frtti -std=c++11 -Wall
#LOCAL_CFLAGS += -D_GLIBCXX_USE_CXX11_ABI=0
#LOCAL_CFLAGS += -O3
LOCAL_CFLAGS += -funwind-tables -fvisibility=hidden
LOCAL_CFLAGS += -DVK_USE_PLATFORM_ANDROID_KHR

LOCAL_LDLIBS := -ldl -llog -lm
#building as a shared lib

LOCAL_SHARED_LIBRARIES := OSDependent
LOCAL_SHARED_LIBRARIES += OGLCompiler
LOCAL_SHARED_LIBRARIES += HLSL
LOCAL_SHARED_LIBRARIES += glslang
LOCAL_SHARED_LIBRARIES += SPIRV

include $(BUILD_SHARED_LIBRARY)

include $(LOCAL_PATH)/glslang/Android.mk
