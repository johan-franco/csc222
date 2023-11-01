#include "card.h"
using namespace std;

vector<Card> build_deck()
{
    vector<Card> deck(52);
    int i = 0;
    for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit+1)) {
        for (Rank rank = ACE; rank <= KING; rank = Rank(rank+1)) {
            deck[i].suit = suit;
            deck[i].rank = rank;
            i++;
        }
    }
    return deck;
}

Deck::Deck(int size)
{
    vector<Card> temp(size);
    cards = temp;
}

int main() {


    return 0;
}