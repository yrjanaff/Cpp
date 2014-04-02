#ifndef CLASS_HAS_COLOR_H
#define CLASS_HAS_COLOR_H

#include <FL/Fl.H>

class has_color{
  virtual void draw()=0;
protected:
  unsigned int color=FL_WHITE;
  unsigned char* red;
  unsigned char* green;
  unsigned char* blue; 
  has_color();
};

#endif
