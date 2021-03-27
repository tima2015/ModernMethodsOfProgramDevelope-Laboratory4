#include "graphics.h"
#include "picture.hpp"

void fence(){
  setfillstyle(SOLID_FILL, BROWN);
  bar(150, 555, 800, 540);
  for(int x = 170; x <= 800; x += 40)
     bar(x, 520, x + 20, 600);
}
