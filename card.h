#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Card
{
    public:
	Card();
        Card(string suit, int value, int pointValue);
        void printCard();
	void makeMelds();
	int scoreMelds();
	void dealCards(vector <Card> &d, vector <Card> &ph, vector <Card> &ch);
	void buildDeck(vector <Card> &d);
	void copyVectors(vector <Card> PH, vector <Card> CH);

	char response;
        int value;
        int pointValue;
        string suit;
        string name;
	string meldSize;
	string suitRead;
	int valueRead;
	int pointValueRead;
	int meldNum;
	int Cscore = 0;
	int score = 0;
	string meldReader;
	vector <Card> meld1;
	vector <Card> meld2;
	vector <Card> meld3;
	vector <Card> Cmeld1;
	vector <Card> Cmeld2;
	vector <Card> Cmeld3;
	vector <Card> deadWood;
	vector <Card> CdeadWood;
	vector <Card> playerHand;
	vector <Card> computerHand;
};

bool operator==(vector <Card> &a, vector <Card> &b);
//int operator-(vector <Card> &a, vector <Card> &b);
#endif
