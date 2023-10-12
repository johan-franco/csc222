#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <list>
#include <vector>
using namespace std;


void tree(vector<string> branches) {
    string kitten_branch, input, start, brancha;

    /*while(stoi(input) != -1 ) {
        getline(cin, input);
        branches.push_back(input);
        cout << input;
    } */
    start= getline(cin, input);
    cout << start<< endl;
    brancha = getline(cin, input);
    cout << brancha;


}

int main(){
    vector<string> branches;
    tree(branches);
    
    return 0;
}