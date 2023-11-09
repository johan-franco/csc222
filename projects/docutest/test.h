#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum Color {RED, YELLOW, BLUE, GREEN};
enum Type {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
           NINE, SKIP};


struct UnoC {
	Color color;
	Type type; 


	UnoC();
	UnoC(Color c, Type t);
	bool equals(UnoC& topCard);
	string to_string();
};

vector<UnoC> build_deck();
void draw_card(vector<UnoC>& hand, vector<UnoC>& deck);
UnoC draw_card(vector<UnoC>& deck);
void play(vector<UnoC>& origDeck, int num, vector<UnoC>& playDeck);
bool is_valid(UnoC play, UnoC played);
int myrandom (int i);
void computerTurn(vector<UnoC>& computerHand, vector<UnoC>& discard, vector<UnoC>& deck);