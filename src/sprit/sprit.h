#include <opencv2/highgui/highgui.hpp>

namespace sprit
{

/**
 * @brief A quick functions that does already some foo
 * @param[in/out] image: the image to be processed
 */
void processImage(cv::Mat &image);

/**
 * @brief Like cv::imshow but scales the image down
 * @param[in] windowTitle: the title of the window
 * @param[in] image: the image to be displayed
 */
void imshow(const std::string windowTitle, cv::Mat image, float scaling=0.5);

}
