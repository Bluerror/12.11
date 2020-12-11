#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main()
{
	uchar lutsize[256];
	cv::Mat src = imread("C://Users//Lenovo//source//repos//12.11//1.jpg", 0);
	float Gamma = 1 / 4.7;
	int height = src.rows;
	int width = src.cols;
	for (int i = 0; i < 255; i++)
	{
		lutsize[i] = saturate_cast<uchar>(pow((float)(i / 255.0), Gamma) * 255.0);

	}
	for (int j = 0; j < height; j++)
	{
		for (int i = 0; i < width; i++)
		{
			src.at<uchar>(j, i) = lutsize[src.at<uchar>(j, i)];
		}
	}


cv:imshow("final", src);
	waitKey();
}

