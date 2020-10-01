#ifndef TURTLE_CONTEXT_H
#define TURTLE_CONTEXT_H

#include "bitmap.h"
#include "pen.h"

namespace turtle {
class Context {
 public:
  Pen* make_pen();
  void draw(const Pen* p, const char* filename, int width, int height);
};

}  // namespace turtle

#endif  //! TURTLE_CONTEXT_H