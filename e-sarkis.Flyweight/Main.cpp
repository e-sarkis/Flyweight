#include <time.h>		// For random seed initialization
#include <Windows.h>	// For key state check
#include <iostream>		

#include "Garden.h"

void main()
{
	time_t seed = time(NULL);
	std::srand(seed); // initialize random seed

	Garden garden;

	int x, y;
	while (true)
	{
		system("cls");
		// Draw GUI
		std::cout << "Seed: " << seed << "\n";
		std::cout << "\n" << garden.toString() << "\n";
		std::cout << "\nTo query a plot:\n 1) Input X and Y coordinates of plot\n 2) Press ENTER";
		std::cout << "\n\nPlot:";
		// Obtain user input
		std::cout << "\nX - ";
		std::cin >> x;
		std::cout << "Y - ";
		std::cin >> y;
		// Draw plot info
		std::cout << "\n" << garden.getPlotInfo(x, y);
		system("pause");
	} 

	return;
}