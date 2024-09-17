#ifndef __TRANSACTION__
#define __TRANSACTION__

#include "account.hpp"
#include "transactionManager.hpp"

class Transaction {
public:
	Transaction(Account* from, Account* to, double amount, const std::string& transactionType);
	void log() const;
	std::string getTransactionType();
    double getAmount() const;

private:
	Account* m_fromAccount;
	Account* m_toAccount;
	double m_amount;
	std::string m_transactionType;
};

#endif // __TRANSACTION__
