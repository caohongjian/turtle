#include "math.h"
#include <cmath>

Float2 Float2::Normalize(const Float2&v) {
	float length = std::sqrtf(v.x*v.x + v.y*v.y);
	return Float2{
		v.x / length,
		v.y / length
	};
}

Float2::Float2(float x_, float y_) 
	:x{ x_ }, y{ y_ } {

}

Float2 Float2::operator+(const Float2&other)const noexcept {
	return Float2{
		x + other.x,
		y + other.y
	};
}

Float2 Float2::operator*(float other)const noexcept {
	return Float2{
		x*other,
		y*other
	};
}

Float2 Normalize(const Float2&v){
	float length = std::sqrtf(v.x*v.x + v.y*v.y);
	return Float2{
		v.x / length,
		v.y / length
	};
}
