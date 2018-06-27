#include <time.h>		// For random seed initialization
#include <Windows.h>	// For key state check
#include <iostream>		

#include "Garden.h"

void main()
{
	std::srand(time(NULL)); // initialize random seed

	Garden garden;

	std::cout << "\n" << garden.toString() << "\n";
	std::cout << "\nTo obtain watering info of a plot:\n 1) Input X and Y coordinates separated by a single space\n 2) Press ENTER";
	std::cout << "\n\nTo quit:\n 1)Press ESC";

	int x, y;
	while (true)
	{
		std::cout << "\n\nPlot: ";

		// Obtain user input
		std::cin >> x;
		std::cin >> y;

		// Show plot info
		std::cout << "\n" << garden.getPlotInfo(x, y);
	}

	return;
}