// aaaaa.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <cv.h>
#include <highgui.h>
 
int main()
{
    char filename[]="image1.jpg"; // �Q�n���o�����ɦW��,�N���b�M�M�צP�@��Ƨ���
    IplImage *image; // IplImage�Q�� cvLoadImage()���ɤ�����Ƶ��c
    image = cvLoadImage(filename,CV_LOAD_IMAGE_UNCHANGED); // Ū���v������Ƶ��c
    if(!image){
        printf("Error: Couldn't open the image file.\n");
    }
    cvShowImage("HelloWorld",image); // �ϼv���b���������
    cvWaitKey(0); // �ϼv���������d
    cvDestroyWindow("HelloWorld"); // �ΨӾP���@�ӵ���
    cvReleaseImage(&image); // ����IplImage��Ƶ��c
    return EXIT_SUCCESS;
}

