#ifndef IFILTER_H
#define IFILTER_H

#include <opencv2/core/core.hpp>

class IFilter
{
public:
    virtual cv::Mat filter(const cv::Mat& image) = 0;
    virtual ~IFilter(){}
};

#endif // IFILTER_H
