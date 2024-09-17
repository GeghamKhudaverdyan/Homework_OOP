#include "textMessage.hpp"

TextMessage::TextMessage(User* sender, Conversation* conversation, const std::string& content) : Message(sender, conversation), m_content(content) {}

void TextMessage::displayContent() const {
    std::cout << "Content is: " << m_content << std::endl;
}

std::string TextMessage::getMessageType() const {
    return "Text";
}