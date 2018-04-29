#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

using namespace std;

class Card
{
    public:
        Card(string suit, int value, int pointValue);

        int value;
        int pointValue;
        string suit;
};

#endif