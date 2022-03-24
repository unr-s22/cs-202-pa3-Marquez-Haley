#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include "Money.h"
#include <vector>

class Account : public Money{
    Money m;
private:
    bool balanceUpdate = false;
    std::vector<int> deposits;
    std::vector<int> withdrawals;
    std::vector<int> money;
    int dollars=0, cents=0, balance=0;
    int numOfDeposits=0, numOfWithdrawals=0;
public:
    Account(int x,int y){
        balance=Money(x,y); //Don't know what to do here
    }

    void makeDeposit(Money(int ,int));

    void makeWithdrawals(Money(int ,int));

    void account();
};

#endif
