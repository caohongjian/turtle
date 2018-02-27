#include "rasterizer.h"

class Rasterizer :public IRasterizer{
public:
	void Begin(IBitmap*target,
		Float2 center, Float2 extent)override;//开始光栅化

	void End()override;//结束光栅化

	void DrawBeginning(Float2 beginning)override;//起点
	void DrawEnding(Float2 ending)override;//终点
	void DrawSegment(Float2 beginning, Float2 ending)override;//直线
private:
	IBitmap * m_target;
};

IRasterizer* IRasterizer::New(){
	return new Rasterizer();
}

void Rasterizer::Begin(IBitmap * target, Float2 center, Float2 extent)
{
}

void Rasterizer::End()
{
}

void Rasterizer::DrawBeginning(Float2 beginning)
{
}

void Rasterizer::DrawEnding(Float2 ending)
{
}

void Rasterizer::DrawSegment(Float2 beginning, Float2 ending)
{
}
