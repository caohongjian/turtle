#ifndef _TURTLE_TURTLE_H_
#define _TURTLE_TURTLE_H_

#include <functional>
#include <list>
#include "bitmap.h"
#include "rasterizer.h"

class Turtle{
public:
    struct Segment{
        Point begining,ending;
    };
    Turtle(std::functional<void(Turtle*)>&path);
    void Forward(float length);//向前走
    void Rotate(float angle);//旋转
private:
    std::list<Segment> m_path;//乌龟走过的路径
};

#endif

