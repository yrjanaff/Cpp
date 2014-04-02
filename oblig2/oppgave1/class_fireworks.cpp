#include <iostream>
//Local includes
#include "class_fireworks.h"
#include "class_rocket.h"

fireworks::fireworks(const char* title,int w, int h, int _rocketcount):animation_canvas(title, w, h), rocketcount(_rocketcount){
  for(int i = 0; i < rocketcount; i++){
    int fuse = rand() % 50;
    int xpos = rand() % w; //Setter x til å cære innenfor window
    int ypos = rand() % h;//Samme som over
    animated *rakett = new rocket(200, 2, fuse, xpos, ypos);
    animation_canvas::add(rakett);//Legger raketten inn i animation_canvas
  } 
}
fireworks::~fireworks(){}


