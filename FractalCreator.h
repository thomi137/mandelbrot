//
// Created by Thomas Prosser on 19.11.19.
//

#ifndef MANDELBROT_FRACTALCREATOR_H
#define MANDELBROT_FRACTALCREATOR_H

#include <string>
#include "Zoom.h"
#include "Bitmap.h"
#include "ZoomList.h"

using namespace std;

namespace thomit {

    class FractalCreator {
    private:
        int m_width;
        int m_height;
        unique_ptr<int[]> m_histogram;
        unique_ptr<int[]> m_fractal;
        Bitmap m_bitmap;
        ZoomList m_zoomList;
        int m_total{0};


    public:
        FractalCreator(int width, int height);
        virtual ~FractalCreator();
        void run(string fileName);

    private:
        void calculateIteration();
        void calculateTotalIterations();
        void drawFractal();
        void addZoom(const Zoom& zoom);
        void writeBitmap(string fileName);
    };

}


#endif //MANDELBROT_FRACTALCREATOR_H
