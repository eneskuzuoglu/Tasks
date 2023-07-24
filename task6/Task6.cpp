#include <iostream>
#define _USE_MATH_DEFINES // M_PI
#include <cmath>
#include Regularpolygon.h


int Regularpolygon::count = 0;

int main() {
    // Örnek kullaným
    Regularpolygon square(4); // Kare oluþturduk
    double sideLength = 5.0;
    double area = square.area(sideLength);
    std::cout << "Kare Alaný: " << area << std::endl;

    double newSideLength = square.length(area);
    std::cout << "Yeni Kenar Uzunluðu: " << newSideLength << std::endl;

    std::cout << "Toplam RegularPolygon Sayýsý: " << Regularpolygon::getCount() << std::endl;

    return 0;
} 