#include <iostream>
#include <doctest.h>
using namespace std;

struct Time {
    int hour, minute;
    double second;


    string to_String();
};




string Time::to_String()
{
    return to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
}

int main(){

    Time current_time = {9, 14, 30.0};
    cout << current_time.to_String();

}