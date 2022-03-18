#include "Money.h"

Money::Money(){}

Money::Money(const int newDollars, int newCents):
dollars{newDollars}, cents{newCents}{}

bool Money::operator== (const Money &m){
	if (dollars == m.dollars && cents == m.cents){
		return 1;
	}
	else {
		return 0;
	}
}
