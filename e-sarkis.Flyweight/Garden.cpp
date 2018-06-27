#include "Garden.h"

Garden::Garden()
	:	_rosePlant("Rose",		1,	'R'),
		_violetPlant("Violet",	1,	'V'),
		_grassPlant("Grass",		0,	'#')
{
	generateGarden();
}

Garden::~Garden()
{}

void Garden::generateGarden()
{
	// Plant grass into plots
	for (int x = 0; x < SIZE; x++)
	{
		for (int y = 0; y < SIZE; y++)
		{
			// Chance of flowers
			int random = std::rand() % 3;
			if (random == 0)
			{
				_plots[x][y] = &_rosePlant;
			}
			else if (random == 1)
			{
				_plots[x][y] = &_violetPlant;
			}
			else
			{
				_plots[x][y] = &_grassPlant;
			}
		}
	}
}

std::string Garden::toString()
{
	std::stringstream result;
	for (int x = 0; x < SIZE; x++)
	{
		result << x << " ";
		for (int y = 0; y < SIZE; y++)
		{
			result << _plots[x][y]->getSprite();
		}
		result << "\n";
	}
	result << "\n  ";
	for (int x = 0; x < SIZE; x++)
	{
		result << x;
	}

	return result.str();
}

std::string Garden::getPlotInfo(int p_x, int p_y)
{
	std::stringstream result;

	// Report invalid range
	if (p_x > SIZE || p_y > SIZE || p_x < 0 || p_y < 0)
	{
		result << "Out of range.\n";
		return result.str();
	}

	result << "Plot Index [" << p_x << ", " << p_y << "]\n";
	result << "Species Name: \"" << _plots[p_x][p_y]->getSpeciesName() << "\"\n";
	result << "Water " << _plots[p_x][p_y]->getWateringFrequency() << " times per week.\n";

	return result.str();
}