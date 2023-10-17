#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void expandArray(string*** arr, int* rows, int* columns, int newRows, int newColumns) {
    string** newArr = new string*[newRows];
    for (int i = 0; i < newRows; i++) {
        newArr[i] = new string[newColumns];
    }

    // Copy values from the old array to the new array
    for (int i = 0; i < *rows; i++) {
        for (int j = 0; j < *columns; j++) {
            newArr[i][j] = (*arr)[i][j];
        }
    }

    // Deallocate memory for the old array
    for (int i = 0; i < *rows; i++) {
        delete[] (*arr)[i];
    }
    delete[] *arr;

    // Update the pointer to point to the new array
    *arr = newArr;

    *rows = newRows;
    *columns = newColumns;
}

int main() {
    string** tree = new string*[100]; 
    for (int i = 0; i < 100; i++) {
        tree[i] = new string[100]; 
    }
    int rows = 0, columns = 0;
    string input;

    while (input != "-1") {
        getline(cin, input);
        stringstream in(input);

        string branch_num;
        int i = 0;
        while (getline(in, branch_num, ' ')) {
            if (columns <= i) {
                expandArray(&tree, &rows, &columns, rows, i + 1);
                columns = i + 1;
            }
            tree[rows][i] = branch_num;
            i++;
        }
        rows++;
    }

    // Deallocate memory for the tree array when done
    for (int i = 0; i < rows; i++) {
        delete[] tree[i];
    }
    delete[] tree;

    return 0;
}