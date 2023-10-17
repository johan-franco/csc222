#include <iostream>
#include <string>
#include <sstream>
#include <vector> 
using namespace std;

void insert_val(string arr[][100], int& rows, int& columns) {
    string input;
    int max_columns = 0;
    while (input != "-1") {
        getline(cin, input);
        stringstream in(input);

        string branch_num;
        int i = 0;
        while (getline(in, branch_num, ' ')) {
            arr[rows][i] = branch_num;
            i++;
        }
        max_columns = (i > max_columns) ? i : max_columns;
        rows++;
    }

    columns = max_columns;
}

int main() {
    string tree[100][100];
    int rows = 0, columns = 0;
    
    insert_val(tree, rows, columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << tree[i][j] << endl;
        }
    }
    cout << rows << endl << columns;

    string root = tree[0][0];
    vector<string> path;
    
    path[0] = root;
    int st = 0;

    for (int i = 1; i < columns; i++) {
        for (int k = 1; k < rows; k++) {
            if(tree[i][k] == path[st]){
                st ++;
                path[st] = tree[i][0];
                i = 0;
                k = 0;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        cout<< path[i] <<" "; 
  }

    return 0;
}