#pragma once
#include "gate.h"
#include<fstream>;
#include<string>;

class map
{
private:
	float size_x, size_y;
	int curGate;
	std::fstream file;
	std::vector<gate> gates;
public:
	map();
	std::vector<gate> getLineShape();
	gate getGate(int);
	gate getCurGate();
	void nextGate();
};

