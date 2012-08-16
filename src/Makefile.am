bin_PROGRAMS = keeker

keeker_SOURCES = main.cpp Form.h Form.cpp

keeker_CXXFLAGS = @OPENCV_CFLAGS@ -Wall -g $(GTKMM_CFLAGS)
keeker_LDADD = @OPENCV_LIBS@ -lm $(GTKMM_LIBS) -lboost_system -lboost_thread -lboost_filesystem
