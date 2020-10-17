#include <iostream>
#include <cstdlib> 
#include <stdlib.h>
#include "Controller.h"

int main() try
{
	Controller Game;
	Game.manageGame();

	return EXIT_SUCCESS;
}
catch (std::exception& e)	//handle exception
{
	std::cerr << e.what() << std::endl; //(print the error to win32 window)
	return EXIT_FAILURE;
}
//---------------------
catch (...)
{
	std::cerr << "Safety catch exception" << std::endl;
	return EXIT_FAILURE;
}