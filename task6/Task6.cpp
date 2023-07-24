#include <iostream>
#define _USE_MATH_DEFINES // M_PI
#include <cmath>
#include Regularpolygon.h


int Regularpolygon::count = 0;

int main() {
    // �rnek kullan�m
    Regularpolygon square(4); // Kare olu�turduk
    double sideLength = 5.0;
    double area = square.area(sideLength);
    std::cout << "Kare Alan�: " << area << std::endl;

    double newSideLength = square.length(area);
    std::cout << "Yeni Kenar Uzunlu�u: " << newSideLength << std::endl;

    std::cout << "Toplam RegularPolygon Say�s�: " << Regularpolygon::getCount() << std::endl;

    return 0;
} 