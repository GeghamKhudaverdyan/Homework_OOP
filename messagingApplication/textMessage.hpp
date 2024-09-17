#ifndef TEXTMESSAGE_H
#define TEXTMESSAGE_H

#include "message.hpp"

class TextMessage : public Message {
public:
    TextMessage(User* sender, Conversation* conversation, const std::string& content);
    void displayContent() const override;
    std::string getMessageType() const override;

private:
    std::string m_content;
};

#endif // TEXTMESSAGE_H