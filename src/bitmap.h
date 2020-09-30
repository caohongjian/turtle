#ifndef _TURTLE_BITMAP_H_
#define _TURTLE_BITMAP_H_
class IBitmap {
 public:
  static IBitmap* Create(int width, int height);
  virtual int GetWidth() = 0;
  virtual int GetHeight() = 0;
  virtual void Clear(const float rgb[3]) = 0;
  virtual void SetPixel(int row, int col, const float rgb[3]) = 0;
  virtual void SaveAsFile(const char* file) = 0;
  virtual void Destroy() = 0;
};

#endif