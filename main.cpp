#include <iostream>
#include "Money.h"
#include "Account.h"


int main(){
	Money m(300,23);
	Money d1(200,60);
	Money d2(300,24);
	Money d3(501,22);
	Money w1(300,10);
	Money w2(201,34);
	Account account(m);
	
	std::cout << account << std::endl;
	account.makeDeposit(d1);
	account.makeDeposit(d2);
	account.makeDeposit(d3);
	std::cout << account << std::endl;
	account.makeWithdrawals(w1);
	account.makeWithdrawals(w2);
	std::cout << account << std::endl;

	if (m == d1){
		std::cout << "They are the same amount." << std::endl;
	}
	else {
		std::cout << "They are not the same amount." << std::endl;
	}

//!=

//>

//<

//<=

//>=

	return 0;
}


