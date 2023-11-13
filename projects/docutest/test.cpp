#include "test.h"
#include <cstdlib>
#include <random>


UnoC::UnoC (){
	color = RED;
	type = ONE;
}

UnoC::UnoC( Color c, Type t) {
	color = c;
	type = t;
}

bool UnoC::equals(UnoC& topCard) {
	return (color == topCard.color || type == topCard.type);
}
string UnoC::to_string() {
    vector<string> colors = {"Red", "Yellow", "Blue", "Green"};
    vector<string> types = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    return colors[color] + " " + types[type];
}
void UnoC:: draw_card(vector<UnoC>&deck) {
	*this = deck[0];
	deck.erase(deck.begin());
}

vector<UnoC> build_deck()
{
    vector<UnoC> deck(80);
    int i = 0;
	while(i !=80) {
		for (Color col = RED; col <= GREEN; col = Color(col+1)) {
			for (Type typ = ZERO; typ <= NINE; typ = Type(typ+1)) {
				deck[i].color = col;
				deck[i].type = typ;
				cout<< deck[i].to_string() <<endl;
				i++;
			}
		}
	}
    return deck;
}

void draw_card(vector<UnoC>& hand, vector<UnoC>& deck){
    hand.push_back(deck[0]);
    deck.erase(deck.begin());
}

UnoC draw_card(vector<UnoC>& deck){
    UnoC temp = deck[0];
    deck.erase(deck.begin());
    return temp;
}

void play(vector<UnoC>& origDeck, int num, vector<UnoC>& playDeck){
    playDeck.push_back(origDeck[num]);
    origDeck.erase(origDeck.begin() +num);
}

bool is_valid(UnoC play, UnoC played){
    if (play.color == played.color || play.type == played.type){
        return true;
    }
    return false;
}

int myrandom(int i) {
	random_device rd;
	default_random_engine gen(rd());
	uniform_int_distribution<> dis(0, i - 1);
    return dis(gen);
}

void computerTurn(vector<UnoC>& computerHand, vector<UnoC>& discard, vector<UnoC>& deck){
    for (int i = 0; i < computerHand.size(); i++){
        if (is_valid(computerHand[i], discard.back())){
            //topCard = draw_card(computerHand);
			cout << " played" << computerHand[i].to_string() << endl;
            play(computerHand, i, discard);
            return;
        }
    }
    draw_card(computerHand, deck);
	cout << "New card drawn due to no other card : " << computerHand.back().to_string() << endl;
    //topCard = draw_card(computerHand)
	if(computerHand.back().color == discard.back().color || computerHand.back().type == discard.back().type)
    	play(computerHand, computerHand.size()-1, discard);
}

void printHand(vector<UnoC> hand, string t) {

	for(int i = 0; i < hand.size(); i++) {
		cout << t << "'s hand" <<  hand[i].to_string() << endl;
	}
}