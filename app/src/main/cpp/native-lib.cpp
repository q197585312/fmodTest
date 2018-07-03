#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_administrator_fmodtest_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT void JNICALL
Java_com_example_administrator_fmodtest_MainActivity_playSound(JNIEnv *env, jobject instance,
                                                               jstring filePath_) {
    const char *filePath = env->GetStringUTFChars(filePath_, 0);



    env->ReleaseStringUTFChars(filePath_, filePath);
}