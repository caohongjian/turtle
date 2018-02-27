#ifndef _TURTLE_TURTLE_H_
#define _TURTLE_TURTLE_H_

#include <functional>

class ITurtle{
public:
	//向前走
	virtual void Forward(float length) = 0;
	//旋转
    virtual void Rotate(float angle) = 0;
};

void TurtlePaint(const char*file,int width,int height,
	const std::function<void(ITurtle*turtle)>&runp);

#endif

