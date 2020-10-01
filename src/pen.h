#ifndef TURTLE_PEN_H
#define TURTLE_PEN_H

#include <list>

#include "common.h"

namespace turtle {
struct DrawCommandList {
  struct Command {
    uint32_t first_vertex = 0;
    uint32_t first_index = 0;
    uint32_t index_count = 0;
  };
  struct Vertex {
    Vec2f position;
    Color4f color;
  };

  std::vector<Vertex> vertices;
  std::vector<uint32_t> indices;
  std::vector<Command> commands;
};

class Pen {
 public:
  void move_to(float x, float y);

  void line_to(float x, float y, float stroke_width = 1.0f);

  const DrawCommandList& draw_command_list() const {
    return draw_command_list_;
  }

 private:
  DrawCommandList draw_command_list_;
};
}  // namespace turtle

#endif  // !TURTLE_PEN_H
