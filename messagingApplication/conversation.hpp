#ifndef CONVERSATION_H
#define CONVERSATION_H

#include <vector>

class User;
class Message;

class Conversation {
public:
    Conversation() = default;
    void addUser(User* user);
    void addMessage(Message* message);
    std::vector<Message*> getMessages() const;

private:
    std::vector<User*> m_participants;
    std::vector<Message*> m_messageHistory;
};

#endif // CONVERSATION_H