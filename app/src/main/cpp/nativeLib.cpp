#include <jni.h>
#include <string>
#include "com_example_apple_ndktest_NDKManager.h"
#include <openssl/sm2.h>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_apple_ndktest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}


JNIEXPORT jstring JNICALL Java_com_example_apple_ndktest_NDKManager_getName
        (JNIEnv *env, jclass mClass){
    return env->NewStringUTF("NDKManager test");
}