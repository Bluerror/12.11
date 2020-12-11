//#include <opencv2/opencv.hpp>
//using namespace cv;
//int main()
//{
//	cv::Mat scr_color = imread("C://Users//Lenovo//source//repos//12.11//0.jpg");
//	cv::Mat dst;
//	cv::imshow("original Mat", scr_color);
//	std::vector<cv::Mat> channels;
//	cv::split(scr_color, channels);
//	cv::Mat B = channels.at(0);
//	cv::Mat G = channels.at(1);
//	cv::Mat R = channels.at(2);
//	equalizeHist(B, B);
//	equalizeHist(G, G);
//	equalizeHist(R, R);
//	merge(channels, dst);
//	cv::imshow("original Mat",dst);
//	waitKey(0);
//	return 0;
//
//}