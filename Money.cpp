#include "Money.h"

Money::Money(){}

Money::Money(const int newDollars, int newCents):
dollars{newDollars}, cents{newCents}{
	setAllMoney();
}

int Money::setAllMoney(){
	all_money = (dollars * 100) + cents;
}

bool Money::operator == (const Money &rhs){	
	return all_money == rhs.all_money;
}

bool Money::operator != (const Money &rhs){
	return !(all_money == rhs.all_money);
}

bool Money::operator < (const Money &rhs){
	return all_money < rhs.all_money;
}

bool Money::operator > (const Money &rhs){
	return all_money > rhs.all_money;
}

bool Money::operator >= (const Money &rhs){
	return all_money > rhs.all_money || all_money == rhs.all_money;
}

bool Money::operator <= (const Money &rhs){
	return all_money < rhs.all_money || all_money == rhs.all_money;
}
	
Money Money::operator + (const Money &rhs){

	Money sum;
	sum.all_money = all_money + rhs.all_money;
	return sum;
}

Money Money::operator - (const Money &rhs){

	Money diff;
	diff.all_money = all_money - rhs.all_money;
	
	return diff;
}

std::ostream& operator << (std::ostream &out, const Money &m){

	out << "$" << (m.all_money * 0.01) << std::endl;
	return out;
}
	


