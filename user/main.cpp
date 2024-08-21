#include <iostream>
#include "user.hpp"

int main() {

	std::string email;
	std::cout << "Enter your email: " << std::endl;
	std::cin >> email;

	std::string password;
	std::cout << "Enter your password(password must contain 4 laters, "
	       	  << "uppercase snd lowercase): " << std::endl;
	std::cin >> password;

	std::string fullname;
	std::cout << "Enter your fullname: " << std::endl;
	std::cin >> fullname;
	
	User user(email, password, fullname);
	
	std::cout << user.getPassword() << std::endl;	
	std::cout << "If you want to change your password, write the oldest password։ " << std::endl;
	std::string oldPassword;
	std::cin >> oldPassword;
	user.changePassword(oldPassword);
	std::cout << user.getPassword() << std::endl;	


	std::cout << user.getEmail() << std::endl;	
	std::cout << "If you want to change your email, write the oldest password։ " << std::endl;
	std::cin >> oldPassword;
	user.updateEmail(oldPassword);
	std::cout << user.getEmail() << std::endl;	
	
	//User us;
	//us.setPassword(password);
	return 0;
}
