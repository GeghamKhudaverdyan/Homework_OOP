#ifndef __ENGINE__
#define __ENGINE__

class Engine {
public:
	Engine() = default;
	Engine(const double& temperature, const double& oil);  
	
private:
	double m_temperature = 0;
	double m_oil = 0;
};

#endif //__ENGINE__
