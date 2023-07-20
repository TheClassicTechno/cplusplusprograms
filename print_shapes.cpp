#include <iostream>

int main() {
    //rectangle
    int width = 10;
    int height = 5;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    //right triangle
    int tw = 10;
    //int th = 5;
    

    for (int i = 0; i < tw; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
        //j--;
    }

    //backwards right triangle
    int btw = 10;
    //int th = 5;
    

    for (int i = btw; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            std::cout << "; ";
        }
        std::cout << "\n";
        //j--;
    }
    return 0;
}
