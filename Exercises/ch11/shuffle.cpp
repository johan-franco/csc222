#include <iostream>
#include <string>
#include <list>
#include <cstdlib>
#include <typeinfo>

using namespace std;

void printarray(int my_array[], int arrSize ) {
    cout << typeid(my_array).name() << endl;
    for(int i = 0; i <arrSize; i++){
            cout<< my_array[i] << ' ';
        }
    cout << endl;
}

void shuffle(int my_array[], int arrSize){
    srand(time(0));
    for (int i=0; i < arrSize; i++) {
        swap(my_array[i], my_array[(rand()%arrSize)]);
    }
    for(int i = 0; i <arrSize; i++){
            cout<< my_array[i] << ' ';
        }
    cout << endl;
}

void pureshuffle(int my_array[], int arrSize){
    for (int i=0; i < arrSize; i++) {
        swap(my_array[i], my_array[(rand()%arrSize)]);
    }
    for(int i = 0; i < arrSize; i++){
            cout<< my_array[i] << ' ';
        }
    cout<< endl;
}




int main(){
    int arr[5] = {0,1,2,3,4};
    int arrSize = *(&arr + 1) - arr;
    cout << (arrSize);
    cout<< "Calling pure shuffle:" <<endl;
    pureshuffle(arr, arrSize); 


    cout<< "Calling modifier shuffle:"<< endl;
    shuffle(arr,arrSize);



    

    return 0;
}