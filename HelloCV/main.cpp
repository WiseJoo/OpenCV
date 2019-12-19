//print hello and OpenCV version

//#include "opencv2/opencv.hpp"
//#include <iostream>

//int main()
//{
//	std::cout << "Hello OpenCV " << CV_VERSION << std::endl;
//
//	return 0;
//}

//print bmp image file on screen(not using namespace ver)
//#include "opencv2/opencv.hpp"
//#include <iostream>
//
//int main(void)
//{
//	std::cout << "Hello OpenCV " << CV_VERSION << std::endl;
//
//	cv::Mat img;
//	img = cv::imread("lenna.bmp");
//
//	if (img.empty()) {
//		std::cerr << "Image load failed!" << std::endl;
//		return -1;
//	}
//
//	cv::namedWindow("image");
//	cv::imshow("image", img);
//
//	cv::waitKey();
//	return 0;
//}

//print bmp image file on screen(using namespace ver)
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void)
{
	cout << "Hello OpenCV " << CV_VERSION << endl;

	Mat img;
	img = imread("lenna.bmp");							//load image file

	if (img.empty()) {									//check image load
		cerr << "Image load failed!" << endl;
		return -1;
	}

	namedWindow("image");								//empty space create
	imshow("image", img);								//print image on space

	waitKey();
	return 0;
}