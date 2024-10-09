#include "../hpp/developer.hpp"

Developer::Developer(std::string name, double baseSalary, int id, int projects)
                     : Employee(name, baseSalary, id), m_projects{projects} {}

void Developer::displayInfo() const {
    std::cout << "Name is " << m_name << std::endl;
    std::cout << "ID is " << m_id << std::endl;
    std::cout << "FinalSalary is " << m_finalSalary << std::endl;
    std::cout << "BalanceSalery is " << m_baseSalary << std::endl;
    
    if(m_projects > 0) {
        std::cout << "Develper have " << m_projects << " projects." << std::endl;
    } else {
        std::cout << "Develper haven't projects, please call addProject function and and add projects." << std::endl;
    }
}

void Developer::addProject(int count) {
    if(count > 0) { 
        m_projects += count;
    }
}

int Developer::getProjects() {
    return m_projects;
}
