#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;


    void increment(double secs);
    double convert_to_seconds();
    void make_time(double secs);
    void print();
};

void Time::increment(double secs)
{
    make_time(convert_to_seconds() + secs);
}

double Time::convert_to_seconds()
{
    minute  = hour * 60 + minute;
    second = minute * 60 + second;
    return second;

}

void Time::make_time(double secs)
{
    hour = int(secs / 3600.0);
    secs -= hour * 3600.0;
    minute = int(secs / 60.0);
    secs -= minute * 60;
    second = secs;

}

Time::Time(int h, int m, double s)
{
  hour = h; minute = m; second = s;
}

Time::Time(int h, int m, int s)
{
  hour = h; minute = m; second = s;
}


void Time::print()
{
    cout << hour << ":" << minute << ":" << second << endl;
}



int main(){

//Without added construstor this returns a error of no matching constructor, with the added constructor runs normally
    Time current_time(9, 14, 3);


}
