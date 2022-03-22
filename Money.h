#ifndef MONEY_H
#define MONEY_H
#include <iostream>

class Money {

	private:
		int dollars = 0;
		int cents = 0;
	public:
		explicit Money();
		explicit Money(const int newDollars, int newCents);
		friend bool operator == (const Money &m1, const Money &m2);
		friend bool operator != (const Money &m1, const Money &m2);
		friend bool operator < (const Money &m1, const Money &m2);
		friend bool operator > (const Money &m1, const Money &m2);
		friend bool operator >= (const Money &m1, const Money &m2);
		friend bool operator <= (const Money &m1, const Money &m2);
		friend Money operator + (const Money &m1, const Money &m2);
		friend Money operator - (const Money &m1, const Money &m2);
		friend std::ostream& operator << (std::ostream &out, const Money &m);



};

#endif
