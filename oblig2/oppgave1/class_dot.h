#ifndef CLASS_DOT_H
#define CLASS_DOT_H

//Local includes
#include "class_is_vector.h"
#include "class_has_color.h"
#include "class_animated.h"

class dot : animated, is_vector, has_color{
  double r;
  double x;
  double y;
  double x_orig;
  double y_orig;
  void draw() override;
public:
  dot(float _x,float _y,float _r);  
  ~dot() override;
  void clear() override;
  void operator++() override;
  void reset() override;
};

#endif
