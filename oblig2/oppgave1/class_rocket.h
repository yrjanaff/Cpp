#ifndef CLASS_ROCKET_H
#define CLASS_ROCKET_H

#include <vector>
#include <FL/Fl_Box.H>

//Local includes
#include "class_dot.h"

class rocket : public animated{
  int dotcount;
  int fuse;
  std::vector<dot> dots;

  void draw () override;
  void clear() override;
  void reset() override;
  void operator++() override;
 public:
  rocket(int _dotcount,int dotsize, int _fuse, int x, int y);  
  ~rocket() override;
};

#endif
