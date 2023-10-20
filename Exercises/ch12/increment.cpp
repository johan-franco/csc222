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

void Time::print()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

int main(){

    Time current_time = {9, 14, 30.0};
    current_time.increment(500.0);
    current_time.print();

}