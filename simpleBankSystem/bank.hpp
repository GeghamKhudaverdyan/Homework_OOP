#ifndef __BANK__
#define __BANK__

#include <iostream>
#include <vector>
#include "account.hpp"

class Bank {
public:	
	void createNewAccount(const std::string& accountNumber, const std::string& name, const double& balance);
	Account* findAccount(const std::string& accountNumber);
	void depositMoney(const std::string& accountNumber, const double& dep);
	void withdrawMoney(const std::string& accountNumber, const double& wid);
	void displayAccountDetails(const std::string& accountNumber);

private:
	std::vector<Account> accounts;
};

#endif //__BANK__
