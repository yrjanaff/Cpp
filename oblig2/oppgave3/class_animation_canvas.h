#ifndef CLASS_ANIMATION_CANVAS_H
#define CLASS_ANIMATION_CANVAS_H
#include <FL/Fl.H>
#include <vector>
#include <FL/Fl_Box.H>

//Local includes
#include "class_dot.h"
class animation_canvas : public Fl_Box {
  std::vector<animated*> parts;
  static int fps;
  
 public:
  animation_canvas(const char *l,int w, int h);
  static void timer(void* canvas);
  void add(animated* part);
  virtual ~animation_canvas();
 protected: 
  void draw () override;
};
#endif
