#include "graphics.h"
#include "picture.hpp"

void house(){
	setfillstyle(SOLID_FILL, BROWN);
	bar(0,200, 50, 150);
	setfillstyle(SOLID_FILL, LIGHTGRAY);
	bar(10,150, 20, 100);
	bar(7,100, 23, 90);
	setfillstyle(SOLID_FILL, RED);
	int polypoints[] = {0, 150, 50, 150, 25, 100};
	fillpoly(3, polypoints);
}