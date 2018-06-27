#pragma once

#include <stdlib.h> // For random number generation
#include <sstream>

#include "Plant.h"

#define SIZE 5

class Garden
{
public:
	Garden();
	~Garden();

	void generateGarden();

	std::string toString();
	std::string getPlotInfo(int, int);

private:
	Plant* _plots[SIZE][SIZE];

	Plant _rosePlant;
	Plant _violetPlant;
	Plant _grassPlant;
};