#include <iostream>
#include <string>
#include <sstream>
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

    return 0;
}