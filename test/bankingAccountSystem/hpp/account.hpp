#ifndef  __ACCOUNT__
#define  __ACCOUNT__

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "transaction.hpp"


class Account {
public:
	Account(const int& accountNumber, const double& balance, const std::string& accountType);
	virtual void deposit(double amount) = 0;
	virtual void withdraw(double amount) = 0;
	virtual void transfer(Account& destination, double amount) = 0;
	virtual void showBalance() const = 0;
	virtual std::string getAccountType() const = 0;
	
	double getBalance() const;
	std::string getAccount() const;
	int getAccountNumber() const;
	void setBalance(const double balance);

	virtual ~Account() = default;

protected:
	int m_accountNumber;
	double m_balance;
	std::string m_accountType;
	std::vector<Transaction*> m_accountTransactions;
};

#endif // __ACCOUNT__


#ifndef __CHECKINGACCOUNT__
#define __CHECKINGACCOUNT__

#include "transactionManager.hpp"
class CheckingAccount : public Account, public TransactionManager {
public:
	CheckingAccount(const int& accountNumber, const int& balance, const std::string& accountType);

	void deposit(double amount) override;
	void withdraw(double amount) override;
	void transfer(Account& destination, double amount) override;
	void showBalance() const override;
	std::string getAccountType() const override;
	
	double getOverdraftLimit() const;
	void setOverdraftLimit(double limit);

	void logTransaction(const std::string& type, double amount) override;
	void showTransactionHistory() const override;

private:
	double m_overdraftLimit;
};

#endif // __CHECKINGACCOUNT__


#ifndef __SAVINGACCOUNT__
#define __SAVINGACCOUNT__

#include "transactionManager.hpp"
class SavingAccount : public Account, public TransactionManager {
public:
	SavingAccount(const int& accountNumber, const int& balance, const std::string& accountType);

	void deposit(double amount) override;
	void withdraw(double amount) override;
	void transfer(Account& destination, double amount) override;
	void showBalance() const override;
	std::string getAccountType() const override;
	void interestRate();
	
	double getInterestRate() const;
	void setInterestRate(double rate);

	void logTransaction(const std::string& type, double amount) override;
	void showTransactionHistory() const override;

private:
	double m_interestRate;
};

#endif // __SAVINGACCOUNT__



#ifndef __JOINACCOUNT__
#define __JOINACCOUNT__

#include "transactionManager.hpp"
class JointAccount : public Account, public TransactionManager {
public:
	
	JointAccount(const int& accountNumber, const int& balance, const std::string& accountType);
	void deposit(double amount) override;
	void withdraw(double amount) override;
	void transfer(Account& destination, double amount) override;
	void showBalance() const override;
	std::string getAccountType() const override;
	void addCustomer(std::string customerName);
	void showAccounts() const;

	void logTransaction(const std::string& type, double amount) override;
	void showTransactionHistory() const override;

private:
	std::vector<std::string> m_jointOwners;
};

#endif // __JOINACCOUNT__
