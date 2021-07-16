#There are two modules that will be compiled in sequence.
LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := GL_2
LOCAL_SRC_FILES := pack.c
LOCAL_LDLIBS := -lGLESv2 -ldl
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := GL_3
LOCAL_SRC_FILES := pack.c
LOCAL_LDLIBS := -lGLESv3 -ldl
include $(BUILD_SHARED_LIBRARY)