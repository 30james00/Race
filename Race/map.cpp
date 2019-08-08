#include "map.h"

map::map()
{
	size_x = 512;
	size_y = 512;
	srand(time(NULL));
	gat = new gate(rand() % 500);
}

gate::gate(int a) :x1(a), y1(a), x2(a + 5), y2(a + 5)
{
}
