#include <iostream>
#include "account.hpp"
#include "bank.hpp"

int main() {
	Bank bank;
	std::string accountNumber;
	std::string name;
	double amount;
	int swCase = 0;
	
	while(swCase != 5) {

		std::cout << std::endl;	
		std::cout << "Bank Management System" << std::endl;
        	std::cout << "1. Create Account" << std::endl;
	        std::cout << "2. Deposit Money" << std::endl;
        	std::cout << "3. Withdraw Money" << std::endl;
        	std::cout << "4. Display Account Details" << std::endl;
        	std::cout << "5. Exit" << std::endl;
	        std::cout << "Enter your choice: ";
        	std::cin >> swCase;

		switch(swCase) {
			case 1:
			      std::cout << "Enter account number:" << std::endl;
			      std::cin >> accountNumber;
			      std::cout << "Enter account holder's name:" << std::endl;
			      std::cin >> name;
			      std::cout << "Enter initial balance:" << std::endl;
			      std::cin >> amount;
			      bank.createNewAccount(accountNumber, name, amount);
			      break;

			case 2:
			      std::cout << "Enter account number:" << std::endl;
                              std::cin >> accountNumber;
			      std::cout << "Enter deposit amount:" << std::endl;
			      std::cin >> amount;
			      bank.depositMoney(accountNumber, amount);
			      break;	

			case 3:
			      std::cout << "Enter account number:" << std::endl;
                              std::cin >> accountNumber;
			      std::cout << "Enter withdraw amount:" << std::endl;
                              std::cin >> amount;
			      bank.withdrawMoney(accountNumber, amount);
			      break;

			case 4:
			      std::cout << "Enter account number:" << std::endl;
                              std::cin >> accountNumber;
			      bank.displayAccountDetails(accountNumber);
			      break;

			default:
			      std::cout << "Invalid choice. Please try again." << std::endl;
			      break;	
		}
	}

	return 0;
}
