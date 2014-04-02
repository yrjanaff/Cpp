#include <iostream>
#include "class_custom.h"

custom::custom(const char* title,int w, int h, int _sirclecount):animation_canvas(title, w, h), sirclecount(_sirclecount){
  for(int i = 0; i < sirclecount; i++){
    int xpos = rand() % w;
    int ypos = rand() % h;
    animated *dotter = new dot(xpos, ypos);
    animation_canvas::add(dotter);
  }
}

custom::~custom(){}
