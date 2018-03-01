#ifndef _TURTLE_RASTERIZER_H_
#define _TURTLE_RASTERIZER_H_

#include "math.h"
#include "bitmap.h"
class IRasterizer{
public:
	//
	static IRasterizer*Create();
	//开始光栅化
	virtual void Begin(IBitmap*target) = 0;
	//结束光栅化
	virtual void End() = 0;
	//画起点	   
	virtual void DrawBeginning(Float2 beginning) = 0;
	//画终点										 
	virtual void DrawEnding(Float2 ending) = 0;
	//画线段
	virtual void DrawSegment(Float2 beginning,
		Float2 ending) = 0;
};


#endif