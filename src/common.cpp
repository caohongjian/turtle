#include "common.h"

#include <sstream>

namespace turtle {
std::string Vec2f::to_string() const {
  std::stringstream ss;
  ss << "[" << x << ", " << y << "]";
  return ss.str();
}

std::string Vec3f::to_string() const {
  std::stringstream ss;
  ss << "[" << x << ", " << y << ", " << z << "]";
  return ss.str();
}
}  // namespace turtle