#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <iostream>

using namespace std;
using namespace cv;

int main() {
	VideoCapture cap(0); // open the default camera
	if(!cap.isOpened())  // check if we succeeded
		return -1;

	for(;;) {
		Mat frame;
		cap >> frame; 
		imshow("webcam", frame);
		if(waitKey(30) >= 0) break;
	}
}
