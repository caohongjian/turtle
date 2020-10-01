#ifndef TURTLE_BITMAP_H
#define TURTLE_BITMAP_H

#include "common.h"

namespace turtle {
template <typename T>
class Bitmap {
 public:
  int at(int x, int y);
};

void save_bitmap(const Bitmap<Vec3f>& bitmap, const char* filename);
}  // namespace turtle

#endif