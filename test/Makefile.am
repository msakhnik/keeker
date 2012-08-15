bin_PROGRAMS = test

test_SOURCES = test.cpp

test_CXXFLAGS = @OPENCV_CFLAGS@ -Wall -pthread
test_LDADD = @OPENCV_LIBS@ -lm -lgtest_main -lgtest -lboost_system -lboost_filesystem
