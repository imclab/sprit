#include <stdlib.h>
#include <iostream>
#include <opencv2/highgui/highgui.hpp>

int main(int agrc, char * argv[])
{
    std::cout << "Hello, World!" << std::endl;

    cv::Mat img = cv::imread("/home/engelmann/Programming/sprit/data/training/000000_0.JPG");
    cv::imshow("First image",img);
    cv::Mat img2 = cv::imread("/home/engelmann/Programming/sprit/data/training/000000_1.JPG");
    cv::imshow("Second image",img2);
    cv::waitKey(0);

    return 0;
}
