#ifndef POINT_HPP
#define POINT_HPP

class Point {
private:
    double x, y;

public:
    Point(double x = 0.0, double y = 0.0);

 
    double operator-(const Point& other) const;

 
    bool operator==(const Point& other) const;

    bool operator!=(const Point& other) const;

    Point operator/(const Point& other) const;

    void print() const;
};

#endif
