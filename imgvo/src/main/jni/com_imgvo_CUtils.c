//
// Created by zq134 on 2020/9/24.
//
#include "com_imgvo_CUtils.h"

JNIEXPORT jstring JNICALL Java_com_imgvo_CUtils_name(JNIEnv *env,jclass class){
    return (*env)->NewStringUTF(env,"这是一个jni的方法");
}

JNIEXPORT void JNICALL Java_com_imgvo_MyConn_callJni(JNIEnv *env,jobject obj){
    //找到需要回调的java类
    jclass classzz = (*env)->FindClass(env,"com/imgvo/MyConn");
    //判断是否存在
    if(classzz == 0){
        //LOGI("Not Found CUtils class!");
        return;
    }

    //找方法
    jmethodID methodId = (*env)->GetMethodID(env,classzz,"callJavaFromJni","()V");
    if(methodId == 0){
        //LOGI("Not Found method by class!");
        return;
    }

    //调用方法
    (*env)->CallVoidMethod(env,obj,methodId);

}
