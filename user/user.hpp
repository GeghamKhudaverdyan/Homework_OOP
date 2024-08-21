#ifndef __USER__
#define __USER__

#include <iostream>
#include <string>

class User {
public:

	//PARAMETERIZED CONSTRUCTOR
	User() = default;
	User(const std::string& email, const std::string& password, const std::string& fullname);

	//GETTERS
	const std::string& getEmail()    const;
	const std::string& getPassword() const;
	const std::string& getFullname() const;

	//SETERS
	void setEmail(const std::string& email);
	void setPassword(const std::string& password);
	void setFullname(const std::string& fullname);

	//FUNCTIONALITY
	void changePassword(const std::string& oldPassworld);
	void updateEmail(const std::string& oldPassworld);

private:
	std::string m_email;
	std::string m_password;
	std::string m_fullname;
};

#endif // __USER__
