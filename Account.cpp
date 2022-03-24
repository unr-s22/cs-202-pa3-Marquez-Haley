#include <iostream>
#include "Account.h"
#include <vector>

void makeDeposit(Money(int dollars, int cents)){ //Not sure if the argument is used correctly
    numOfDeposits++; //error
    std::cout << "How much money do you want to deposit: ";
    std::cin >> dollars.cents; //you can use the all_cents integer i created so its easier so Money.all_cents
    deposits.push_back (Money(dollars,cents)); //error
    balanceUpdate=true; //error
}

auto sum_deposits = std::accumulate(deposits.begin(),deposits.end(),m); //error

void makeWithdrawals(Money(int dollars, int cents)){ //Not sure if the argument is used correctly
    numOfWithdrawals++; //error
    std::cout << "How much money do you want to withdrawal: ";
    std::cin >> dollars.cents;
    //std::cin >> Money.all_cents;
    withdrawals.push_back (Money(dollars,cents)); //error
    balanceUpdate=true; //error
}

auto sum_withdrawals = std::accumulate(withdrawals.begin(),withdrawals.end(),m); //error

while (balanceUpdate=true){
    balance = balance + sum_deposits - sum_withdrawals;
}

void account(){
    std::cout << "Account Details" << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Current Balance: $" << balance << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Number of Deposits: " << numOfDeposits << std::endl;
    std::cout << "--------------------" << std::endl;
    while (numOfDeposits!=0){
        for (int i=1;i<numOfDeposits;i++){
            std::cout << "(" << i << ")" << " $" << deposits(i) << std::endl;
        }
    }
    std::cout << "--------------------------" << std::endl;
    std::cout << "Number of Withdrawals: " << numOfWithdrawals << std::endl;
    std::cout << "--------------------------" << std::endl;
    while (numOfWithdrawals!=0){
        for (int i=1;i<numOfWithdrawals;i++){
            std::cout << "(" << i << ")" << " $" << withdrawals(i) << std::endl;
        }
    }
}
