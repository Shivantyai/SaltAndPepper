#include "SaltAndPepperRunner.h"

#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <filters/SaltAndPepperFilter.h>

using namespace std;
using namespace cv;

//---------------------------------------------

SaltAndPepperRunner::SaltAndPepperRunner() :
    saltAndPepperFilter(new SaltAndPepperFilter())
{
}
//---------------------------------------------

bool SaltAndPepperRunner::run(int argc, char *argv[])
{
    if(!checkParameters(argc, argv))
    {
        return false;
    }

    //read input image
    Mat inputImage = cv::imread(argv[1]);

    if(!inputImage.data)
    {
        cout<<"Could not open or find the input image"<<endl;
        return false;
    }

    //filter input image
    Mat filteredImage = saltAndPepperFilter->filter(inputImage);

    //----------
    //Find and draw contours
    //----------
    Mat filteredImageGray;
    cvtColor(filteredImage, filteredImageGray, CV_BGR2GRAY);

    vector<vector<Point> > contours;
    cv::findContours(filteredImageGray, contours,
                     CV_RETR_CCOMP, CV_CHAIN_APPROX_SIMPLE);
    for(uint i = 0; i < contours.size(); ++i)
        drawContours(filteredImage, contours, i, Scalar(255, 0, 0), 2);
    //----------

    if(!imwrite(argv[2], filteredImage))
    {
        cout<<"Could not save to the output file"<<endl;
        return false;
    }

    return true;
}
//---------------------------------------------

bool SaltAndPepperRunner::checkParameters(int argc, char *argv[])
{
    bool result = false;

    if(argc >= 3)
    {
        result = true;
    }

    //unused parameter
    (void)(argv);

    return result;
}
//---------------------------------------------
