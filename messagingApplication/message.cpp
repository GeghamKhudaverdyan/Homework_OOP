#include "message.hpp"

Message::Message(User* sender, Conversation* conversation) : m_sender(sender), m_conversation(conversation) {}
Message::~Message() = default;