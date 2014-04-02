#include "class_rocket.h"
#include <iostream>

using namespace std;

rocket::rocket(int _dotcount,int dotsize, int _fuse, int x, int y):dotcount(_dotcount),fuse(_fuse){
  for(int i = 0; i < dotcount; i++)     
      dots.push_back(dot(x,y,dotsize));
}

rocket::~rocket(){}

void rocket::draw(){}

void rocket::clear(){
  for(int i = 0; i < dotcount; i++){
     dots.at(i).clear();
  }
}

void rocket::reset(){
  for(int i = 0; i < dotcount; i++){
    dots.at(i).reset();
  }
}

void rocket::operator++(){
  if(fuse == 0){
    for(int i = 0; i < dotcount; i++){
      ++dots.at(i);
    }
  }
  else
    fuse--;
}
