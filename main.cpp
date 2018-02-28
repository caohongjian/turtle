#include "turtle.h"

int main()
{
    TurtlePaint("test.bmp",64,64,[](ITurtle*turtle){
		turtle->SetDirection(Float2{ 0,1 });
		turtle->SetBeginning(Float2{ 0,0 });
        turtle->Forward(10);
        turtle->Rotate(90);
    });
}
