bin_PROGRAMS = test

test_SOURCES = test.cpp ../src/FaceCameraDetect.h ../src/FaceCameraDetect.cpp ../src/FaceDetector.h ../src/FaceDetector.cpp

test_CXXFLAGS = @OPENCV_CFLAGS@ -Wall -pthread
test_LDADD = @OPENCV_LIBS@ -lm -lgtest_main -lgtest -lboost_system -lboost_filesystem
