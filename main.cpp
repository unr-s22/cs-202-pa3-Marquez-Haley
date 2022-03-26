#include <iostream>
#include "Money.h"
#include "Account.h"


int main(){
	Money m(300,23);
	Account a(m);
	Money d1(200,00);
	a.makeDeposit(d1);
	a.recalculateBalance(m);
	std::cout << a << std::endl;

	return 0;
}
