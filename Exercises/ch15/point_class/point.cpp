#include "Point.h"

Point::Point() {
    x = 0; y = 0;
}
Point::Point(double cordx,double cordy) {
    x = cordx; y = cordy; 
}
double Point::get_x() const {

    return x;
}
double Point::get_y() const {
    return y;
}
double Point::get_dist() {
    return dist;
}
void Point::calc_dist(){
    dist = sqrt(x * x + y * y);
}
string Point::to_string() {
    string s = "(" + ::to_string(get_x()) + ", "+ ::to_string(get_y()) + ")";
    return s;
}

Point Point::operator + (const Point& p) {
    return Point(x + p.x, y + p.y);
}
Point Point::operator - (const Point& p) {
    return Point(x - p.x, y - p.y);
}
Point operator * (int i, const Point& p) {
    return(Point(p.get_x() * i, p.get_y() * i));
}


ostream &operator<<(ostream& os,  const Point& point)
{
    os << "The point coordinates are (" << point.x<< " , " << point.y <<')';
    return os;
}