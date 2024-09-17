#ifndef  __CUSTOMER__
#define  __CUSTOMER__

#include <string>
#include <vector>
#include "account.hpp"

class Customer {
public:
	Customer(const std::string& name, const std::string& contactInfo);

	void addAccount(Account* account);
	void viewAccounts() const;
	void viewTransactionHistory() const;
	
	Customer(const Customer&) = delete;
	Customer(Customer&&) = delete;

private:
	std::string m_name;
	std::string m_contactInfo;
	std::vector<Account*> m_accounts;
};

#endif // __CUSTOMER__
