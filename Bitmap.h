//
// Created by Thomas Prosser on 19.11.19.
//

#ifndef MANDELBROT_BITMAP_H
#define MANDELBROT_BITMAP_H

#include <string>
using namespace std;

namespace thomit {

    class Bitmap {
    private:
        int m_width{0};
        int m_height{0};
        unique_ptr<uint8_t[]> m_pPixels{nullptr};
    public:
        Bitmap(int width, int height);
        void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
        bool write(string fileName);
        virtual ~Bitmap();
    };

}

#endif //MANDELBROT_BITMAP_H
