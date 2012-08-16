#pragma once

#include "FaceDetector.h"
#include <cv.h>
#include <highgui.h>
#include <cxcore.h>

using namespace cv;

class cFaceDetector;

class cFaceCameraDetect : public cFaceDetector {
public:
    cFaceCameraDetect();
    cFaceCameraDetect(const cFaceCameraDetect& orig);
    virtual ~cFaceCameraDetect();
    bool InitCamera();
    bool CameraOn();
private:
        VideoCapture _capture;
        
};