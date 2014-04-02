#include <FL/Fl.H>
#include <FL/fl_draw.H>
//Local includes
#include "class_fireworks.h"

int main(){
  Fl_Window *window = new Fl_Window(800,600,"Fireworks");
  fireworks *fire = new fireworks(" ", 800, 600, 10);
  window->end();
  window->color(FL_BLACK);
  window->show();
  Fl::run();
  delete fire;
  return 0;
}
