//
// Created by Thomas Prosser on 19.11.19.
//

#ifndef MANDELBROT_BITMAPFILEHEADER_H
#define MANDELBROT_BITMAPFILEHEADER_H

#include <cstdint>

using namespace std;

#pragma pack(2)

namespace thomit {

    struct BitmapFileHeader {
        char header[2]{'B', 'M'};
        int32_t fileSize;
        int32_t reserved{0};
        int32_t dataOffset;
    };

}


#endif //MANDELBROT_BITMAPFILEHEADER_H
