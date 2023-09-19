#include <iostream>
#include <string>
using namespace std;

void count_letters(string p, char d){
    int count = 0;
    int index = 0;
    int counter = 0;
    while (index >= 0) {
       index = p.find(d, index+ counter);
       counter = 1;
       count = count + 1;
       cout << index << endl << count << endl;
    }
    cout << count-1 << endl;

}  

int main()
{
    count_letters("ace car", 'a');
}