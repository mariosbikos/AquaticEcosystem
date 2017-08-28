#pragma once
#include <iostream>
#include <vector>
class Organism;

class Ocean
{
public:
	
	Ocean(int x=25,int y=25);

	static int MAX_SIZE_X;
	static int MAX_SIZE_Y;

	std::vector<Organism*> organisms;

};