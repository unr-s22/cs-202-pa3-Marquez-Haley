#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include "Money.h"
#include <vector>
#include <numeric>
#include <sstream>

class Account {

private:
	Money money;
	bool balanceUpdate = false;
	std::vector<Money> deposits;
	std::vector<Money> withdrawals;
	std::string accountToString();
    Money balance = Money(0,0);
public:
    Account(const Money m);

    void makeDeposit(Money money);

    void makeWithdrawals(Money money);

	void recalculateBalance(Money money);

    friend std::ostream &operator << (std::ostream &out, Account &account);
};

#endif
