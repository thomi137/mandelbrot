#include <iostream>

#include "FractalCreator.h"

using namespace std;
using namespace thomit;

int main() {

    FractalCreator fractalCreator(800, 600);
    fractalCreator.run("test.bmp");

    std::cout << "Finished." << std::endl;

    return 0;
}