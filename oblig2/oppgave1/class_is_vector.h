#ifndef CLASS_IS_VECTOR_H
#define CLASS_IS_VECTOR_H

#include <math.h>
const double TAU=M_PI*2;

class is_vector{
  virtual void draw()=0;
protected:
  float speed=0;
  float direction=0;
};


#endif
