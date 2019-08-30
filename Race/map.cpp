#include "map.h"

map::map()
{
	//height and width
	size_x = 512;
	size_y = 512;
	//importing gates from .txt file
	file.open("gates.txt", std::ios::in);
	if (file.good())
	{		
		int tempCor[4];
		while (!file.eof())
		{
			for (int i = 0; i < 4; i++)
			{
				file >> tempCor[i];
			}
			gates.push_back(gate(tempCor[0], tempCor[1], tempCor[2], tempCor[3]));
		}
	}
}

std::vector<gate> map::getLineShape()
{
	return gates;
}

