#include "Money.h"

Money::Money(){}

Money::Money(const int newDollars, int newCents):
dollars{newDollars}, cents{newCents}{
	setAllCents();
}

int Money::setAllCents(){
	all_cents = (dollars * 100) + cents;
}

bool Money::operator == (const Money &rhs){	
	return all_cents == rhs.all_cents;
}

bool Money::operator != (const Money &rhs){
	return !(all_cents == rhs.all_cents);
}

bool Money::operator < (const Money &rhs){
	return all_cents < rhs.all_cents;
}

bool Money::operator > (const Money &rhs){
	return all_cents > rhs.all_cents;
}

bool Money::operator >= (const Money &rhs){
	return all_cents > rhs.all_cents || all_cents == rhs.all_cents;
}

bool Money::operator <= (const Money &rhs){
	return all_cents < rhs.all_cents || all_cents == rhs.all_cents;
}
	
Money Money::operator + (const Money &rhs){

	Money sum;
	sum.all_cents = all_cents + rhs.all_cents;
	return sum;
}

Money Money::operator - (const Money &rhs){

	Money diff;
	diff.all_cents = all_cents - rhs.all_cents;
	
	return diff;
}

std::ostream& operator << (std::ostream &out, const Money &m){

	out << "$" << (m.all_cents * 0.01) << std::endl;
	return out;
}
	


