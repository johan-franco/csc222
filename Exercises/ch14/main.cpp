#include "card.h"
#include <iostream>
using namespace std;

int main() {
    Deck mydeck;
    //Testing swap
    cout << "Before Swap:"<< endl << mydeck.cards[20].to_string() << " " << mydeck.cards[30].to_string() << endl;
    mydeck.swap(20,30);
    cout << "After Swap:"<< endl << mydeck.cards[20].to_string() << " " << mydeck.cards[30].to_string() << endl;

    int lowestIndex = mydeck.find_lowest(12, 42);
    cout << "Index of the lowest card between 12 and 42: " << lowestIndex << endl << mydeck.cards[lowestIndex].to_string();
    Deck anotherdeck;

    Deck megadeck = mydeck.merge(anotherdeck);
    cout << "Mega Deck size: " << endl <<megadeck.cards.size()<< endl;

    Deck greaterdeck = megadeck.merge(mydeck);
    cout<< "Sorted Greater Deck Size: " << endl << greaterdeck.cards.size()<< endl;
    greaterdeck.printDeck();

    return 0;
}