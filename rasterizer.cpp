#include "rasterizer.h"

class Rasterizer :public IRasterizer{
public:
	void Begin(IBitmap*target,
		Float2 center, Float2 extent)override;//��ʼ��դ��

	void End()override;//������դ��

	void DrawBeginning(Float2 beginning)override;//���
	void DrawEnding(Float2 ending)override;//�յ�
	void DrawSegment(Float2 beginning, Float2 ending)override;//ֱ��
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
