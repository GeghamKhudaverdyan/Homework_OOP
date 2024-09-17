#ifndef __TRANSACTIONMANAGER__
#define __TRANSACTIONMANAGER__

class TransactionManager {
public:
	virtual void logTransaction(const std::string& type, double amount) const;
	virtual void showTransactionHistory() const;
};

#endif // __TRANSACTIONMANAGER__
