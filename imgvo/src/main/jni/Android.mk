LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := CUtils
LOCAL_SRC_FILES := com_imgvo_CUtils.c
include $(BUILD_SHARED_LIBRARY)