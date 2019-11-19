#include <iostream>
#include "Bitmap.h"

using namespace std;
using namespace thomit;

int main() {

    Bitmap bitmap(800, 680);
    bitmap.write("test.bmp");

    std::cout << "Finished." << std::endl;
    return 0;
}