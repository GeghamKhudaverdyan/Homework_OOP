#include "dynamicArray.hpp"

//Default constructor
DynamicArray::DynamicArray() : _size(0), _capacity(0), _arr(nullptr) { 
	std::cout << "__________________Default ctor called:" << std::endl;
}

//Parametrized constructor
DynamicArray::DynamicArray(int capacity) : _capacity(capacity), _size(0) {
	if(capacity > 0) {
		_arr = new int[capacity];
	} else {
		_arr = nullptr;
	}
	std::cout << "__________________Parameterized ctor called:" << std::endl;
}

//Copy constructor
DynamicArray::DynamicArray(const DynamicArray& cp) {
	_size = cp._size;
	_capacity = cp._capacity;
	_arr = new int(_capacity);
	for(int i = 0; i < _size; ++i) {
		_arr[i] = cp._arr[i];
	}
	std::cout << "_________________Copy ctor called:" << std::endl;
}

//Copy assignment operator
DynamicArray& DynamicArray::operator=(const DynamicArray& cpAsOp) {
	if(this != &cpAsOp) {
		_size = cpAsOp._size;
		_capacity = cpAsOp._capacity;
		delete[] _arr;
		_arr = new int[_capacity];
		for(int i = 0; i < _size; ++i) {
			_arr[i] = cpAsOp._arr[i];
		}
	}
	std::cout << "__________________Copy assignment operator called:" << std::endl;
	return *this;
}

//Move constructor
DynamicArray::DynamicArray(DynamicArray&& mv) noexcept {
	_size = mv._size;
	_capacity = mv._capacity;
	_arr = mv._arr;
	mv._arr = nullptr;
	mv._size = 0;
	mv._capacity = 0;
	
	std::cout << "__________________ Move ctor called:" << std::endl;
}

//Move assignment operator
DynamicArray& DynamicArray::operator=(DynamicArray&& mvAsOp) noexcept {
	if(this != &mvAsOp) {
		_size = mvAsOp._size;
		_capacity = mvAsOp._capacity;
		_arr = mvAsOp._arr;
		mvAsOp._arr = nullptr;
		mvAsOp._size = 0;
		mvAsOp._size = 0;
	}

	std::cout << "__________________ Move assignment operator called:" << std::endl;
	return *this;
}



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
