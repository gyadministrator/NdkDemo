#include <jni.h>
#include <string>

/*extern "C" JNIEXPORT jstring JNICALL
Java_com_android_ndkdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject *//* this *//*) {
    std::string hello = "Hello from C++  你好呀";
    return env->NewStringUTF(hello.c_str());
}*/

extern "C"
JNIEXPORT jstring JNICALL
Java_com_android_ndkdemo_LibNDKDemo_stringFromJNI(JNIEnv *env, jclass clazz) {
    std::string hello = "Hello from C++  你好呀";
    return env->NewStringUTF(hello.c_str());
}