#include "context.h"

#include "bitmap.h"

namespace turtle {
Pen* Context::make_pen() { return new Pen; }

void Context::draw(const Pen* pen, const char* filename, int width,
                   int height) {
  const auto& cmd_list = pen->draw_command_list();

  Bitmap<Vec3f> bitmap;
  for (const auto& cmd : cmd_list.commands) {
    // draw triangle
  }

  save_bitmap(bitmap, filename);
}
}  // namespace turtle
