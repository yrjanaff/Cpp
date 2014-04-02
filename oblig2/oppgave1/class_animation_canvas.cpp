#include <iostream>
#include "class_animation_canvas.h"
#include <FL/fl_draw.H>

int animation_canvas::fps = 24; //Setter oppdateringshastighet

animation_canvas::animation_canvas(const char *l,int w, int h):Fl_Box(0,0,w,h,l){
  Fl::add_timeout(1.0/fps, timer, (void*)this);
}

animation_canvas::~animation_canvas(){
  for(unsigned int i = 0; i < parts.size(); i++)
    delete parts[i];
}

void animation_canvas::draw(){
  for(animated* a : parts)
    ++(*a);
  }

void animation_canvas::timer(void* canvas){
  animation_canvas *ac = (animation_canvas*)canvas;
  ac->redraw();
  Fl::repeat_timeout(1.0/fps, timer, canvas);
}

void animation_canvas::add(animated* part){
  parts.push_back(part);
}

