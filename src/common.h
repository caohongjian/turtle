#ifndef TURTLE_COMMON_H
#define TURTLE_COMMON_H

#include <string>
#include <vector>

namespace turtle {
struct Vec2f {
  float x, y;
  Vec2f() : x(0), y(0) {}
  Vec2f(float _x, float _y) : x(_x), y(_y) {}

  Vec2f operator+(const Vec2f& v) const { return Vec2f(x + v.x, y + v.y); }
  Vec2f operator-(const Vec2f& v) const { return Vec2f(x - v.x, y - v.y); }

  std::string to_string() const;
};

struct Vec3f {
  float x, y, z;
  Vec3f() : x(0), y(0), z(0) {}
  Vec3f(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

  std::string to_string() const;
};

struct Color4f {
  float r, g, b, a;
};

}  // namespace turtle

#endif  // !TURTLE_COMMON_H