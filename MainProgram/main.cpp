// CMakeProject1.cpp : Defines the entry point for the application.
//


#include <iostream>
#include "../Lib/LibSomething.h"
int main()
{

   const LibSomething::LibSomethingMain libObject;

	std::cout << "Hello I am a program that uses: " << libObject.GetName() << std::endl;

	return 0;
}
