#include "turtle.h"
#include "bitmap.h"
#include "rasterizer.h"

class Turtle:public ITurtle
{
public:

};
void TurtlePaint(const char * file, int width, int height, 
	const std::function<void(ITurtle*turtle)>& exec)
{
	exec(nullptr);
}

