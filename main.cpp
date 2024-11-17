#include <iostream>
#include <iomanip>
#include "Point.hpp"

int main() {
    Point p1(3.2, 9.8), p2(5.5, -1.2);

    std::cout << "p1 - p2 is " << std::fixed << std::setprecision(3) << (p1 - p2) << std::endl;

    
    std::cout << "p1 == p2 is " << (p1 == p2) << " " << (p1 == p2 ? "true" : "false") << std::endl;

   
    std::cout << "p1 != p2 is " << (p1 != p2) << " " << (p1 != p2 ? "true" : "false") << std::endl;

    Point midpoint = p1 / p2;
    std::cout << "p1 / p2 is ";
    midpoint.print();
    std::cout << std::endl;

    return 0;
}

