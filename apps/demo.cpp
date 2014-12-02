// C/C++ includes
#include <stdlib.h>
#include <iostream>

// OpenCV includes
#include <opencv2/highgui/highgui.hpp>

// Sprit includes
#include <sprit/sprit.h>

int main(int agrc, char * argv[])
{
    // Load the images
    cv::Mat img1 = cv::imread("../../sprit/data/training/000000_0.JPG");
    cv::Mat img2 = cv::imread("../../sprit/data/training/000000_1.JPG");

    // Process the images
    sprit::processImage(img1);
    sprit::processImage(img2);

    // Show the (scaled) images
    sprit::imshow("img1p",img1);
    sprit::imshow("img2p",img2);
    return 0;
}
