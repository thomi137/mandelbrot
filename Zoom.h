//
// Created by Thomas Prosser on 19.11.19.
//

#ifndef MANDELBROT_ZOOM_H
#define MANDELBROT_ZOOM_H

namespace thomit {

    struct Zoom {
        int x{0};
        int y{0};
        double scale{0.0};

        Zoom(int x, int y, double scale): x(x), y(y), scale(scale){

        };
    };

}


#endif //MANDELBROT_ZOOM_H
