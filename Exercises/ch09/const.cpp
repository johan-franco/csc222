#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
};
/*Before without const the program could run without errors. Adding const resulted in errors as we are modifying time despite
declaring it as a constant */

void increment( const Time& time, const  double secs)
{
    time.second += secs;

    while (time.second >= 60.0) {t
        time.second -= 60.0;
        time.minute += 1;
    }
    while (time.minute >= 60) {
        time.minute -= 60;
        time.hour += 1;
    }
}

int main() {
    Time time = {11, 59, 3.14159};
    increment(time, time.second);
    return 0;
}
