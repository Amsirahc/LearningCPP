// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" // Always include this, as it is the precompiled header for Visual Studio.

#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Your name is: " + name << std::endl;
	return 0;
}