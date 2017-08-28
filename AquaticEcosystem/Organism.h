#pragma once

class Organism
{

public:
	virtual ~Organism() = 0;

protected:
	float age;
	float size;
	float growthRate;

	float foodConsumptionRate;
	float foodConsumption;


};