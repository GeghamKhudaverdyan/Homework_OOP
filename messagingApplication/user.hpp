#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>

class Message;
class Conversation;

class User {
public:

    void createConversation(const User& user);
    void sendMessage(Message* message, Conversation* conversation);
    void receiveMessage(Message* message);
    void manageSettings();
    std::vector<Conversation*> getConversations() const;

private:
    std::string m_name;
    std::string m_contactInfo;
    std::vector<Conversation*> m_conversations;
};

#endif // USER_H