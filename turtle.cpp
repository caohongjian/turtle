#include "turtle.h"
#include "bitmap.h"
#include "rasterizer.h"

#include <list>
#include <cmath>

struct Segment {
	Float2 beginning;
	Float2 ending;
};

class Turtle:public ITurtle
{
public:
	void SetBeginning(Float2 beginning)override;
	void SetDirection(Float2 direction)override;
	void Forward(float length)override;
	void Rotate(float angle)override;
	const Float2&Beginning() { return m_beginning; }
	const Float2&Ending() { return m_ending; }
	const std::list<Segment>&Path() { return m_path; }
private:
	Float2 m_beginning;
	Float2 m_ending;
	Float2 m_direction;
	std::list<Segment> m_path;
};

void TurtlePaint(const char * file, int width, int height, 
	const std::function<void(ITurtle*turtle)>& exec){
	Turtle*turtle = new Turtle();
	exec(turtle);

	IRasterizer*rasiterizer = IRasterizer::New();
	IBitmap*bitmap = IBitmap::New(width, height);

	//evaluate bounding box of turtle path
	auto beginning = turtle->Beginning();
	auto ending = turtle->Ending();
	auto path = turtle->Path();
	Float2 leftBottom = beginning;
	Float2 rightTop = beginning;
	for (auto&segment : path) {
		leftBottom.x = std::fminf(leftBottom.x, segment.ending.x);
		leftBottom.y = std::fminf(leftBottom.y, segment.ending.y);

		rightTop.x = std::fmaxf(rightTop.x, segment.ending.x);
		rightTop.y = std::fmaxf(rightTop.y, segment.ending.y);
	}

	//render path to bitmap
	Float2 center, extent;
	center.x = (leftBottom.x + rightTop.x) / 2;
	center.y = (leftBottom.y + rightTop.y) / 2;
	extent.x = (rightTop.x - leftBottom.x) / 2;
	extent.x = (rightTop.y - leftBottom.y) / 2;

	rasiterizer->Begin(bitmap, center, extent);
	rasiterizer->DrawBeginning(beginning);
	for (auto&segment : path)
		rasiterizer->DrawSegment(segment.beginning, segment.ending);
	rasiterizer->DrawEnding(ending);
	rasiterizer->End();
	
	//save bitmap to file
	bitmap->SaveAsFile(file);
}


void Turtle::SetBeginning(Float2 beginning) {
	m_beginning = beginning;
	m_ending = beginning;
}

void Turtle::SetDirection(Float2 direction) {
	m_direction = Float2::Normalize(direction);
}

void Turtle::Forward(float length){
	Segment segment;
	segment.beginning = m_ending;
	segment.ending = m_ending + m_direction * length;
	m_ending = segment.ending;

	m_path.push_back(segment);
}

void Turtle::Rotate(float angle){
	angle = angle * 3.1415926535f / 180.f;
	float cosAngle = std::cosf(angle);
	float sinAngle = std::sinf(angle);
	m_direction = Float2{
		m_direction.x*cosAngle + m_direction.y*sinAngle,
		m_direction.x*sinAngle - m_direction.y*cosAngle
	};
}