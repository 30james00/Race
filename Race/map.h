#pragma once
#include "gate.h"
#include<fstream>;

class map
{
private:
	float size_x, size_y;
	std::fstream file;
	std::vector<gate> gates;
public:
	map();
	std::vector<gate> getLineShape();
};

