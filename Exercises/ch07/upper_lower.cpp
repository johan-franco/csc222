#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string string_to_upper(string p){
    int count = 0;
    int index = 0;
    string upper;
    while (index <= p.length()) {
        char upper_letter = toupper(p[index]);
        upper = upper + upper_letter;
        index += 1;
    }  
    return upper;
}
string string_to_lower(string p){
    int index = 0;
    string lower;
    while (index <= p.length()) {
        char lower_letter = tolower(p[index]);
        lower = lower + lower_letter;
        index +=1;
    }
        return lower;

}  

int main()
{
    string upper = string_to_upper("life");
    string lower = string_to_lower("AMAZING");
    cout << "Upper String: "<< upper << endl;
    cout << "Lower String: " << lower << endl;
}