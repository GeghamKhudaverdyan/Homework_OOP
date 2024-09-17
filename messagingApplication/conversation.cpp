#include "conversation.hpp"

void  Conversation::addMessage(Message* message) {
    m_messageHistory.push_back(message);
}

void Conversation::addUser(User* user) {
    m_participants.push_back(user);
}

std::vector<Message*> Conversation::getMessages() const {
    return m_messageHistory;
}