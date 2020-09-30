#include "turtle.h"

#include <cmath>
#include <list>

struct Segment {
  Float2 beginning;
  Float2 ending;
};

class Turtle : public ITurtle {
 public:
  void SetBeginning(Float2 beginning) override;
  void SetDirection(Float2 direction) override;
  const Float2& Beginning() override;
  const Float2& Ending() override;
  const std::list<Segment>& Path() override;
  void Forward(float length) override;
  void Rotate(float angle) override;
  void Destroy() override;

 private:
  Float2 m_beginning;
  Float2 m_ending;
  Float2 m_direction;
  std::list<Segment> m_path;
};

ITurtle* ITurtle::Create() { return new Turtle(); }

void Turtle::SetBeginning(Float2 beginning) {
  m_beginning = beginning;
  m_ending = beginning;
}

void Turtle::SetDirection(Float2 direction) {
  m_direction = Normalize(direction);
}

const Float2& Turtle::Beginning() { return m_beginning; }

const Float2& Turtle::Ending() { return m_ending; }

const ITurtle::Path& Turtle::Path() { return m_path; }

void Turtle::Forward(float length) {
  Segment segment;
  segment.beginning = m_ending;
  segment.ending = m_ending + m_direction * length;
  m_ending = segment.ending;

  m_path.push_back(segment);
}

void Turtle::Rotate(float angle) {
  angle = angle * 3.1415926535f / 180.f;
  float cosAngle = cosf(angle);
  float sinAngle = sinf(angle);
  m_direction = Float2{m_direction.x * cosAngle + m_direction.y * sinAngle,
                       m_direction.x * sinAngle - m_direction.y * cosAngle};
}

void Turtle::Destroy() { delete this; }