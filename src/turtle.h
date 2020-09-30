#ifndef _TURTLE_TURTLE_H_
#define _TURTLE_TURTLE_H_

#include <list>

#include "math.h"

class ITurtle {
 public:
  typedef std::list<Segment> Path;
  static ITurtle* Create();
  //设置起点
  virtual void SetBeginning(Float2 beginning) = 0;
  //设置前进方向
  virtual void SetDirection(Float2 direction) = 0;

  virtual const Float2& Beginning() = 0;
  virtual const Float2& Ending() = 0;
  virtual const Path& Path() = 0;
  //向前走
  virtual void Forward(float length) = 0;
  //逆时针旋转
  virtual void Rotate(float angle) = 0;
  virtual void Destroy() = 0;
};

#endif
