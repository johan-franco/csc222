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
double Point::distance(const Point&p2) {
    double final_x = p2.get_x() - get_x();
    double final_y = p2.get_y() - get_y();
    double distance = sqrt(final_x*final_x + final_y*final_y) ;
    return distance;
}

string Point::to_string() {
    string s = "(" + ::to_string(int(get_x())) + ", "+ ::to_string(int(get_y())) + ")";
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