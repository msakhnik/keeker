#include <gtest/gtest.h>
#include <iostream>
#include <numeric>

#include "../src/FaceCameraDetect.h"
#include "../src/FaceDetector.h"

using namespace std;

cFaceCameraDetect face;

bool test_fun()
{
    return true;
}

TEST(FaceCAmeraDetect, InitCamera)
{
    ASSERT_TRUE(face.Init());
    ASSERT_TRUE(face.InitCamera());
}

TEST(FaceCAmeraDetect, FindFace)
{
    while (face.CameraOn())
    {
        ASSERT_TRUE(face.FindFace());
        while(face.InFaceArrayRange())
        {
            cv::Mat img;
            img = face.GetFaces();
            if (!img.cols) break;
            
            cvNamedWindow("face", CV_WINDOW_AUTOSIZE);
            imshow("face", img);
            cv::waitKey();
        }
    }
}