#include <FL/Fl.H> 
#include <FL/fl_draw.H>
//Local includes
#include "class_custom.h"

int main(){
  Fl_Window *window = new Fl_Window(800,600,"Fireworks");
  custom *buzz = new custom("Hei", window->w(), window->h(), 20);
  window->resizable(buzz);
  window->end();
  window->color(FL_BLACK);
  window->show();
  Fl::run();
  delete buzz;
  return 0;
}
