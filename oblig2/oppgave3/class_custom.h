#ifndef CLASS_CUSTOM_H
#define CLASS_CUSTOM_H

//Local includes                                                                                                                                                                
#include "class_animation_canvas.h"

class custom: public animation_canvas  {
  int sirclecount;
 public:
  custom(const char* title,int w, int h, int _sirclecount);
  ~custom() override;
};


#endif

