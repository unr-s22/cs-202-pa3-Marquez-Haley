#include <iostream>
#include "Account.h"
#include <vector>

bool balanceUpdate = false;
std::vector<int> Money;
int dollars=0, cents=0;

void makeDeposit(){
    std::cout << "How much money do you want to deposit: ";
    std::cin >> dollars.cents;
    Money.push_back (Money(dollars.cents));
    balanceUpdate=true;
}

void makeWithdrawals(){
    std::cout << "How much money do you want to withdrawal: ";
    std::cin >> dollars.cents;
    Money.push_back (Money(dollars.cents));
    balanceUpdate=true;
}


while (balanceUpdate=true){
    std::cout << "The balance needs to be updated." << std:endl;
    //recalculate balance

}