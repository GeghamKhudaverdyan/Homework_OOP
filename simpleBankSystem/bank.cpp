#include "bank.hpp"

void Bank::createNewAccount(const std::string& accountNumber, const std::string& name, const double& balance) {
	accounts.emplace_back(accountNumber, name, balance);
}

Account* Bank::findAccount(const std::string& accountNumber) {
	for(std::vector<Account>::iterator it = accounts.begin(); it != accounts.end(); ++it) {
		if(it->getAccountNumber() == accountNumber) {
			return &(*it);	
		}
	}

	std::cout << "Account not found." << std::endl;
        return nullptr;
}

void Bank::depositMoney(const std::string& accountNumber, const double& dep) {
	Account* acc = Bank::findAccount(accountNumber);
	if(acc){
		acc->deposit(dep);
	}
}

void Bank::withdrawMoney(const std::string& accountNumber, const double& wid) {
	Account* acc = Bank::findAccount(accountNumber);
	if(acc) {
		acc->withdraw(wid);
	}
}

void Bank::displayAccountDetails(const std::string& accountNumber) {
    Account* acc = Bank::findAccount(accountNumber);
    if (acc) {
        std::cout << "Account number " << accountNumber << "'s name is " 
                  << acc->getName() << " and balance is " << acc->getBalance() 
                  << std::endl;
    } else {
        std::cout << "Account not found." << std::endl;
    }
}
