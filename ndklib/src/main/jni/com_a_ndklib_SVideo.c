//
// Created by zq134 on 2020/9/23.
//
#include "com_a_ndklib_SVideo.h"
//c 的方法定义   方法名由Java_+包名+类名+方法名
JNIEXPORT jstring JNICALL Java_com_a_ndklib_SVideo_title
    (JNIEnv *env, jclass clazz){
        return (*env)->NewStringUTF(env,"MyVideo");
    }
