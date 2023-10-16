#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <list>
#include <iterator>
#include <vector>
#include <sstream>

using namespace std;

template <size_t N>
void splitString(string (&arr)[N], string str)
{
    int n = 0;
    istringstream iss(str);
    for (auto it = istream_iterator<string>(iss); it != istream_iterator<string>() && n < N; ++it, ++n)
        arr[n] = *it;
}



void tree() {
    string kitten_branch, start, brancha, input, branch_num;
    int branch = 0, branches = 0;
    while(input != "-1" ) {
        getline(cin, input);
        string tree[branch][branches]; 
        for (int i = 0; i < branch; i++) {
            for (int j = 0; j < branches; j++) {
                tree[i][j] = temptree[i][j];
            }
        }
        
        stringstream in(input);
        while(getline(in, branch_num, ' ')) {
            string temptree[branch][branches];
            tree[branch][branches] = branch_num;
            branches+=1;
            for (int i = 0; i < branch; i++) {
                for (int j = 0; j < branches; j++) {
                temptree[i][j] = tree[i][j];
                }
            }
        }
        branch+=1;

        
        /*int i = 0;
        int space = 0;
        while(i <= input[i] ){
            if( input[i] ==' '){
                space++;
            }
        i++;
        }
        string arr[i];
        splitString(arr, input);
        branches.push_back(arr);
        cout << input;
        */
    } 

}

int main(){
    
    tree();
    
    return 0;
}