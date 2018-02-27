#include "bitmap.h"

class Bitmap :public IBitmap{
public:
	Bitmap(int width, int height);
	int GetWidth()override;
	int GetHeight()override;
	void SetPixel(int x, int y, float rgba[4])override;
	void SaveAsFile(const char*file)override;
};

IBitmap*IBitmap::New(int width,int height){
	return new Bitmap(width, height);
}

Bitmap::Bitmap(int width, int height){
}

int Bitmap::GetWidth() {
	return 0;
}

int Bitmap::GetHeight() {
	return 0;
}

void Bitmap::SetPixel(int x, int y, float rgba[4]) {

}

void Bitmap::SaveAsFile(const char * file)
{
}
