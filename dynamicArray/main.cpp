#include <iostream>
#include "dynamicArray.hpp"

int main() {
	
	DynamicArray dArr1;	   					 //default ctor
		dArr1.pushElement(1);
		dArr1.pushElement(2);
		dArr1.pushElement(3);
		std::cout << "dArr1 result(default ctor):" << std::endl;
		dArr1.printArray();
	
	DynamicArray dArr2(2);					 //paramerized ctor
		dArr2.pushElement(11);
		dArr2.pushElement(22);
		dArr2.pushElement(33);
		std::cout << "dArr2 result(parametrized ctor):" << std::endl;
		dArr2.printArray();

	DynamicArray dArr3(dArr2); 				 // copy ctor
		std::cout << "dArr3 result(copy ctor):" << std::endl;
		dArr3.printArray();

	DynamicArray dArr4(2); 				   	// copy assignment operator
		dArr4.pushElement(111);
		dArr4.pushElement(222);
		dArr4.pushElement(333);
		dArr3 = dArr4;
		dArr3.printArray(); 

	DynamicArray dArr5(std::move(dArr4));	// move ctor
		dArr5.printArray();

	DynamicArray dArr6;						//move assignment operator
	dArr6.pushElement(1111);
	dArr6 = std::move(dArr3);
	dArr6.printArray();
	return 0;	
}
