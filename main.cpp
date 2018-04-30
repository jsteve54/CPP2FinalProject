#include "card.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

//Deck population
void buildDeck(vector <Card> &d) {
    d.push_back(Card ("Spades", 1, 1));
    d.push_back(Card ("Spades", 2, 2));
    d.push_back(Card ("Spades", 3, 3));
    d.push_back(Card ("Spades", 4, 4));
    d.push_back(Card ("Spades", 5, 5));
    d.push_back(Card ("Spades", 6, 6));
    d.push_back(Card ("Spades", 7, 7));
    d.push_back(Card ("Spades", 8, 8));
    d.push_back(Card ("Spades", 9, 9));
    d.push_back(Card ("Spades", 10, 10));
    d.push_back(Card ("Spades", 11, 10));
    d.push_back(Card ("Spades", 12, 10));
    d.push_back(Card ("Spades", 13, 10));

    d.push_back(Card ("Clubs", 1, 1));
    d.push_back(Card ("Clubs", 2, 2));
    d.push_back(Card ("Clubs", 3, 3));
    d.push_back(Card ("Clubs", 4, 4));
    d.push_back(Card ("Clubs", 5, 5));
    d.push_back(Card ("Clubs", 6, 6));
    d.push_back(Card ("Clubs", 7, 7));
    d.push_back(Card ("Clubs", 8, 8));
    d.push_back(Card ("Clubs", 9, 9));
    d.push_back(Card ("Clubs", 10, 10));
    d.push_back(Card ("Clubs", 11, 10));
    d.push_back(Card ("Clubs", 12, 10));
    d.push_back(Card ("Clubs", 13, 10));

    d.push_back(Card ("Diamonds", 1, 1));
    d.push_back(Card ("Diamonds", 2, 2));
    d.push_back(Card ("Diamonds", 3, 3));
    d.push_back(Card ("Diamonds", 4, 4));
    d.push_back(Card ("Diamonds", 5, 5));
    d.push_back(Card ("Diamonds", 6, 6));
    d.push_back(Card ("Diamonds", 7, 7));
    d.push_back(Card ("Diamonds", 8, 8));
    d.push_back(Card ("Diamonds", 9, 9));
    d.push_back(Card ("Diamonds", 10, 10));
    d.push_back(Card ("Diamonds", 11, 10));
    d.push_back(Card ("Diamonds", 12, 10));
    d.push_back(Card ("Diamonds", 13, 10));

    d.push_back(Card ("Hearts", 1, 1));
    d.push_back(Card ("Hearts", 2, 2));
    d.push_back(Card ("Hearts", 3, 3));
    d.push_back(Card ("Hearts", 4, 4));
    d.push_back(Card ("Hearts", 5, 5));
    d.push_back(Card ("Hearts", 6, 6));
    d.push_back(Card ("Hearts", 7, 7));
    d.push_back(Card ("Hearts", 8, 8));
    d.push_back(Card ("Hearts", 9, 9));
    d.push_back(Card ("Hearts", 10, 10));
    d.push_back(Card ("Hearts", 11, 10));
    d.push_back(Card ("Hearts", 12, 10));
    d.push_back(Card ("Hearts", 13, 10));

    return;
}

//Card dealing
void dealCards(vector <Card> &d, vector <Card> &ph, vector <Card> &ch) {
    int randomNum;

    while(ph.size() <= 9)
    {
        randomNum = rand() % d.size();
        ph.push_back(d[randomNum+1]);
        d.erase(d.begin()+randomNum+1);
        randomNum = rand() % d.size();
        ch.push_back(d[randomNum+1]);
        d.erase(d.begin()+randomNum+1);
        
    }
    
    return;
}

int main() {
	//INSERT CARDS IN DECK CLASS
	vector <Card> deck;
    vector <Card> playerHand;
    vector <Card> computerHand;
    
    srand(time(NULL));
	    
	buildDeck(deck);
    dealCards(deck, playerHand, computerHand);
    
    //Prints current deck list
    /*for (int i = 0; i <= deck.size() - 1; i++)
    {
        deck[i].printCard();
    }*/
    
    //Prints player hand
    /*cout << "PLAYER HAND" << endl;
    for (int i = 0; i < playerHand.size(); i++)
    {
        playerHand[i].printCard();
    }*/
    
    //Prints computer hand
    /*cout << "COMPUTER HAND" << endl;
    for (int i = 0; i < computerHand.size(); i++)
    {
        computerHand[i].printCard();
    }*/

	return 0;
}
