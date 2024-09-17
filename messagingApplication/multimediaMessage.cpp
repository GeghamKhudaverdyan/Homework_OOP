#include "multimediaMessage.hpp"

MultimediaMessage::MultimediaMessage(User* sender, Conversation* conversation, const std::string& filePath, const std::string& m_mediaType)
                                     : Message(sender, conversation), m_filePath(filePath), m_mediaType(m_mediaType) {}

void MultimediaMessage::displayContent() const {
    std::cout << "Multimedia Message: " << m_filePath << " (" << m_mediaType << ")" << std::endl; 
}

std::string MultimediaMessage::getMessageType() const {
    return m_mediaType;
}