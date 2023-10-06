#include <iostream>
#include <string>
#include <list>

using namespace std;


int str_len(char str[]) {
    int count = 0;
    while (str[count] != '\0') count++;
    return count;
}

int main() {
    char string[] = "C-String \0";

    cout << " Characters of length is: " << str_len(string);

    return 0;
}