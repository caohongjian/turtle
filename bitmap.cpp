#include "bitmap.h"

class Bitmap :public IBitmap{
public:
	Bitmap(int width, int height);
	int GetWidth()override;
	int GetHeight()override;
	void SetPixel(int x, int y, float rgba[4])override;
	void SaveAsFile(const char*file)override;
private:
	const int m_width;
	const int m_height;
};

IBitmap*IBitmap::New(int width,int height){
	return new Bitmap(width, height);
}

Bitmap::Bitmap(int width, int height)
	:m_width{ width }, m_height{ height } {
}

int Bitmap::GetWidth() {
	return m_width;
}

int Bitmap::GetHeight() {
	return m_height;
}

void Bitmap::SetPixel(int x, int y, float rgba[4]) {

}

void Bitmap::SaveAsFile(const char * file){
}
