#include <iostream>
#include <string>

class Base {
public:
	virtual void vFunction() const {
		std::cout << "Base::vFunction" << std::endl;
	}
	virtual ~Base() = default;
};

class Derived : public Base {
public:
	void vFunction() const override {
		std::cout << "Derived::vFunction" << std::endl;
	}
	~Derived() = default;
};


const std::type_info& foo(Base* obj) {
	return typeid(*obj);
}


int main() {
	
	Base a;
	Derived b;
	const std::type_info& typeA = foo(&a);
	const std::type_info& typeB = foo(&b);
	
	std::cout << typeA.name() << std::endl;	
	std::cout << typeB.name() << std::endl;	

	std::cout << "-----------------------------------" << std::endl;

	Base* ptr = new Derived();
	const std::type_info& typePtr= foo(ptr);
	std::cout << typePtr.name() << std::endl;
	
	return 0;
}
