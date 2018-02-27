#include "turtle.h"

int main()
{
    Turtle tree([](Turtle*turtle){
        turtle->Forward(100);
        turtle->Rotate(100);
    });
}
