package com.myndk;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;

import com.a.ndklib.SVideo;
import com.imgvo.CUtils;
import com.imgvo.MyConn;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        initView();
    }


    static {
        System.loadLibrary("SVideo");
        System.loadLibrary("CUtils");
    }

    //测试调用c/c++代码的方法
    private void initView(){
        String title = SVideo.title();
        Log.i("title",title);
        String name = CUtils.name();
        Log.i("name:",name);

        //调用c的方法
        MyConn myConn = new MyConn();
        myConn.callJni();
    }

}