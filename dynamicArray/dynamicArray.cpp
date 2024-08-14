#include "dynamicArray.hpp"

dynamicArray::dynamicArray() : _size(0), _capacity(3), _arr(new int[_capacity]) {}

dynamicArray::dynamicArray(int capacity) : _capacity(capacity), _arr(new int[_capacity]), _size(0) {}

void dynamicArray::pushElement(int num) {
	if(_size == _capacity) {
		_capacity *= 2;
		std::cout << _capacity << std::endl;

		int* tmp = new int[_capacity];
		for(int i = 0; i < _size; ++i) {
			tmp[i] = _arr[i];
		}
		delete[] _arr;
		_arr = tmp;
	}

	_arr[_size] = num;
	++_size;	
}



void dynamicArray::printArray() {

	for(int i = 0; i < _size; ++i) {
		std::cout << _arr[i] << " ";
	}
	std::cout << std::endl;
}



dynamicArray::~dynamicArray() {
	delete[] _arr;
	_arr = nullptr;
}
