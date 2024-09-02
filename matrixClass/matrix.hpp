#ifndef __MATRIX__
#define __MATRIX__

#include <cstddef>
#include <iostream>

class Matrix {
public:

//Ctors
Matrix();
Matrix(const size_t& row, const size_t& col);
Matrix(const Matrix& cp);
Matrix(Matrix&& mv) noexcept;

//Assignment Operators
Matrix& operator=(const Matrix& cpAsOp);
Matrix& operator=(Matrix&& mvAsOp) noexcept;

//Operator Overloading (+, -, *)

Matrix operator+(const Matrix& m);
Matrix operator-(const Matrix& m);
Matrix operator*(const Matrix& m);

//Member Functions
double** createMatrix(const size_t& row, const size_t& col);
void dealocateMatrix(double** data);

void set(const size_t& row, const size_t& col, double value);
double get(size_t row, size_t col) const;

size_t getRows() const;
size_t getCols() const;
void print() const;
void fillMatrix();

~Matrix();

private:
size_t m_rows;
size_t m_cols;
double** m_data;

};

#endif // __MATRIX__

