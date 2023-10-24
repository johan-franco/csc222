#include <iostream>
using namespace std;

struct Card
{
    int suit, rank;

    Card();
    Card(int s, int r);
};

Card::Card() {
    suit = 0; rank = 0;
}

Card::Card(int s, int r) {
    suit = s; rank = r;
}

string Card::to_string() const
{
    vector<string> suit_strings = {"Clubs", "Diamonds", "Hearts", "Spades"};
    vector<string> rank_strings = {"", "", "2", "3", "4", "5", "6", "7",
                                   "8", "9", "10", "Jack", "Queen", "King", "Ace"};

    return rank_strings[rank] + " of " + suit_strings[suit];
}

bool equals(const Card& c1, const Card& c2) 
{
    return (c1.rank == c2.rank && c1.suit == c2.suit);
}
int main() {
    Card card1(1, 11);
    Card card2(1, 11);
    Card card3(1, 10);

    cout << "Comparing 1 & 2: " << equals(card1,card2)<< endl;
    cout << "Comparing 2 & 3: " << equals(card2,card3)<< endl;
}