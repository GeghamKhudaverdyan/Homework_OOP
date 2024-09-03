#ifndef __ENGINE__
#define __ENGINE__

#include <string>

class Engine {
public:
	Engine() = default;
	//Engine(const std::string& name = "Turbo", int oil = 5);
	Engine(const std::string& name, const int& oil);

	void setName(const std::string& name);
	void setOil(const int& oil);
	
	std::string getName() const;
	int getOil() const;

private:
	std::string m_name;
	int m_oil;
};

#endif // __ENGINE__
