#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
};

double convert_to_seconds(const Time& t)
{
    int minutes = t.hour * 60 + t.minute;
    double seconds = minutes * 60 + t.second;

    return seconds;
}

Time make_time(double secs)
{
    Time time;
    time.hour = int(secs / 3600.0);
    secs -= time.hour * 3600.0;
    time.minute = int(secs / 60.0);
    secs -= time.minute * 60;
    time.second = secs;

    return time;
}

Time increment( Time& time, const double sec)
{
    return make_time(convert_to_seconds(time) + sec);
}

int main() {
    double secs = 103.4;
    cout << time.hour<< ":" << time.minute << ":" << time.second;
    
    Time time = {11, 59, 3.14159};
    time = increment(time, secs);
    cout << time.hour<< ":" << time.minute << ":" << time.second;
    
    return 0;
}