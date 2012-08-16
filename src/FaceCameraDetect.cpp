#include "FaceCameraDetect.h"
#include "FaceDetector.h"

using namespace std;

cFaceCameraDetect::cFaceCameraDetect() : _capture(0)
{
}

bool cFaceCameraDetect::InitCamera()
{
//    cv::VideoCapture san_cap(0);
    if (!_capture.isOpened())
        return false;

    return true;
}

bool cFaceCameraDetect::CameraOn()
{
    int waitKeyValue = 0;
    cv::Mat san;
    _capture.read(san);
    cv::imshow("gp", san);
    SetImage(san);

    int key = cv::waitKey(waitKeyValue);
    if (key == 27)
    {
        return false;
    }
}

cFaceCameraDetect::cFaceCameraDetect(const cFaceCameraDetect& orig)
{
}

cFaceCameraDetect::~cFaceCameraDetect()
{
}

