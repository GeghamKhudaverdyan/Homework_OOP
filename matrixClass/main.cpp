#include <iostream>
#include "matrix.hpp"

int main() {
	Matrix m;	
	Matrix m2(2, 2);
	m2.fillMatrix();
	m2.print();

	Matrix m3(m2);
	std::cout << "m3:" << std::endl;
	m3.print();
	m3.set(1, 1, 55);
	m3.print();
	Matrix m4(2, 2);

	m2 = m4;
	Matrix m5 = std::move(m3);
	Matrix m6(2, 2);
	m6 = std::move(m4);
	
	Matrix m7(2, 2);
	m7.fillMatrix();

	Matrix m8(2, 2);
	m8.fillMatrix();
	
	Matrix m9 = m7 + m8;
	m9.print();
	//m9 = m7 - m8;
	//m9.print();

	Matrix m10(2, 2);
	m10 = m9 * m9;
	m10.print();
	return 0;
}
