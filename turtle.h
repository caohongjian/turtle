#ifndef _TURTLE_TURTLE_H_
#define _TURTLE_TURTLE_H_

#include <functional>
#include <list>

class ITurtle{
    void Forward(float length);//向前走
    void Rotate(float angle);//旋转
};

void TurtlePaint(const char*file,int width,int height,
std::functional<void(Turtle*turtle)>&runp);

#endif

