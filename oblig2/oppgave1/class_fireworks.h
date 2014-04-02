#ifndef CLASS_FIREWORKS_H
#define CLASS_FIREWORKS_H

//Local includes
#include "class_animation_canvas.h"


class fireworks: public animation_canvas  {
  int rocketcount;

 public:
  fireworks(const char* title,int w, int h, int _rocketcount);
  ~fireworks() override;
};


#endif
