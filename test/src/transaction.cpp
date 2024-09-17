#include "../hpp/transaction.hpp"

Transaction::Transaction(Account* from, Account* to, double amount, const std::string& transactionType) 
						: m_fromAccount(from), m_toAccount(to), m_amount(amount), m_transactionType(transactionType) {}


void Transaction::log() const {
	std::cout << "Transaction Type: " << m_transactionType << ", Amount: " << m_amount << std::endl;
}

std::string Transaction::getTransactionType() {
    return m_transactionType;
}

double Transaction::getAmount() const {
    return m_amount;
}
