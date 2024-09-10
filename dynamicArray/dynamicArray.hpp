#ifndef __DYNAMICARRAY__
#define __DYNAMICARRAY__

#include <iostream>

class DynamicArray {
public:
	//Default constructor
	DynamicArray();
	//Parametrized constructor
	DynamicArray(int capacity);
	//Coppy constructor
	DynamicArray(const DynamicArray& cp);
	//Copy assignment operator
	DynamicArray& operator=(const DynamicArray& cpAsOp);
	//Move constructor
	DynamicArray(DynamicArray&& mv) noexcept;
	//Move assignment operator
	DynamicArray& operator=(DynamicArray&& mvAs) noexcept;
	//Destructor
	~DynamicArray();
	
	//Push element for lvalue
	void pushElement(int num);
	//Push element for rvalue
	//void pushElement(int&& num);
	//Print array
	void printArray();

private:
	int* _arr;
	int _size;
	int _capacity;
};

#endif //__DYNAMICARRAY__

