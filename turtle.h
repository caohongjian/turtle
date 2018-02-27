#ifndef _TURTLE_TURTLE_H_
#define _TURTLE_TURTLE_H_

#include <functional>
#include <list>

class ITurtle{
public:
	virtual void Forward(float length) = 0;//向前走
    virtual void Rotate(float angle) = 0;//旋转
};

void TurtlePaint(const char*file,int width,int height,
	const std::function<void(ITurtle*turtle)>&runp);

#endif

