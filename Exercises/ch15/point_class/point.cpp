#include "point.hpp"

Point::Point() {
    x = 0; y = 0;
}
Point::Point(double cordx,double cordy) {
    x = cordx; y = cordy; 
}
double Point::get_x() {
    return x;
}
double Point::get_y() {
    return y;
}

string Point::tostring() {
    string s = "(" + to_string(get_x()) + ","+ to_string(get_y()) + ")";
    return s;
}

Point Point::operator + (const Point& p) {
    return Point(x + p.x, y + p.y);
}
Point Point::operator - (const Point& p) {
    return Point(x - p.x, y - p.y);
}

ostream &operator<<(ostream& os,  const Point& point)
{
    os << "The point coordinates are (" << point.x<< " , " << point.y <<')';
    return os;
}