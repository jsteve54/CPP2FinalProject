#include "card.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void buildDeck(vector <Card> d) {
    d.push_back(Card ("Spades", 0, 1));
    d.push_back(Card ("Spades", 1, 2));
    d.push_back(Card ("Spades", 2, 3));
    d.push_back(Card ("Spades", 3, 4));
    d.push_back(Card ("Spades", 4, 5));
    d.push_back(Card ("Spades", 5, 6));
    d.push_back(Card ("Spades", 6, 7));
    d.push_back(Card ("Spades", 7, 8));
    d.push_back(Card ("Spades", 8, 9));
    d.push_back(Card ("Spades", 9, 10));
    d.push_back(Card ("Spades", 10, 10));
    d.push_back(Card ("Spades", 11, 10));
    d.push_back(Card ("Spades", 12, 10));
    
    d.push_back(Card ("Clubs", 0, 1));
    d.push_back(Card ("Clubs", 1, 2));
    d.push_back(Card ("Clubs", 2, 3));
    d.push_back(Card ("Clubs", 3, 4));
    d.push_back(Card ("Clubs", 4, 5));
    d.push_back(Card ("Clubs", 5, 6));
    d.push_back(Card ("Clubs", 6, 7));
    d.push_back(Card ("Clubs", 7, 8));
    d.push_back(Card ("Clubs", 8, 9));
    d.push_back(Card ("Clubs", 9, 10));
    d.push_back(Card ("Clubs", 10, 10));
    d.push_back(Card ("Clubs", 11, 10));
    d.push_back(Card ("Clubs", 12, 10));
    
    d.push_back(Card ("Diamonds", 0, 1));
    d.push_back(Card ("Diamonds", 1, 2));
    d.push_back(Card ("Diamonds", 2, 3));
    d.push_back(Card ("Diamonds", 3, 4));
    d.push_back(Card ("Diamonds", 4, 5));
    d.push_back(Card ("Diamonds", 5, 6));
    d.push_back(Card ("Diamonds", 6, 7));
    d.push_back(Card ("Diamonds", 7, 8));
    d.push_back(Card ("Diamonds", 8, 9));
    d.push_back(Card ("Diamonds", 9, 10));
    d.push_back(Card ("Diamonds", 10, 10));
    d.push_back(Card ("Diamonds", 11, 10));
    d.push_back(Card ("Diamonds", 12, 10));
    
    d.push_back(Card ("Hearts", 0, 1));
    d.push_back(Card ("Hearts", 1, 2));
    d.push_back(Card ("Hearts", 2, 3));
    d.push_back(Card ("Hearts", 3, 4));
    d.push_back(Card ("Hearts", 4, 5));
    d.push_back(Card ("Hearts", 5, 6));
    d.push_back(Card ("Hearts", 6, 7));
    d.push_back(Card ("Hearts", 7, 8));
    d.push_back(Card ("Hearts", 8, 9));
    d.push_back(Card ("Hearts", 9, 10));
    d.push_back(Card ("Hearts", 10, 10));
    d.push_back(Card ("Hearts", 11, 10));
    d.push_back(Card ("Hearts", 12, 10));
}

int main() {
	//INSERT CARDS IN DECK CLASS
	vector <Card> deck;
	    
	buildDeck(deck);


	return 0;
}
