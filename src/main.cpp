#include <cstdio>

#include "bitmap.h"
#include "common.h"
#include "context.h"
#include "pen.h"

int main() {
  turtle::Vec2f v(1, 2);
  printf("v = %s\n", v.to_string().c_str());
}
