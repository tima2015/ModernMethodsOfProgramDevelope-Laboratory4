#include "graphics.h"
#include "picture.hpp"

void sun(){
setfillstyle(SOLID_FILL, YELLOW);
fillellipse(25, 25, 5, 5);
setcolor(YELLOW);
line(0,25, 50, 25);
line(25,0, 25, 50);
line(0,0, 50, 50);
line(0,50, 50, 0);
} 
