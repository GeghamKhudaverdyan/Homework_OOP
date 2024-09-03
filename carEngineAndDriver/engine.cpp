#include "engine.hpp"

Engine::Engine(const std::string& name, const int& oil) :
			  m_name(name), m_oil(oil) {}

void Engine::setName(const std::string& name) {
	m_name = name;
}

void Engine::setOil(const int& oil) {
	m_oil = oil;
}

std::string Engine::getName() const {
	return m_name;
}

int Engine::getOil() const {
	return m_oil;
}
