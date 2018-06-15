#include "Plant.h"



Plant::Plant(std::string p_speciesName,
			 int p_waterConsumptionRate,	
			 char p_sprite)
	:	_speciesName(p_speciesName), 
		_waterConsumptionRate(p_waterConsumptionRate),
		_sprite(p_sprite)
{}

Plant::~Plant()
{
}

