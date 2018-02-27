#include "turtle.h"

int main()
{
    TurtlePaint("test.bmp",64,64,[](ITurtle*turtle){
        turtle->Forward(10);
        turtle->Rotate(90);
    });
}
