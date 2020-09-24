LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := SVideo
LOCAL_SRC_FILES := com_a_ndklib_SVideo.c
include $(BUILD_SHARED_LIBRARY)