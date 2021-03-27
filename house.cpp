#include "graphics.h"
#include "picture.hpp"

void house(){
	setfillstyle(SOLID_FILL, BROWN);
	bar(0,600, 150, 450);
	setfillstyle(SOLID_FILL, LIGHTGRAY);
	bar(30,450, 60, 300);
	bar(21,300, 69, 330);
	setcolor(RED);
	setfillstyle(SOLID_FILL, RED);
	int polypoints[] = {0, 450, 150, 450, 75, 350};
	fillpoly(3, polypoints);
}