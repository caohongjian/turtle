#ifndef _TURTLE_MATH_H_
#define _TURTLE_MATH_H_
struct Float2 {
public:
	static Float2 Normalize(const Float2&v);
	Float2() = default;
	Float2(float x, float y);
	Float2 operator+(const Float2&other)const noexcept;
	Float2 operator*(float other)const noexcept;
	float x, y;
};

struct Segment{
	Float2 beginning;
	Float2 ending;
};

struct Mat3x3 {
public:
	static Mat3x3 Translate(Float2 translation);
	static Mat3x3 Rotate(float angle);
	static Mat3x3 Scale(Float2 scaling);
};

Float2 Normalize(const Float2&v);

#endif
