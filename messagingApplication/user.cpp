#include "user.hpp"
#include "conversation.hpp"

void User::createConversation(const User& user) {
    
}

void User::sendMessage(Message* message, Conversation* conversation) {
    conversation->addMessage(message);
}

void User::receiveMessage(Message* message) {
    //std::cout << "Received a new message of type " << message->getMessageType() << std::endl;
    //message->displayContent();
}

void User::manageSettings() {
    int choice;
    std::string newName;
    std::string newContactInfo;

    do {
        std::cout << "Manage User Settings:\n";
        std::cout << "1. Change Name\n";
        std::cout << "2. Change Contact Info\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1:
                std::cout << "Enter new name: ";
                std::getline(std::cin, newName);
                m_name = newName;
                std::cout << "Name updated to: " << m_name << std::endl;
                break;

            case 2:
                std::cout << "Enter new contact info: ";
                std::getline(std::cin, newContactInfo);
                m_contactInfo = newContactInfo;
                std::cout << "Contact Info updated to: " << m_contactInfo << std::endl;
                break;

            case 3:
                std::cout << "Exiting settings.\n";
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 3);
}

std::vector<Conversation*> User::getConversations() const {
    return m_conversations;
}