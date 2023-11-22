#include "card.h"
#include <iostream>
using namespace std;

int main() {
    Deck mydeck;
    //Testing swap
    cout << "Before Swap:"<< endl << mydeck.cards[20].to_string() << " " << mydeck.cards[30].to_string() << endl;
    mydeck.swap(20,30);
    cout << "After Swap:"<< endl << mydeck.cards[20].to_string() << " " << mydeck.cards[30].to_string() << endl;

    int lowestIndex = mydeck.find_lowest(10, 42);
    cout << "Index of the lowest card between 0 and 42: " << lowestIndex << endl << mydeck.cards[lowestIndex].tostring();

    

    return 0;
}