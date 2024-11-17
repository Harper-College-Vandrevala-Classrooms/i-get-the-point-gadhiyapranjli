#include "Point.hpp"
#include <cmath>
#include <iostream>
#include <iomanip>

Point::Point(double x, double y) : x(x), y(y) {}

double Point::operator-(const Point& other) const {
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
}

bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}

bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

Point Point::operator/(const Point& other) const {
    return Point((x + other.x) / 2, (y + other.y) / 2);
}

void Point::print() const {
    std::cout << "(" << std::fixed << std::setprecision(2) << x 
              << ", " << y << ")";
}
