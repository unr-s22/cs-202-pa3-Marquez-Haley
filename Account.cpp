#include <iostream>
#include "Account.h"
#include <vector>

Account::Account(const Money m): money(m){}

void Account::makeDeposit(Money money){
    deposits.push_back(money);
    balanceUpdate = true;
}

void Account::makeWithdrawals(Money money){
//add what I did in make deposits function
}

void Account::recalculateBalance(Money money){
	if (balanceUpdate == true){
	auto sum_deposits = std::accumulate(deposits.begin(), deposits.end(), money);
	auto sum_withdrawals = std::accumulate(withdrawals.begin(), withdrawals.end(), money);
	money = (money + sum_deposits - sum_withdrawals);
	}
}

std::string Account::accountToString(){
	std::stringstream s;
	s << "Account Details" << std::endl;
	s << "--------------------------" << std::endl;
	s << "Balance: " << money << std::endl;
	s << "Number of Deposits: " << deposits.size() << std::endl;
	s << "--------------------------" << std::endl;
	for (int i = 0; i < deposits.size(); i++){
		s << "(" << i + 1 << ")" << deposits[i] << std::endl;
	}
	s << "--------------------------" << std::endl;
	//add the withdrawls part
	return s.str();
}

std::ostream &operator << (std::ostream &out, Account &account){
	out << account.accountToString();
	return out;
}

