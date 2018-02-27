#ifndef _TURTLE_BITMAP_H_
#define _TURTLE_BITMAP_H_
class IBitmap{
public:
	static IBitmap*New(int width,int height);
	virtual int GetWidth() = 0;
	virtual int GetHeight() = 0;
	virtual void SetPixel(int x,int y,float rgba[4]) = 0;
	virtual void SaveAsFile(const char*file) = 0;
};

#endif