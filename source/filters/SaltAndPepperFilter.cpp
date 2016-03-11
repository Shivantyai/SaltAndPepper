#include <filters/SaltAndPepperFilter.h>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
//---------------------------------------------

SaltAndPepperFilter::SaltAndPepperFilter(){}
//---------------------------------------------

Mat SaltAndPepperFilter::filter(const Mat& image)
{
    Mat resultImage;
    medianBlur(image, resultImage, 7);
    return resultImage;
}
//---------------------------------------------
