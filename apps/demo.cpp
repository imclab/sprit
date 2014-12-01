#include <stdlib.h>
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <sprit/sprit.h>

int main(int agrc, char * argv[])
{
    std::cout << "Hello, World!" << std::endl;

    // Load the images
    cv::Mat img1 = cv::imread("/home/engelmann/Programming/sprit/data/training/000000_0.JPG");
    cv::Mat img2 = cv::imread("/home/engelmann/Programming/sprit/data/training/000000_1.JPG");
    //cv::imshow("img1",img1);
    //cv::imshow("img2",img2);

    // Process the images
    sprit::processImage(img1);
    cv::imshow("img1p",img1);
    sprit::processImage(img2);
    cv::imshow("img2p",img2);
    cv::waitKey(0);
    return 0;
}
