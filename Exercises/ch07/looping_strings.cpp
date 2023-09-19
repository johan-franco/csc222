#include <iostream>
#include <string>
using namespace std;

void count_letters(string p, char d){
    int count = 0;
    int index = 0;
    while (index < p.length()) {
        if (p[index] == d) {
            count = count + 1;
        }
        index = index + 1;
    }
        cout << count << endl;

}  

int main()
{
    count_letters("race car", 'a');
    
}