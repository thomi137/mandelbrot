//
// Created by Thomas Prosser on 19.11.19.
//

#ifndef MANDELBROT_MANDELBROT_H
#define MANDELBROT_MANDELBROT_H

namespace thomit {

    class Mandelbrot {
    public:
        static const int MAX_ITERATIONS = 10000;
    public:
        Mandelbrot();
        virtual ~Mandelbrot();
        static int getIterations(double x, double y);
    };

}



#endif //MANDELBROT_MANDELBROT_H
