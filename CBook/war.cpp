#include "cards.h"
#include <algorithm>
#include <random>

using namespace std;

int main(){
    Deck d1;
    Deck p1(5);
    Deck p2(5);

    d1.shuffle();

    copy(d1.cards.begin(), d1.cards.begin()+5,p1.cards.begin());
    copy(d1.cards.begin()+5, d1.cards.begin()+10,p2.cards.begin());


    while(p1.isEmpty() == false && p2.isEmpty() == false) {
        if (p1.isEmpty() || p2.isEmpty()) {
            break;
        }
        Card c1 = p1.popCard();
        Card c2 = p2.popCard();

        
        int diff = c1.rank - c2.rank;
        if (diff > 0) {
            p1.addCard(c1);
            p1.addCard(c2);
        } else if (diff < 0) {
            p2.addCard(c1);
            p2.addCard(c2);
        } else {
            Deck p1Tie(1);
            Deck p2Tie(1);
            for (int i = 0; i < 4; i++) {
                if(i < p1.cards.size()-1) {
                    p1Tie.addCard(p1.cards[0]);
                    p1.popCard();
                }
                if(i < p2.cards.size()-1) {
                    p2Tie.addCard(p2.cards[0]);
                    p2.popCard();
                }  
            }
            Card p1end = p1Tie.cards[p1Tie.cards.size()-1];
            Card p2end = p2Tie.cards[p2Tie.cards.size()-1];
            Deck sum = p1Tie.merge(p2Tie);
            if(p1end.rank > p2end.rank) {
                p1 = p1.merge(sum);
            }
            else{
                p2 = p2.merge(sum);
            }

        }
        
    } 
    

    if (p1.isEmpty() ) {
        cout<< "Player 2 wins!"<<endl;
        p1.printDeck();
        cout<< "BREAK" <<endl;
        p2.printDeck();
    }
    else {
        cout<< "PLayer 1 wins";
        p1.printDeck();
        cout<< "BREAK" <<endl;
        p2.printDeck();
    }

    return 0;
}