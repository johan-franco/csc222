#include "card.h"


Card::Card() {
    suit = SPADES;
    rank = ACE;
}

Card::Card(Suit s, Rank r) {
    suit = s;
    rank = r;
}

bool Card::equals(Card& c2) {
    return (rank == c2.rank && suit == c2.suit);
}

string Card::to_string() {
    vector<string> suit_strings = {"Clubs", "Diamonds", "Hearts", "Spades"};
    vector<string> rank_strings = {"", "Ace", "2", "3", "4", "5", "6", "7","8", "9", "10", "Jack", "Queen", "King"};

    return rank_strings[rank] + " of " + suit_strings[suit];
}
vector<Card> build_deck() {
    vector<Card> temp(52);
    vector<Card> cards = temp;
    int i = 0;
    for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit+1)) {
        for (Rank rank = ACE; rank <= KING; rank = Rank(rank+1)) {
            cards[i].suit = suit;
            cards[i].rank = rank;
            i++;
        }
    }
    return temp;
}

Deck::Deck() {    
    cards = build_deck();    
}
    


Deck::Deck(int size){
    vector<Card> temp(size);
    cards = temp;
}

int Deck::find(Card& card) 
{
    Deck p = *this;
    for (int i = 0; i < p.cards.size(); i++) {
        if (p.cards[i].equals(card)) return i;
    }
    return -1;
}

void Deck::swap(int swap_card1, int swap_card2) {
    Deck adeck = *this;
    // Swap cards at index1 and index2
    swap(adeck.cards[swap_card1], adeck.cards[swap_card2]);
}