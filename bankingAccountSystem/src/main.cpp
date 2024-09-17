#include "../hpp/account.hpp"
#include "../hpp/customer.hpp"
#include "../hpp/transaction.hpp"
#include "../hpp/transactionManager.hpp"

int main () {
	
	CheckingAccount checkA(1111, 1000, "Gegham");
	checkA.showBalance();
	checkA.withdraw(100);
	checkA.showBalance();
	checkA.getAccountType();


	CheckingAccount checkB(2222, 2000, "Checking");
	checkB.showBalance();
	checkB.transfer(checkA, 2200);
	checkB.showBalance();

	SavingAccount saveA(3333, 3000, "Savingy");
	saveA.showBalance();
	saveA.deposit(500);
	saveA.showBalance();
	saveA.interestRate();
	
	std::cout << "----------------------------------------------------------" << std::endl;

	JointAccount j(4444, 4000, "Joint");
	j.addCustomer("Gegham");
	j.addCustomer("Mike");
	j.addCustomer("Gegham");
	j.showAccounts();

	Customer customer("Gegham", "094305848");
	customer.addAccount(&checkA);
	customer.addAccount(&checkB);
	customer.addAccount(&checkA);
	customer.viewAccounts();
	return 0;
}
