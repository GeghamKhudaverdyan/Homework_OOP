#include "dynamicArray.hpp"

//Default constructor
DynamicArray::DynamicArray() : _size(0), _capacity(0), _arr(nullptr) {}

//Parametrized constructor
DynamicArray::DynamicArray(int capacity) : _capacity(capacity), _size(0) {
	if(capacity > 0) {
		_arr = new int[capacity];
	} else {
		_arr = nullptr;
	}
}

//Copy constructor
DynamicArray::DynamicArray(const DynamicArray& cp) {
	_size = cp._size;
	_capacity = cp._capacity;
	_arr = new int[_capacity];
	for(int i = 0; i < _size; ++i) {
		_arr[i] = cp._arr[i];
	}
}

//Copy assignment operator
DynamicArray& DynamicArray::operator=(const DynamicArray& cpAsOp) {
	if(this != &cpAsOp) {
		delete[] _arr;
		_size = cpAsOp._size;
		_capacity = cpAsOp._capacity;
		_arr = new int[_capacity];

		for(int i = 0; i < _size; ++i) {
			_arr[i] = cpAsOp._arr[i];
		}
	}
	return *this;
}

//Move constructor
DynamicArray::DynamicArray(DynamicArray&& mv) :
						_size(mv._size), _capacity(mv._capacity), _arr(mv._arr) {
	mv._arr = nullptr;
	std::cout << "Move ctor:" << std::endl;
}

/*
DynamicArray& DynamicArray::operator=(DynamicArray&& mvAs) :
						_size(mvAs._size), _capacity(mvAs._capacity), _arr(mvAs._arr) {
	mvAs._arr = nullptr;
	mvAs._size = 0;
	mvAs._capacity = 0;

	std::cout << "Move assignment operator:" << std::endl;
	return *this;
}
*/





















void DynamicArray::pushElement(int num) {
	if(_size == _capacity) {	
		_capacity = (_capacity == 0) ? 1 : _capacity * 2;
		
		int* tmp = new int[_capacity];
		for(int i = 0; i < _size; ++i) {
			tmp[i] = _arr[i];
		}
		delete[] _arr;
		_arr = tmp;
	}

	_arr[_size++] = num;
}

/*
void DynamicArray::pushElement(int num) {
	if(_size == _capacity) {
		_capacity *= 2;

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
*/


void DynamicArray::printArray() {

	for(int i = 0; i < _size; ++i) {
		std::cout << _arr[i] << " ";
	}
	std::cout << std::endl;
}



DynamicArray::~DynamicArray() {
	delete[] _arr;
	_arr = nullptr;
}
