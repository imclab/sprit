#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

namespace sprit
{

void processImage(cv::Mat &image)
{
  cv::cvtColor(image, image, CV_BGR2GRAY);
  cv::Mat laplacion, gaussian;
  cv::GaussianBlur(image, gaussian, cv::Size(15,15), 9);
  int tImage = image.type();
  int tLaplacian = laplacion.type();
  int tGaussian = gaussian.type();
  image = image - gaussian;// + laplacion;
  //cv::Laplacian(image, image, CV_8U, 15);
  return;
}

}
