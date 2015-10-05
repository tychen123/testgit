// aaaaa.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <cv.h>
#include <highgui.h>
 
int main()
{
    char filename[]="image1.jpg"; // 想要取得的圖檔名稱,將其放在和專案同一資料夾中
    IplImage *image; // IplImage利用 cvLoadImage()圖檔中的資料結構
    image = cvLoadImage(filename,CV_LOAD_IMAGE_UNCHANGED); // 讀取影像的資料結構
    if(!image){
        printf("Error: Couldn't open the image file.\n");
    }
    cvShowImage("HelloWorld",image); // 使影像在視窗中顯示
    cvWaitKey(0); // 使影像視窗停留
    cvDestroyWindow("HelloWorld"); // 用來銷毀一個視窗
    cvReleaseImage(&image); // 釋放IplImage資料結構
    return EXIT_SUCCESS;
}

