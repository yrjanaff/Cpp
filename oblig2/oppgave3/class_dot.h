#ifndef CLASS_DOT_H
#define CLASS_DOT_H
#include <math.h>
//Local includes
#include "class_animated.h"
const double TAU=M_PI*2;
class dot : public animated{
  double r;
  double x;
  double y;
  double x_orig;
  double y_orig;
  float speed;
  float direction;
  int color;
  void draw() override;
 public:
  dot(float _x,float _y);  
  ~dot() override;
  void clear() override;
  void operator++() override;
  void reset() override;
};

#endif
