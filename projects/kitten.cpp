#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void insert_val(string arr[], int* rows, int* columns) {
    string temp[100][100];
    string input;
    int max_columns = 0;
    while (input != "-1") {
        getline(cin, input);
        stringstream in(input);

        string branch_num;
        int i = 0;
        while (getline(in, branch_num, ' ')) {
            *arr[*rows][*columns] = branch_num;
            columns++;
            max_columns = (*columns > max_columns) ? *columns:  max_columns;
        }
        rows++;
    }
    cout << temp <<endl;
    for (int i = 0; i < *rows; i++) {
        for (int j = 0; j < *columns; j++) {
            cout << temp[i][j] <<endl;
        }
    }


  
    
    *columns = max_columns;


}

int main() {
    string tree[100][100]; 
    int rows = 0, columns = 0;
    
    insert_val(tree, rows,columns);
    string input;


    return 0;
}