#include "matrix.hpp"

Matrix::Matrix() : m_rows(0), m_cols(0), m_data(nullptr) {}

Matrix::Matrix(const size_t& row, const size_t& col) : m_rows(row), m_cols(col) {
	m_data = createMatrix(row, col);
}

void Matrix::fillMatrix() {
	for(size_t i = 0; i < m_rows; ++i) {
		for(size_t j = 0; j < m_cols; ++j) {
			m_data[i][j] = 1;
		}
	}
}


double** Matrix::createMatrix(const size_t& row, const size_t& col) {
	double** data = new double*[row];
	for(size_t i = 0; i < row; ++i) {
		data[i] = new double[col];
	}
	return data;
}

void Matrix::dealocateMatrix(double** data) {		
	for(size_t i = 0; i < m_rows; ++i) {
		delete[] data[i];
	}
	delete[] data;
}

Matrix::Matrix(const Matrix& cp) {
	m_rows = cp.m_rows;
	m_cols = cp.m_cols;
	m_data = createMatrix(m_rows, m_cols);
	
	for(size_t i = 0; i < m_rows; ++i) {
		for(size_t j = 0; j < m_cols; ++j) {
			m_data[i][j] = cp.m_data[i][j];
		}
	}
}

Matrix::Matrix(Matrix&& mv) noexcept {
	m_rows = mv.m_rows;
	m_cols = mv.m_cols;
	m_data = mv.m_data;
	
	mv.m_data = nullptr;
	mv.m_rows = 0;
	mv.m_cols = 0;
}


Matrix& Matrix::operator=(const Matrix& cpAsOp) {
	if(this != &cpAsOp) {
		m_rows = cpAsOp.m_rows;
		m_cols = cpAsOp.m_cols;
		dealocateMatrix(m_data);
		m_data = createMatrix(m_rows, m_cols);

		for(size_t i = 0; i < m_rows; ++i) {
			for(size_t j = 0; j < m_cols; ++j) {
				m_data[i][j] = cpAsOp.m_data[i][j];
			}
		}
	}
	return *this;
}


Matrix& Matrix::operator=(Matrix&& mvAsOp) noexcept {
	if(this != &mvAsOp) {
		dealocateMatrix(m_data);
		m_rows = mvAsOp.m_rows;
		m_cols = mvAsOp.m_cols;
		m_data = mvAsOp.m_data;
		
		mvAsOp.m_data = nullptr;
		mvAsOp.m_rows = 0;
		mvAsOp.m_cols = 0;
	}
	return *this;
}

//Operator Overloading (+, -, *)

Matrix Matrix::operator+(const Matrix& m) {
	if(m_rows != m.m_rows || m_cols != m.m_cols) {
		std::cerr << "Matrices must have the same dimensions for addition." << std::endl;
		exit(0);
	}
		
	Matrix sum(m_rows, m_cols);
	for(size_t i = 0; i < m_rows; ++i) {
		for(size_t j = 0; j < m_cols; ++j) {
			sum.m_data[i][j] = m_data[i][j] + m.m_data[i][j];
		}
	}
	return sum;
}

Matrix Matrix::operator-(const Matrix& m) {
	if(m_rows != m.m_rows || m_cols != m.m_cols) {
		std::cerr << "Matrices must have the same dimensions for subtraction." << std::endl;
		exit(0);
	}

	Matrix subtraction(m_rows, m_cols);
	for(size_t i = 0; i < m_rows; ++i) {
		for(size_t j = 0; j < m_cols; ++j) {
		subtraction.m_data[i][j] = m_data[i][j] - m.m_data[i][j];
		}
	}
	return subtraction;
}

Matrix Matrix::operator*(const Matrix& m) {
if (m_cols != m.m_rows) {
        std::cerr << "Number of columns in the first matrix must equal the number of rows in the second matrix for multiplication." << std::endl;
		exit(0);
    }

    Matrix product(m_rows, m.m_cols);

	for (size_t i = 0; i < m_rows; ++i) {
        for (size_t j = 0; j < m.m_cols; ++j) {
            product.m_data[i][j] = 0;
            for (size_t k = 0; k < m_cols; ++k) {
                product.m_data[i][j] += m_data[i][k] * m.m_data[k][j];
            }
        }
    }

    return product;
}

void Matrix::set(const size_t& row, const size_t& col, double value) {
		
	if(row >= m_rows || col >= m_cols) {
        std::cerr << "Error: Matrix indices are out of bounds." << std::endl;
		return;
	}
	m_data[row][col] = value;
}

double Matrix::get(size_t row, size_t col) const {
	
	if(row >= m_rows || col >= m_cols) {
        std::cerr << "Error: Matrix indices are out of bounds." << std::endl;
		return -1;
	}
	return m_data[row][col];
}

size_t Matrix::getRows() const {
	return m_rows;
}

size_t Matrix::getCols() const {
		return m_cols;
}

void Matrix::print() const {
	for(size_t i = 0; i < m_rows; ++i) {
		for(size_t j = 0; j < m_cols; ++j) {
			std::cout << m_data[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

Matrix::~Matrix() {
	dealocateMatrix(m_data); 
	m_data = nullptr;
}
