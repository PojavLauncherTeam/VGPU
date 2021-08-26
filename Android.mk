LOCAL_PATH := $(call my-dir)

###########################
#
# GL shared library
#
###########################

include $(CLEAR_VARS)

LOCAL_MODULE := vgpu

LOCAL_C_INCLUDES := $(LOCAL_PATH)/glslang/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/src/GLES
LOCAL_C_INCLUDES += $(LOCAL_PATH)/src/EGL/include

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_C_INCLUDES) -DBCMHOST

LOCAL_SRC_FILES := \
    src/loader/vk_loader.cpp \
    src/GLES/api/gl.cpp \
    src/GLES/api/eglInterface.cpp \
    src/GLES/context/context.cpp \
    src/GLES/context/contextBufferObject.cpp \
    src/GLES/context/contextFrameBuffer.cpp \
    src/GLES/context/contextRenderBuffer.cpp \
    src/GLES/context/contextRendering.cpp \
    src/GLES/context/contextShader.cpp \
    src/GLES/context/contextShaderProgram.cpp \
    src/GLES/context/contextSpecialFunctions.cpp \
    src/GLES/context/contextStateFragmentOperations.cpp \
    src/GLES/context/contextStateFramebufferOperations.cpp \
    src/GLES/context/contextStateManager.cpp \
    src/GLES/context/contextStatePixelOperations.cpp \
    src/GLES/context/contextStateQueries.cpp \
    src/GLES/context/contextStateRasterization.cpp \
    src/GLES/context/contextStateViewportTransformation.cpp \
    src/GLES/context/contextTexture.cpp \
    src/GLES/context/contextUtilities.cpp \
    src/GLES/context/contextVertexAttributes.cpp \
    src/GLES/glslang/glslangCompiler.cpp \
    src/GLES/glslang/glslangLinker.cpp \
    src/GLES/glslang/glslangIoMapResolver.cpp \
    src/GLES/glslang/glslangShaderCompiler.cpp \
    src/GLES/glslang/shaderConverter.cpp \
    src/GLES/resources/attachment.cpp \
    src/GLES/resources/bufferObject.cpp \
    src/GLES/resources/framebuffer.cpp \
    src/GLES/resources/genericVertexAttributes.cpp \
    src/GLES/resources/resourceManager.cpp \
    src/GLES/resources/renderbuffer.cpp \
    src/GLES/resources/shader.cpp \
    src/GLES/resources/shaderProgram.cpp \
    src/GLES/resources/shaderReflection.cpp \
    src/GLES/resources/shaderResourceInterface.cpp \
    src/GLES/resources/texture.cpp \
    src/GLES/resources/rect.cpp \
    src/GLES/resources/sampler.cpp \
    src/GLES/state/stateManager.cpp \
    src/GLES/state/stateActiveObjects.cpp \
    src/GLES/state/stateInputAssembly.cpp \
    src/GLES/state/stateFragmentOperations.cpp \
    src/GLES/state/stateFramebufferOperations.cpp \
    src/GLES/state/statePixelStorage.cpp \
    src/GLES/state/stateRasterization.cpp \
    src/GLES/state/stateHintAspects.cpp \
    src/GLES/state/stateViewportTransformation.cpp \
    src/GLES/utils/GlToVkConverter.cpp \
    src/GLES/utils/parser_helpers.cpp \
    src/GLES/utils/VkToGlConverter.cpp \
    src/GLES/utils/glLogger.cpp \
    src/GLES/utils/glUtils.cpp \
    src/GLES/vulkan/cbManager.cpp \
    src/GLES/vulkan/clearPass.cpp \
    src/GLES/vulkan/renderPass.cpp \
    src/GLES/vulkan/buffer.cpp \
    src/GLES/vulkan/memory.cpp \
    src/GLES/vulkan/sampler.cpp \
    src/GLES/vulkan/image.cpp \
    src/GLES/vulkan/imageView.cpp \
    src/GLES/vulkan/pipeline.cpp \
    src/GLES/vulkan/framebuffer.cpp \
    src/GLES/vulkan/context.cpp \
    src/GLES/vulkan/utils.cpp
    

LOCAL_CFLAGS = -g -fexceptions -frtti -std=c++11 -Wall
LOCAL_CFLAGS += -D_GLIBCXX_USE_CXX11_ABI=0
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

LOCAL_SHARED_LIBRARIES += egl

include $(BUILD_SHARED_LIBRARY)

include $(LOCAL_PATH)/glslang/Android.mk \
		$(LOCAL_PATH)/src/EGL/source/Android.mk
