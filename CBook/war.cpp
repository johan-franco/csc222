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
    copy(d1.cards.begin()+26, d1.cards.begin()+52,p2.cards.begin());

    Card c1 = p1.popCard();
    Card c2 = p2.popCard();

    int diff = c1.rank - c2.rank;
    cout << diff;

    return 0;
}