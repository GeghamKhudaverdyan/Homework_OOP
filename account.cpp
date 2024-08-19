#include <iostream>
#include "account.hpp"

Account::Account(const std::string& accountNumber, const std::string& name, const double& balance) : 
		m_accountNumber(accountNumber), m_name(name), m_balance(balance) {}


void Account::deposit(const double& dep) {
	
	if(dep < 0) {
		std::cout << "Deposit amount cannot be negative" << std::endl;
		return;
	}
	m_balance += dep;
}

void Account::withdraw(const double& wit) {
	if(wit < 0 || wit > m_balance) {
		std::cout << "Error: Invalid withdrawal amount" << std::endl;		
		return;
	}
	m_balance -= wit;
}

std::string Account::getAccountNumber() const {
	return m_accountNumber;
}

std::string Account::getName() const {
	return m_name;
}

int Account::getBalance() const {
	return m_balance;
}
