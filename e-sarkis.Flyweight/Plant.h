#pragma once
#include <string>

class Plant
{
public:
	Plant(std::string, int, char);
	~Plant();

	int getWateringFrequency() const;
	std::string getSpeciesName() const;
	char getSprite() const;

private:
	int _wateringFrequency;

	std::string _speciesName;

	char _sprite;
};

