#include <function>

#include "bitmap.h"
#include "rasterizer.h"
#include "turtle.h"

void TurtlePaint(const char* file, int width, int height,
                 const std::function<void(ITurtle* turtle)>& exec) {
  Turtle* turtle = ITurtle::Create();
  IBitmap* bitmap = IBitmap::Create(width, height);
  IRasterizer* rasiterizer = IRasterizer::Create();

  exec(turtle);

  // evaluate bounding box of turtle path
  auto beginning = turtle->Beginning();
  auto ending = turtle->Ending();
  auto path = turtle->Path();

  rasiterizer->Begin(bitmap);
  rasiterizer->DrawBeginning(beginning);
  for (auto& segment : path) rasiterizer->DrawSegment(segment);
  rasiterizer->DrawEnding(ending);
  rasiterizer->End();

  // save bitmap to file
  bitmap->SaveAsFile(file);
}
int main() {
  TurtlePaint("test.bmp", 64, 64, [](ITurtle* turtle) {
    turtle->SetDirection(Float2{0, 1});
    turtle->SetBeginning(Float2{0, 0});
    turtle->Forward(10);
    turtle->Rotate(90);
  });
}
