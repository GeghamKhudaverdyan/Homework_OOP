#include "../hpp/customer.hpp"

Customer::Customer(const std::string& name, const std::string& contactInfo)
				  : m_name(name), m_contactInfo(contactInfo) {}

void Customer::addAccount(Account* account) {
	for(int i = 0; i < m_accounts.size(); ++i) {
		if(m_accounts[i]->getAccountNumber() == account->getAccountNumber()) {
			std::cout << "That account alrady added. " << std::endl;
			return;
		}
	}
	m_accounts.push_back(account);
	std::cout << " EVERYTHING IS OKEY " << std::endl;
}

void Customer::viewAccounts() const {
	std::cout << "About " << m_name << "'s accounts:" << std::endl;
	for(int i = 0; i < m_accounts.size(); ++i) {
			std::cout << i + 1 << ". Account info: ";
			m_accounts[i]->showBalance();
	}
}

void Customer::viewTransactionHistory() const {
	
}
