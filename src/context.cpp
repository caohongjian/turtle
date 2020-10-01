#include "context.h"

namespace turtle {
Pen* Context::make_pen() { return new Pen; }

void Context::draw(const Pen* pen, const char* filename, int width,
                   int height) {
  const auto& cmd_list = pen->draw_command_list();

  size_t buf_len = width * height * 3;
  uint8_t* buf = new uint8_t[buf_len];

  for (const auto& cmd : cmd_list.commands) {
    // draw triangle
  }

  delete[] buf;
}
}  // namespace turtle
