#include <iostream>
#include "dynamicArray.hpp"

int main() {
	
	dynamicArray dArr1;
	dynamicArray dArr2(2);
	/*
	dArr2.pushElement(1);
	dArr2.pushElement(2);
	dArr2.pushElement(3);
	dArr2.pushElement(4);
	dArr2.pushElement(5);
	dArr2.printArray();
	*/

	dArr1.pushElement(1);
	dArr1.pushElement(2);
	dArr1.pushElement(3);
	dArr1.pushElement(4);
	dArr1.printArray();

	return 0;	
}
