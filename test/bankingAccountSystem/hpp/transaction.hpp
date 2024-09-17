#ifndef __TRANSACTION__
#define __TRANSACTION__

//#include "account.hpp"

class Transaction {	
	Transaction(Account* from, Account* to, double& amount, std::string& transactionType);
	void log();

	void logTransaction(const std::string& type, double amount) override;
	void showTransactionHistory() const override;

private:
	Account* m_fromAccount;
	Account* m_toAccount;
	double m_amount;
	std::string m_transactionType;
};

#endif // __TRANSACTION__
