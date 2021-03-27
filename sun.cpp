#include "graphics.h"
#include "picture.hpp"

void sun(){
   setfillstyle(SOLID_FILL, YELLOW);
   fillellipse(150, 150, 30, 30);
   setcolor(YELLOW);
   line(0, 150, 300, 150);
   line(150, 0, 150, 300);
   line(0, 0, 300, 300);
   line(0, 300, 300, 0);
} 
