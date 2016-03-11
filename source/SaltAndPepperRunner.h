#ifndef SALTANDPEPPERRUNNER_H
#define SALTANDPEPPERRUNNER_H

#include <filters/IFilter.h>
#include <memory>

class SaltAndPepperRunner
{
public:

    SaltAndPepperRunner();
    /**
     * @brief "Salt and pepper" filter and draw contours
     * @param argc
     * @param argv
     * @return (false == something wrong)
     */
    bool run(int argc, char* argv[]);

private:

    bool checkParameters(int argc, char *argv[]);
    std::unique_ptr<IFilter> saltAndPepperFilter;
};

#endif // SALTANDPEPPERRUNNER_H
