#include "rasterizer.h"

class Rasterizer : public IRasterizer {
 public:
  void Begin(IBitmap* target) override;  //开始光栅化

  void End() override;  //结束光栅化

  void DrawBeginning(Float2 beginning) override;  //起点
  void DrawEnding(Float2 ending) override;        //终点
  void DrawSegment(Segment segment) override;     //直线

 private:
  IBitmap* m_target;
};

IRasterizer* IRasterizer::Create() { return new Rasterizer(); }

void Rasterizer::Begin(IBitmap* target) { m_target = target; }

void Rasterizer::End() { m_target = nullptr; }

void Rasterizer::DrawBeginning(Float2 beginning) {}

void Rasterizer::DrawEnding(Float2 ending) {}

void Rasterizer::DrawSegment(Segment segment) {}
