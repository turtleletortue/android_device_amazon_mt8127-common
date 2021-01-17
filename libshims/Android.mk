LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := shim_binder.cpp
LOCAL_SHARED_LIBRARIES := libbinder
LOCAL_MODULE := libshim_libbinder
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
include $(BUILD_SHARED_LIBRARY)


include $(CLEAR_VARS)
LOCAL_SRC_FILES := shim_camera.cpp
LOCAL_SHARED_LIBRARIES := libui liblog libcutils libgui libbinder libutils
LOCAL_MODULE := libshim_libcamera
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
include $(BUILD_SHARED_LIBRARY)


include $(CLEAR_VARS)
LOCAL_SRC_FILES := shim_liblog.c
LOCAL_SHARED_LIBRARIES := liblog
LOCAL_MODULE := libshim_liblog
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
include $(BUILD_SHARED_LIBRARY)


include $(CLEAR_VARS)
LOCAL_SRC_FILES := shim_skia.cpp
LOCAL_SHARED_LIBRARIES := libskia
LOCAL_MODULE := libshim_skia
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := shim_gui.cpp
LOCAL_SHARED_LIBRARIES := libgui
LOCAL_MODULE := libshim_gui
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_C_INCLUDES += frameworks/av
LOCAL_SRC_FILES := shim_libwvm.cpp
LOCAL_SHARED_LIBRARIES := libstagefright_foundation liblog libmedia
LOCAL_MODULE := libshim_libwvm
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
LOCAL_32_BIT_ONLY := true
include $(BUILD_SHARED_LIBRARY)
