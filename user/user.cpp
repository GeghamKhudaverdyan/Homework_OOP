#include "user.hpp"

bool passwordCheck(const std::string& password) {
	int passwordLength = password.length();
        if(passwordLength < 4) {
                std::cout << "Please follow the rules․ password must have more "
                          << "than 4 characters" << std::endl;
                return false;
        }

        int flag1 = 0;
        int flag2 = 0;

        for(int i = 0; i < passwordLength; ++i) {
                if(password[i] >= 'a' && password[i] <= 'z') {
                        ++flag1;
                }
                if((password[i] >= 'A' && password[i] <= 'Z')) {
                        ++flag2;
                }
        }
        if(flag1 > 0 && flag2 > 0) {
                return true;
        } else {
                std::cout << "Please follow the rules․ password must have "
                          << "uppercase snd lowercase laters. "<< std::endl;
                return false;
        }
}

User::User(const std::string& email, const std::string& password, const std::string& fullname) :
					     		  m_email(email), m_fullname(fullname) {
			
	if(passwordCheck(password)) {
		m_password = password;
	} else {
		exit(0);
	}
}

const std::string& User::getEmail() const {return m_email;}
const std::string& User::getPassword() const {return m_password;}
const std::string& User::getFullname() const {return m_fullname;}

void User::setEmail(const std::string& email) {m_email = email;}
void User::setPassword(const std::string& password) {
	if(passwordCheck(password)) {
		m_password = password;
	}
}	

void User::setFullname(const std::string& fullname) {m_fullname = fullname;}



void User::changePassword(const std::string& oldPassword) {
	if(m_password != oldPassword) {
		std::cout << "Your old password is not correct, please write true password." << std::endl;
		return;
	}
	std::cout << "Create your new password" << std::endl;
	std::cout << "	 Write new password" << std::endl;
	std::string newPassword1;
	std::cin >> newPassword1;
	std::cout << "Repeat new password" << std::endl;
	std::string newPassword2;
	std::cin >> newPassword2;
	if(newPassword1 != newPassword2) {
		std::cout << "Your password is not correct, please be more careful. " << std::endl;
		return;
	}
	m_password = newPassword1;
	std::cout << "Your password successfully changed." << std::endl;
}

void User::updateEmail(const std::string& oldPassword) {
	if(m_password != oldPassword) {
                std::cout << "Your old password is not correct, please write true password." << std::endl;
                return;
        }
	
	std::cout << "Create your new email" << std::endl;
        std::cout << "   Write new email" << std::endl;
        std::string newEmail;
        std::cin >> newEmail;

	m_email = newEmail;
        std::cout << "Your email successfully changed." << std::endl;
}




































