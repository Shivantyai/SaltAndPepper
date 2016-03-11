#ifndef SALTANDPEPPERFILTER_H
#define SALTANDPEPPERFILTER_H

#include <filters/IFilter.h>

class SaltAndPepperFilter : public IFilter
{
public:

    SaltAndPepperFilter();
    cv::Mat filter(const cv::Mat& image) override;

};

#endif // SALTANDPEPPERFILTER_H
