//
// Created by Thomas Prosser on 19.11.19.
//

#ifndef MANDELBROT_RGB_H
#define MANDELBROT_RGB_H

namespace thomit {

    struct RGB {
        double r;
        double g;
        double b;
        RGB(double r, double g, double b);
    };

    RGB operator-(const RGB& first, const RGB& second);
}


#endif //MANDELBROT_RGB_H
