#ifndef MULTIMEDIAMESSAGE_H
#define MULTIMEDIAMESSAGE_H

#include "message.hpp"

class MultimediaMessage : public Message {
public:
    MultimediaMessage(User* sender, Conversation* conversation, const std::string& filePath, const std::string& m_mediaType);
    void displayContent() const override;
    std::string getMessageType() const override;

private:
    std::string m_filePath;
    std::string m_mediaType;
};

#endif // MULTIMEDIAMESSAGE_H