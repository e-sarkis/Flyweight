#include "Plant.h"



Plant::Plant(std::string p_speciesName,
			 int p_waterConsumptionRate,	
			 std::string p_pathToSprite)
	:	_speciesName(p_speciesName), 
		_waterConsumptionRate(p_waterConsumptionRate),
		_pathToSprite(p_pathToSprite)
{}

Plant::~Plant()
{
}

