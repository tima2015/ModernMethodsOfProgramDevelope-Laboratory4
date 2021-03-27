#include "graphics.h"
#include "picture.hpp"

void fence(){
  setfillstyle(SOLID_FILL, BROWN);
  bar(50,190, 200, 185);
  for(int x = 55; x <= 200; x += 10)
  bar(x, 200, x + 5, 180);
}
