#ifndef CLASS_ANIMATED_H
#define CLASS_ANIMATED_H

class animated {
  virtual void draw()=0;
protected:
  int t;
  bool done;
 public:
  virtual void clear()=0;
  virtual void reset()=0;
  virtual void operator++()=0;
  virtual ~animated(){};
};

#endif
