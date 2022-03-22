#include "Money.h"

Money::Money(){}

Money::Money(const int newDollars, int newCents):
dollars{newDollars}, cents{newCents}{}

bool operator == (const Money &m1, const Money &m2){
	if (m1.dollars == m2.dollars && m1.cents == m2.cents){
		return 1;
	}
	else {
		return 0;
	}
}
bool operator != (const Money &m1, const Money &m2){
	if (!(m1 == m2)){
		return 1;
	}
	else {
		return 0;
	}
}

bool operator < (const Money &m1, const Money &m2){
	if (m1.dollars < m2.dollars){
		return 1;
	}
	else if (m1.dollars == m2.dollars && m1.cents < m2.cents){
		return 1;
	}
	else {
		return 0;
	}
}

bool operator > (const Money &m1, const Money &m2){
	if (!(m1 < m2)){
		return 1;
	}
	else {
		return 0;
	}
}

bool operator >= (const Money &m1, const Money &m2){
	if (!(m1 < m2) || m1 == m2){
		return 1;
	}
	else {
		return 0;
	}
}

bool operator <= (const Money &m1, const Money &m2){
	if (!(m1 > m2) || m1 == m2){
		return 1;
	}
	else {
		return 0;
	}
}
	
Money operator + (const Money &m1, const Money &m2){
	
	Money result;
	
	result.dollars = m1.dollars + m2.dollars;
	result.cents = m1.cents + m2.cents;
	
	return result;
}

Money operator - (const Money &m1, const Money &m2){
	
	Money result;
	
	result.dollars = m1.dollars - m2.dollars;
	result.cents = m1.cents - m2.cents;
	
	return result;
}

std::ostream& operator << (std::ostream &out, const Money &m){

	out << "$" << m.dollars << "." << m.cents;
	return out;
}
	


