#ifndef _TURTLE_RASTERIZER_H_
#define _TURTLE_RASTERIZER_H_

#include "bitmap.h"

struct Point{
    float x,y;
};

class Rasterizer{
public:
    void BeginRaster(Bitmap*target);//开始光栅化
    void EndRaster();//结束光栅化
    void Begining(Point origin);//起点
    void Ending(Point dest);//终点
    void Segment(Point a,Point b);//画直线
private:
    Bitmap*m_target;
};

#endif