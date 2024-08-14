#ifndef __DYNAMICARRAY__
#define __DYNAMICARRAY__

#include <iostream>

class dynamicArray{
public:
	
	dynamicArray();
	dynamicArray(int capacity);
	~dynamicArray();

	void pushElement(int num);
	void printArray();

private:
	int* _arr;
	int _size;
	int _capacity;
};

#endif //__DYNAMICARRAY__

