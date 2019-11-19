#include <iostream>
#include <cstdint>
#include "Bitmap.h"
#include "Mandelbrot.h"

using namespace std;
using namespace thomit;

int main() {

    int const WIDTH = 800;
    int const HEIGHT = 680;

    Bitmap bitmap(WIDTH, HEIGHT);

    double min = 999999;
    double max = -999999;

    for(int y = 0; y < HEIGHT; y++) {
        for(int x = 0; x < WIDTH; x++){
            double xFractal = (x - WIDTH/2.0 - 200) * 2.0/HEIGHT;
            double yFractal = (y - HEIGHT/2.0) * 2.0/HEIGHT;

            int iterations = Mandelbrot::getIterations(xFractal, yFractal);

            uint8_t red = (uint8_t)(256 * (double)iterations/Mandelbrot::MAX_ITERATIONS);

            bitmap.setPixel(x, y, red, 0, 0);

            if(red  < min) min = red;
            if(red > max) max = red;

        }
    }

    cout << min << ", " << max << endl;
    bitmap.write("test.bmp");

    std::cout << "Finished." << std::endl;
    return 0;

}