#include "card.h"
#include <math.h>
#include <string>
#include <iostream>

Card::Card (string s, int v, int pv) {
    suit = s;
    value = v;
    pointValue = pv;
}