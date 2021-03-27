#include "graphics.h"
#include "picture.hpp"

void man(){
setfillstyle(SOLID_FILL, YELLOW);
setcolor(YELLOW);
fillellipse(75, 75, 3,3);
bar(74,75,76,70);
bar(70, 70, 80, 68);
line(80, 70, 78, 45);
line(70, 70, 72, 45);
bar(73, 68, 77, 50);
bar(72, 50, 74, 30);
bar(76, 50, 78, 30);
for(int x = 55; x <= 200; x += 10)
bar(x, 200, x + 5, 180);
}