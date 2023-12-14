#include "cards.h"
#include <algorithm>
#include <random>

using namespace std;

int main(){
    Deck d1;
    Deck p1(26);
    Deck p2(26);

    d1.shuffle();

    copy(d1.cards.begin(), d1.cards.begin()+26,p1.cards.begin());
    copy(d1.cards.begin()+26, d1.cards.end(),p2.cards.begin());

    while(p1.isEmpty() == false && p2.isEmpty() == false) {
        if (p1.isEmpty() || p2.isEmpty()) {
            break;
        }
        Card c1 = p1.popCard();
        Card c2 = p2.popCard();

        
        int diff = c1.rank - c2.rank;
        cout << diff;
        if (diff > 0) {
            p1.addCard(c1);
            p1.addCard(c2);
        } else if (diff < 0) {
            p2.addCard(c1);
            p2.addCard(c2);
        } else {
            continue;
        }
    } 

    return 0;
}