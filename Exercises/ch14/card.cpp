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
    return cards;
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
    Card temp = cards[swap_card1];

    // Swap cards at index1 and index2
    cards[swap_card1] = cards[swap_card2];
    cards[swap_card2] = temp;
}

int Deck::find_lowest(int min, int max) {
  int lowest = this->cards[min].rank;
  int index = min;

  for (int i = 0; i < max - min; i++) {
    if (this->cards[i + min].rank < lowest) {
      lowest = this->cards[i + min].rank;
      index = i + min;
    }
  }
  return index;
}

void Deck::sortLH() {
    for (int i = 0; i < cards.size(); i++) {
        int index_of_lowest = this->find_lowest(i, cards.size()-1);
        if (index_of_lowest == -1) {
            break;
        }
        this->swap(i, index_of_lowest);
    }
}

Deck Deck::merge(const Deck& d) const
{
    // creates a new deck big enough for all the cards
    Deck result(cards.size() + d.cards.size());

    // use index i for place in first deck, j for place in second deck
    int i = 0;
    int j = 0;

    // k traverses the result deck
    for (int k = 0; k < result.cards.size(); k++) {
        if (k > cards.size()-1 || d.cards[j].rank >= cards[i].rank) {
            result.cards[k] = d.cards[j];
            j++;
            continue;
        } 
        if (k > d.cards.size()-1 || cards[i].rank >= d.cards[j].rank) {
            result.cards[k] = cards[i];
            i++;
            continue;
        } 

    }
    return result;
}

Deck Deck::merge_sort() const
{
    // find the midpoint of the deck
    int midpoint = cards.size()/2;

    Deck first_half(midpoint);
    first_half.cards.assign(cards.begin(), cards.begin() +midpoint);

    Deck sec_half(midpoint);
    sec_half.cards.assign(cards.begin() + midpoint, cards.end());

    Deck sortedresult = first_half.merge(sec_half);
    return sortedresult;
}

void Deck::printDeck() {
	for(int i = 0; i < cards.size(); i++) {
		cout << cards[i].to_string() << endl;
	}
}
