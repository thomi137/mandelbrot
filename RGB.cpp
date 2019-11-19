//
// Created by Thomas Prosser on 19.11.19.
//

#include "RGB.h"

namespace thomit{

    RGB::RGB(double r, double g, double b) : r(r), g(g), b(b) {}

    RGB operator-(const RGB& first, const RGB& second){
        return RGB(
                first.r - second.r,
                first.g - second.g,
                first.b - second.b
                );
    }

}
