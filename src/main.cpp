#include <cstdio>

#include "bitmap.h"
#include "common.h"
#include "context.h"
#include "pen.h"

int main() {
  turtle::Vec2f v1(1, 2);
  printf("v1 = %s\n", v1.to_string().c_str());

  turtle::Vec3f v2(3, 4, 5);
  printf("v2 = %s\n", v2.to_string().c_str());
}
