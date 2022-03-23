#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include "Money.h"


class Account:public Money{
public:
    Account(int x,int y){
        int balance=0;
        balance=Money(x,y);
    }

    void makeDeposit(Money(int ,int));

    void makeWithdrawals(Money(int ,int));
};

#endif
