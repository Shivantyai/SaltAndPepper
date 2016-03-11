#include <iostream>
#include <SaltAndPepperRunner.h>

using namespace std;
//--------------------------------------

void printHelp()
{
    cout<<"Run example: ./SaltAndPepper inputImage outputImage"<<endl;
}
//--------------------------------------

int main(int argc, char *argv[])
{
    SaltAndPepperRunner saltAndPepperRunner;

    if(!saltAndPepperRunner.run(argc, argv))
    {
        printHelp();
    }

    return 0;
}
