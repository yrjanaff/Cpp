#include <iostream>
//#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include "class_dot.h"
#include <random>
#include <stdlib.h>

using namespace std;

dot::dot(float _x, float _y, float _r):x(_x), y(_y), r(_r){
  x_orig = x;
  y_orig = y;
  //Setter fart:
  speed = (rand() % 15) + 1;
  //Randomiserer direction mellom 0 og TAU:
  random_device rd;
  default_random_engine generator(rd());
  uniform_real_distribution<double> distribution(0,TAU);
  direction = distribution(generator);
  //Sette farge:
  color = (rand() % 120+126);
}

dot::~dot(){}
has_color::has_color(){}

void dot::draw(){
   color+=4; //fargen går mot svart og forsvinner
  fl_color(color);
  fl_pie(x,y,r,r,0,360);
}

void dot::clear(){
  fl_color(FL_BLACK);
  fl_pie(x,y,r,r,0,360);
}

void dot::operator++(){
  clear();
  //Regner ut ny posisjon
  double scale_x = cos(direction);
  double scale_y = sin(direction);
  x = x + (speed*scale_x);
  y = y + (speed*scale_y);
  draw();  
}

void dot::reset(){
  x = x_orig;
  y = y_orig;
}
