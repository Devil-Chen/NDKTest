package com.example.apple.ndktest;

//import android.util.Log;

public class NDKManager {
//    private static final String TAG = NDKManager.class.getSimpleName();
    static {
        try {
            System.loadLibrary("nativeLib");
//            Log.e(TAG,"load  library success");
            System.err.print("load  library success");
        } catch (Exception e) {
//            Log.e(TAG,"load  library failed:"
//                    + e.getMessage());
            System.err.print("load  library failed:"
                    + e.getMessage());
        }
    }

    public native static String getName();
}
