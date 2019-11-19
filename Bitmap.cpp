//
// Created by Thomas Prosser on 19.11.19.
//

#include "Bitmap.h"

namespace thomit {

    Bitmap::Bitmap(int width, int height): m_width(width), m_height(height) {}

    bool Bitmap::write(string fileName) {
        return false;
    }

    void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {

    }

    Bitmap::~Bitmap() {}
}