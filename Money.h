#ifndef MONEY_H
#define MONEY_H
#include <iostream>

class Money {

	private:
		int dollars = 0;
		int cents = 0;
		int all_money = 0;
	public:
		explicit Money();
		explicit Money(const int newDollars, int newCents);
		int setAllMoney();
		bool operator == (const Money &rhs);
		bool operator != (const Money &rhs);
		bool operator < (const Money &rhs);
		bool operator > (const Money &rhs);
		bool operator >= (const Money &rhs);
		bool operator <= (const Money &rhs);
		Money operator + (const Money &rhs);
		Money operator - (const Money &rhs);
		friend std::ostream& operator << (std::ostream &out, const Money &m);



};

#endif
