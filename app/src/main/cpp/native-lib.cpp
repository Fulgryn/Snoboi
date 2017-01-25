#include <jni.h>
#include <string>

extern "C"
jstring
Java_fr_univsmb_test_1n2134167635_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
