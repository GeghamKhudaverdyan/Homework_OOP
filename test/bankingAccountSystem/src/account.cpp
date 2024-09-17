#include "../hpp/account.hpp"

Account::Account(const int& accountNumber, const double& balance, const std::string& accountType) 
				: m_accountNumber(accountNumber), m_balance(balance > 0 ? balance : throw std::invalid_argument("Negative numbers are not allowed:")), m_accountType(accountType) {}

double Account::getBalance() const {
	return m_balance;
}

std::string Account::getAccount() const {
	return m_accountType;
}

void Account::setBalance(const double balance) {
	m_balance = balance;
}

int Account::getAccountNumber() const {
	return m_accountNumber;
}

//////////////////////////////////////////CheckingAccount////////////////////////////////////////////////

CheckingAccount::CheckingAccount(const int& accountNumber, const int& balance, const std::string& accountType) 
								: Account(accountNumber, balance, accountType) {
									m_overdraftLimit = m_balance / 4;
								}

void CheckingAccount::deposit(double amount) {
	if(amount > 0) {
		Transaction* ptr = new Transaction(nullptr, this, amount, "deposit");
		m_balance += amount;
		m_accountTransactions.push_back(ptr);
	} else {
		throw std::invalid_argument("Negative numbers are not allowed:");
		return;
	}
}

void CheckingAccount::withdraw(double amount) {
	if(amount > 0 && amount <= m_balance + m_overdraftLimit) {
		Transaction* ptr = new Transaction(this, nullptr, amount, "withdraw");
		m_balance -= amount;
		m_accountTransactions.push_back(ptr);
		if(m_balance < 0) {
			m_overdraftLimit += m_balance;
			m_balance = 0;
		}
	} else {
		throw std::invalid_argument("Withdrawal amount exceeds balance and overdraft limit.");
		return;
	}
}

void CheckingAccount::transfer(Account& destination, double amount) {
	if(amount > 0 && amount <= m_balance + m_overdraftLimit) {
		Transaction* ptr = new Transaction(this, &destination, amount, "Transaction");	
		m_balance -= amount;
		destination.setBalance(destination.getBalance() + amount);
		m_accountTransactions.push_back(ptr);
	} else {
		throw std::invalid_argument("Transfer failed: Insufficient balance:");
		return;
	}

}

void CheckingAccount::showBalance() const {
	std::cout << "You have: " << m_balance << " amount in your balance. " << std::endl;
	std::cout << "You have: " << m_overdraftLimit << " overdraft. " << std::endl;
}

std::string CheckingAccount::getAccountType() const {
	return m_accountType;
}

double CheckingAccount::getOverdraftLimit() const {
	return m_overdraftLimit;
}

void CheckingAccount::setOverdraftLimit(double limit) {
	m_overdraftLimit = limit;
}

void CheckingAccount::logTransaction(const std::string& type, double amount) {
	for(int i = 0; i < m_accountTransactions.size(); ++i) {
		if(m_accountTransactions[i]->getAccount() == type &&  m_accountTransactions[i]->getBalance() == amount) {
			 m_accountTransactions[i]->log();
		}
	}
	std::cout << "Transaction not found." << std::endl;
}

void CheckingAccount::showTransactionHistory() const {
	for(int i = 0; i < m_accountTransactions.size(); ++i) {
		m_accountTransactions[i]->log();
	}
}

/////////////////////////////////////////////////////////SavingAccount/////////////////////////////////////////////////////

SavingAccount::SavingAccount(const int& accountNumber, const int& balance, const std::string& accountType) 
							: Account(accountNumber, balance, accountType) {
								m_interestRate = 5,5;
							}

void SavingAccount::deposit(double amount) {
	
	if(amount > 0) {
		Transaction* ptr = new Transaction(nullptr, this, amount, "deposit");
		m_accountTransactions.push_back(ptr);
		m_balance += amount;
	} else {
		throw std::invalid_argument("Negative numbers are not allowed:");
	}
}

void SavingAccount::withdraw(double amount) {
	if(amount > 0 && amount <= m_balance) {
		Transaction* ptr = new Transaction(this, nullptr, amount, "withdraw");
		m_balance -= amount;
		m_accountTransactions.push_back(ptr);
	} else {
		throw std::invalid_argument("Insufficient funds:");
	}
}

void SavingAccount::transfer(Account& destination, double amount) {
	if(amount > 0 && amount <= m_balance) {
		m_balance -= amount;
		destination.setBalance(destination.getBalance() + amount);
	} else {
		throw std::invalid_argument("Transfer failed: Insufficient balance");
	}
}

void SavingAccount::showBalance() const {	
	std::cout << "You have: " << m_balance << " amount in your balance." << std::endl;
	std::cout << "Now rate is : " << m_interestRate << std::endl;
}

std::string SavingAccount::getAccountType() const {
	return m_accountType;
}

void SavingAccount::interestRate() {
	double interestR = m_balance * (m_interestRate / 100);
	m_balance += interestR;
    std::cout << "Interest added: " << interestR << std::endl;
	std::cout << "New Balance after interest: " << m_balance << std::endl;
}

double SavingAccount::getInterestRate() const {
	return m_interestRate;
}

void SavingAccount::setInterestRate(double rate) {
	m_interestRate = rate;
}

void SavingAccount::logTransaction(const std::string& type, double amount) {

}

void SavingAccount::showTransactionHistory() const {

}


//////////////////////////////////////////////////////////JointAccount////////////////////////////////////////////////////////////////////////////


JointAccount::JointAccount(const int& accountNumber, const int& balance, const std::string& accountType)
						: Account(accountNumber, balance, accountType) {}

void JointAccount::deposit(double amount) {
	if(amount > 0) {
		m_balance += amount;
	} else {
		throw std::invalid_argument("Negative numbers are not allowed:");
	}
}

void JointAccount::withdraw(double amount) {
	if(amount > 0 && amount <= m_balance) {
		m_balance -= amount;
	} else {
		throw std::invalid_argument("Insufficient funds:");
	}
}

void JointAccount::transfer(Account& destination, double amount) {
	if(amount > 0 && amount <= m_balance) {
		m_balance -= amount;
		destination.setBalance(destination.getBalance() + amount);
	} else {
		throw std::invalid_argument("Transfer failed: Insufficient balance");
	}
}

void JointAccount::showBalance() const {
	std::cout << "You have: " << m_balance << " amount in your balance." << std::endl;
}

std::string JointAccount::getAccountType() const {
	return m_accountType;
}

void JointAccount::addCustomer(std::string customerName) {
	for(int i = 0; i < m_jointOwners.size(); ++i) {
		if(m_jointOwners[i] == customerName) {
			std::cout << "Customer already added." << std::endl;
			return;
		}
	}

	m_jointOwners.push_back(customerName);
	std::cout << "Added customer: " << customerName << " to Joint Account." << std::endl;

}

void JointAccount::showAccounts() const {
	for(int i = 0; i < m_jointOwners.size(); ++i) {
		std::cout << i + 1 << "Account owner name is: " << m_jointOwners[i] << std::endl;
	}
}

void SavingAccount::logTransaction(const std::string& type, double amount) {

}

void SavingAccount::showTransactionHistory() const {

}


