# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.
#如果cpp目录下含有C文件，并且别的cpp文件引用这个C文件了，那么CMakeLists.txt文件需要添加以下配置
#add_library(aes-lib STATIC src/main/cpp/aes.c)
cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.
# 编译出一个动态库 ndklib（名字随意命名），源文件只有 src/main/cpp/native-lib.cpp（如果含有多个的话，需要添加多行类似的代码）
add_library( # Sets the name of the library.
        #native-lib
        ndklib

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        native-lib.cpp)

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log)

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.
# 找到预编译库 log_lib 并link到我们的动态库 ndklib（跟上面的保持一致）中
target_link_libraries( # Specifies the target library.
        #native-lib
        ndklib

        # Links the target library to the log library
        # included in the NDK.
        ${log-lib})