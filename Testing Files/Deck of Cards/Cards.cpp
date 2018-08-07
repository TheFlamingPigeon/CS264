/*
	Note: Deck of cards
	Date: 
	Name: Matthew E. Rowe
	ID:   17194164
*/

// Inclusion and Namespaces
#include <iostream>
#include <vector>
using namespace std;

// Constant Definitions
const int DECK_MAX = 52;


// Class Definition
class Card{
	int val; // Values 1(A) theough 13(K) for the face value
	int suit; 	/*  Value 1 thrrough 4 to represent suit
					1: Diamonds ♦
					2: Clubs    ♣
					3: Hearts   ♥
					4: Spades   ♠
				*/
public:
	// Constructor
	Card() { val = 1; suit = 4; } // Defult to the Ace of spades
	Card(int v, int s) { val = v; suit = s; }
	
	// Getters
	int getValue() { return val; }
	int getSuit() { return suit; }
	
	// Card Functions
	void printCard();
};

/// Card Functions - Begin ####################################

void Card::printCard() {
	string cardName;
	string cardSuit;
	
	if(suit == 1)
		cardSuit = "Diamonds";
	else if(suit == 2)
		cardSuit = "Clubs";
	else if(suit == 3)
		cardSuit = "Hearts";
	else
		cardSuit = "Spades";
	
	if(val == 1)
		cardName = "Ace";
	else if(val == 11)
		cardName = "Jack";
	else if(val == 12)
		cardName = "Queen";
	else if(val == 13)
		cardName = "King";
	else
		cardName = val;
	
	cout << cardName << " of " << cardSuit << endl;
}


/// Card Functions - End   ####################################


//  Main Function Protos
vector<Card> buildDeck();

/// Main Function 
int main(){
	
	vector<Card> deck = buildDeck();
	
	for(int i = 0; i < 52; i++){
		Card *temp = 
		temp->printCard();
	}
		

	
	// system("PAUSE");
	return 0;
}

// Returns a vector that represents a Deck of cards
buildDeck(){
	vector<Card> D; // Creates a card vector
	D.reserve(52); // Makes space for 52 cards
	
	for(int s = 1; s <= 4; s++){
		for(int v = 1; v <= 13; v++){
			
			D.push_back(Card(v,s));
		}
	}
	return D;
}