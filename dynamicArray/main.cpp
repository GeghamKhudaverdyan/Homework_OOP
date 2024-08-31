#include <iostream>
#include "dynamicArray.hpp"

int main() {
	
	DynamicArray dArr1;
	DynamicArray dArr2(2);
	/*
	dArr1.pushElement(111);
	dArr2 = dArr1;
	
	dArr1.printArray();
	dArr2.printArray();

	DynamicArray dArr3(dArr2);
	dArr3.printArray();
	*//*
	dArr2.pushElement(1);
	dArr2.pushElement(2);
	dArr2.pushElement(3);
	dArr2.pushElement(4);
	dArr2.pushElement(5);
	dArr2.printArray();
	*/
	
	DynamicArray dArr3 = std::move(dArr2);
	DynamicArray dArr4;
	dArr4 = std::move(dArr1);
	/*
	dArr1.pushElement(1);
	dArr1.pushElement(2);
	dArr1.pushElement(3);
	dArr1.pushElement(4);
	dArr1.printArray();
	*/
	return 0;	
}
