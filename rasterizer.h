#ifndef _TURTLE_RASTERIZER_H_
#define _TURTLE_RASTERIZER_H_

#include "bitmap.h"

struct Float2{
    float x,y;
};

class IRasterizer{
public:
	virtual void Begin(IBitmap*target, 
		Float2 topLeft, Float2 extent) = 0;//开始光栅化

	virtual void End() = 0;//结束光栅化

	virtual void DrawBegining(Float2 origin) = 0;//起点
	virtual void DrawEnding(Float2 dest) = 0;//终点
	virtual void DrawSegment(Float2 beginning,Float2 ending) = 0;//直线
};

#endif