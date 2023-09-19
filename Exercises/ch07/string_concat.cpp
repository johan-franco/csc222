#include <iostream>
#include <string>
using namespace std;


int main()
{
    string suffix = "ack";

    char letter = 'J';
    while (letter <= 'Q') {
        if (letter ==  'O' or letter == 'Q') {
            string duck_suf = 'u'+suffix;
            cout << letter + duck_suf << endl;
        }
        else {
        cout << letter + suffix << endl;
        }
        letter++;
    }
    
}