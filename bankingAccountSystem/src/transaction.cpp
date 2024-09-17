#include "../hpp/transaction.hpp"

Transaction::Transaction(Account* from, Account* to, double amount, const std::string& transactionType) 
						: m_fromAccount(from), m_toAccount(to), m_amount(amount), m_transactionType(transactionType) {}


void Transaction::log() const {
	std::cout << "Transaction Type: " << m_transactionType << ", Amount: " << m_amount << std::endl;
}

void Transaction::logTransaction(const std::string& type, double amount) const {
	std::cout << "Transaction Type: " << type << ", Amount: " << amount << std::endl;
}

void Transaction::showTransactionHistory() const {
	std::cout << "Transaction Type: " << m_transactionType << ", Amount: " << m_amount << std::endl;
}
