#include "Uno.h"
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
			cout << "Computer played: " << computerHand[i].to_string() << endl;
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
		cout << t << "'s hand " <<  hand[i].to_string() << endl;
	}
}

void playerTurn(vector<UnoC>& playerHand, vector<UnoC>& discard, vector<UnoC>& deck){
    int amount = 0;
    int resp;
    vector<int> index_hand;
    cout<< "Current top card in deck: " << discard.back().to_string() << endl << "Playable Cards:"<< endl;
    for (int i = 0; i < playerHand.size(); i++){
        if (is_valid(playerHand[i], discard.back()) == true){
            //topCard = draw_card(computerHand);
			cout << amount + 1 << ")"<< playerHand[i].to_string() << endl;
            index_hand.push_back(i);
            amount++;
        }
    }
    if (amount == 0) {
        draw_card(playerHand, deck);
        cout << "New card drawn due to no other card : " << playerHand.back().to_string() << endl;
        if(is_valid(playerHand.back(), discard.back() ) == true) {
    	    play(playerHand, playerHand.size()-1, discard);
            
        }
        return;
    }
    cout<< "What card will you play?" << endl;
    cin >> resp;
    play(playerHand, index_hand[resp-1], discard);
}

