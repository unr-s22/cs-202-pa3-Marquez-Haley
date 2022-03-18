#ifndef MONEY_H
#define MONEY_H

class Money {

	private:
		int dollars;
		int cents;

	public:
		explicit Money();
		explicit Money(const int newDollars, int newCents);
		bool operator== (const Money &m);



};

#endif
