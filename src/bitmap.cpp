#include "bitmap.h"

#include <cstdint>

class Bitmap : public IBitmap {
 public:
  Bitmap(int width, int height);
  int GetWidth() override;
  int GetHeight() override;
  void Clear(const float rgb[3]) override;
  void SetPixel(int row, int col, const float rgb[3]) override;
  void SaveAsFile(const char* file) override;
  void Destroy() override;

 private:
  const int m_width;
  const int m_height;
  uint8_t* m_data;
};

IBitmap* IBitmap::Create(int width, int height) {
  return new Bitmap(width, height);
}

Bitmap::Bitmap(int width, int height)
    : m_width{width}, m_height{height}, m_data{nullptr} {
  m_data = new uint8_t[m_width * m_height * 3];
}

int Bitmap::GetWidth() { return m_width; }

int Bitmap::GetHeight() { return m_height; }

void Bitmap::Clear(const float rgb[3]) {
  for (int row = 0; row < m_height; ++row)
    for (int col = 0; col < m_width; ++col) {
      SetPixel(row, col, rgb);
    }
}

void Bitmap::SetPixel(int row, int col, const float rgb[3]) {
  uint8_t* data = &m_data[row * m_width * 3 + col * 3];
  data[0] = static_cast<uint8_t>(rgb[0] * 255.f);
  data[1] = static_cast<uint8_t>(rgb[1] * 255.f);
  data[2] = static_cast<uint8_t>(rgb[2] * 255.f);
}

void Bitmap::SaveAsFile(const char* file) {}

void Bitmap::Destroy() {
  delete[] m_data;
  delete this;
}
