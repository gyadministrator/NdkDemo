package com.android.ndkdemo;

/**
 * @ProjectName: NdkDemo
 * @Package: com.android.ndkdemo
 * @ClassName: LibNDKDemo
 * @Author: 1984629668@qq.com
 * @CreateDate: 2021/3/1 10:12
 */
public class LibNDKDemo {

    static {
        System.loadLibrary("ndklib");
    }

    public static native String stringFromJNI();
}
