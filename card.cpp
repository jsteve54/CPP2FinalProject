#include "card.h"
#include <math.h>
#include <sstream>
#include <iostream>

Card::Card (string s, int v, int pv) {
    suit = s;
    value = v;
    pointValue = pv;
    name = "";
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