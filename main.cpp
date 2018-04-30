#include "card.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int main() {
	//INSERT CARDS IN DECK CLASS
	vector <Card> deck;
	vector <Card> pHand;
	vector <Card> cHand;
	char rsponse;
	Card var;

    srand(time(NULL));
    
	var.buildDeck(deck);
    var.dealCards(deck, pHand, cHand);
	var.copyVectors(pHand,cHand);

	cout << "Would you like to knock this turn? please enter y if yes." << endl;
	cin >> rsponse;
	if (rsponse == 'y') {
		var.makeMelds();
		var.scoreMelds();
	}
    
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
