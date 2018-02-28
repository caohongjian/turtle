#ifndef _TURTLE_TURTLE_H_
#define _TURTLE_TURTLE_H_

#include <functional>
#include "math.h"

class ITurtle{
public:
	//设置起点
	virtual void SetBeginning(Float2 beginning) = 0;
	//设置前进方向
	virtual void SetDirection(Float2 direction) = 0;
	//向前走
	virtual void Forward(float length) = 0;
	//逆时针旋转
    virtual void Rotate(float angle) = 0;
};

void TurtlePaint(const char*file,int width,int height,
	const std::function<void(ITurtle*turtle)>&runp);

#endif

