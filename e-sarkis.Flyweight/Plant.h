#pragma once
#include <string>

class Plant
{
public:
	Plant(std::string, int, std::string);
	~Plant();
private:
	int _waterConsumptionRate;
	std::string _speciesName;
	std::string _pathToSprite;
};

