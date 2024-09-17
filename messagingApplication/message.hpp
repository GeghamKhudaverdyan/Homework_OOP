#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>
#include <string>

class User;
class Conversation;

class Message {
public:
    Message(User* sender, Conversation* conversation);
    virtual ~Message();
    virtual void displayContent() const = 0;
    virtual std::string getMessageType() const = 0;

private:
    User* m_sender;
    Conversation* m_conversation;
};

#endif // MESSAGE_H
