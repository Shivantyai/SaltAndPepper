all:
	g++  -std=c++11 -I./source ./source/filters/IFilter.h ./source/filters/SaltAndPepperFilter.h ./source/filters/SaltAndPepperFilter.cpp ./source/SaltAndPepperRunner.h ./source/SaltAndPepperRunner.cpp  ./source/main.cpp -lopencv_core -lopencv_imgproc -lopencv_highgui -o bin/SaltAndPepper

	
