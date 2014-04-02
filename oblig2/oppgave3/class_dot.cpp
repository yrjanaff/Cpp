#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include "class_dot.h"
#include <random>
#include <stdlib.h>

using namespace std;
int cnt;
dot::dot(float _x, float _y):x(_x), y(_y){
  r = 30;
  x_orig = x;
  y_orig = y;
  speed = (rand() % 15) + 1;
  direction = TAU;
  color = (rand() % 120+126);
  cnt = 0;
}

dot::~dot(){}

void dot::draw(){
  fl_color(color);
  fl_pie(x,y,r,r,0,360);
}

void dot::clear(){
  fl_color(FL_BLACK);
  fl_pie(x,y,r,r,0,360);
}

void dot::operator++(){
  clear();
  if(cnt % 10)
    direction =(rand() % 6);
  double scale_x = cos(direction);
  double scale_y = sin(direction);
  x = x + (speed*scale_x);
  y = y + (speed*scale_y);
  draw();
  direction = TAU;
  cnt++;
}

void dot::reset(){
  x = x_orig;
  y = y_orig;
}
