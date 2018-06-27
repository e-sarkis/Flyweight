#include "Plant.h"

Plant::Plant(std::string p_speciesName,
			 int p_waterConsumptionRate,	
			 char p_sprite)
	:	_speciesName(p_speciesName), 
		_wateringFrequency(p_waterConsumptionRate),
		_sprite(p_sprite)
{}

Plant::~Plant()
{}

int Plant::getWateringFrequency() const
{
	return _wateringFrequency;
}

std::string Plant::getSpeciesName() const
{
	return _speciesName;
}

char Plant::getSprite() const
{
	return _sprite;
}

