#ifndef __ACCOUNT__
#define __ACCOUNT__

class Account {

public:
	Account() = default;
	Account(const std::string& accountNumber, const std::string& name, const double& balance);
	void deposit(const double& dep);
	void withdraw(const double& wit);	
	std::string getAccountNumber() const;
	std::string getName() const;
	int getBalance() const;

private:
	std::string m_accountNumber;
	std::string m_name;
	double m_balance = 0;
}; 

#endif //__ACCOUNT__
