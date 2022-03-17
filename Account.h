#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include "Money.h"

class Account{
public:
    int dollars;
    int cents;
    Account(){
        Money(int x,int y);
        dollars=x;
        cents=y;
    }

    void makeDeposit(Money(int x,int y));

    void makeWithdrawals(Money(int x,int y));
};









#endif