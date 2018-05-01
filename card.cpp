#include "card.h"
#include <math.h>
#include <sstream>
#include <iostream>

Card::Card () {

}

Card::Card (string s, int v, int pv) {
    suit = s;
    value = v;
    pointValue = pv;
    name = "";
}

void Card::copyVectors(vector <Card> PH, vector <Card> CH) {
	playerHand = PH;
	computerHand = CH;
}

void Card::buildDeck(vector <Card> &d) {
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

void Card::dealCards(vector <Card> &d, vector <Card> &ph, vector <Card> &ch) {
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

void Card::printCard () {
    ostringstream convert;
    
    if (value == 1)
        name = "Ace";
    else if (value == 11)
        name = "Jack";
    else if (value == 12)
        name = "Queen";
    else if (value == 13)
        name = "King";
    else {
        convert << value;
        name = convert.str();
    }
        
    cout << name << " of " << suit << endl;
}

void Card::makeMelds() {
	cout << "Please enter the size of your first meld." << endl;
	cin >> meldSize;
	meldNum = stoi(meldSize);
	vector <Card> v(meldNum);
	Card varia;
	cout << "Please enter a card you would like in your first meld ex: Spades, 2, 2" << endl;
	for (auto it = v.begin(); it != v.end(); it++) {
		getline(cin,meldReader,',');
		suitRead = meldReader;
		getline(cin,meldReader,',');
		valueRead = stoi(meldReader);
		getline(cin,meldReader);
		pointValueRead = stoi(meldReader);
		v.push_back(Card(suitRead,valueRead,pointValueRead));
		
		for (auto iter = playerHand.begin(); iter != playerHand.end(); iter++) {
			if (v == playerHand) {
				meld1 = v;
				cout << "Please enter another card you would like in your first 				meld." << endl;
			}
			else {
				cout << "You did not enter a card that is present in your hand, 				please try again." << endl;
			}
		}
	}
	v.clear();
	cout << "Would you like to form another meld? If yes please enter y.";
	cin >> response;
	if (response == 'y') {
		cout << "Please enter the size of your second meld." << endl;
		cin >> meldSize;
		meldNum = stoi(meldSize);
		vector <Card> v(meldNum);
		cout << "Please enter a card you would like in your second meld." << 			endl;
		for (auto iter = v.begin(); iter != v.end(); iter++) {
			getline(cin,meldReader,',');
			suitRead = meldReader;
			getline(cin,meldReader,',');
			valueRead = stoi(meldReader);
			getline(cin,meldReader);
			pointValueRead = stoi(meldReader);
			v.push_back(Card(suitRead,valueRead,pointValueRead));
		
			for (auto it = playerHand.begin(); it != playerHand.end(); it++) {
				if (v == playerHand) {
					meld2 = v;
					cout << "Please enter another card you would like in 						your second meld." << endl;
				}
				else {
				cout << "You did not enter a card that is present in your hand, 				please try again." << endl;
				}
			}
		}	
	}
	v.clear();
	cout << "Would you like to form another meld? If yes please enter y.";
	cin >> response;
	if (response == 'y') {
		cout << "Please enter the size of your third meld grouping." << endl;
		cin >> meldSize;
		meldNum = stoi(meldSize);
		vector <Card> v(meldNum);
		cout << "Please enter a card you would like in your third meld." << endl;
		for (auto it = v.begin(); it != v.end(); it++) {
			getline(cin,meldReader,',');
			suitRead = meldReader;
			getline(cin,meldReader,',');
			valueRead = stoi(meldReader);
			getline(cin,meldReader);
			pointValueRead = stoi(meldReader);
			v.push_back(Card(suitRead,valueRead,pointValueRead));
		
			for (auto iter = playerHand.begin(); iter != playerHand.end(); iter++) {
				if (v == playerHand) {
					meld3 = v;
					cout << "Please enter another card you would like in 						your third meld." << endl;
				}
				else {
					cout << "You did not enter a card that is present in 						your hand, please try again." << endl;
				}
			}
		}
	}
}

bool operator==(vector <Card> &a, vector <Card> &b) {
	return a - b == 0;
}

int operator-(vector<Card> &a, vector <Card> &b) {
	Card var;
}

int Card::scoreMelds() {
	deadWood = playerHand;
	Card vari;
	for (auto it = meld1.begin() ; it != meld1.end(); it++) {
		for (auto iter = playerHand.begin(); iter != playerHand.end(); iter++) {
			if (meld1 == playerHand) {
				deadWood.pop_back();
			}
		}
	}
	for (auto it = meld2.begin() ; it != meld2.end(); it++) {
		for (auto iter = playerHand.begin(); iter != playerHand.end(); iter++) {
			if (meld2 == playerHand) {
				deadWood.pop_back();
			}
		}
	}
	for (auto it = meld3.begin() ; it != meld3.end(); it++) {
		for (auto iter = playerHand.begin(); iter != playerHand.end(); iter++) {
			if (meld3 == playerHand) {
				deadWood.pop_back();
			}
		}
	}
	for(auto iter = deadWood.begin(); iter != deadWood.end(); iter++) {
		score = score + vari.pointValue;
	}
	if (score > 10) {
		cout << "You cannot knock you do not have a deadwood total of less than 10!" << 		endl << " You are a dirty cheater! Shame on you!" << endl;
	}
	CdeadWood = computerHand;
		for (auto iter = Cmeld1.begin(); iter != Cmeld1.end(); iter++) {
			for (auto it = computerHand.begin(); it != computerHand.end(); it++) {
				if (Cmeld1 == computerHand) {
				CdeadWood.pop_back();
				}
			}
		}
		for (auto iter = Cmeld2.begin(); iter != Cmeld2.end(); iter++) {
			for (auto it = computerHand.begin(); it != computerHand.end(); it++) {
				if (Cmeld2 == computerHand) {
				CdeadWood.pop_back();
				}
			}
		}
		for (auto iter = Cmeld3.begin(); iter != Cmeld3.end(); iter++) {
			for (auto it = computerHand.begin(); it != computerHand.end(); it++) {
				if (Cmeld3 == computerHand) {
				CdeadWood.pop_back();
				}
			}
		}
		for(auto iter = CdeadWood.begin(); iter != CdeadWood.end(); iter++) {
			Cscore = Cscore + vari.pointValue;
		}
	if (score < 10){
		if (Cscore > score) {
			cout << "The computer scored " << Cscore - score << " points." << endl 				<< " The Computer wins!" << endl;
		}
		if (score > Cscore) {
			cout << "The user scored " << score - Cscore << " points." << endl << " 			The user wins!" << endl;
		}
	}
}
