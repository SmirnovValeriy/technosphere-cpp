#include <iostream>

#ifndef matrix_hpp
#define matrix_hpp

class Row {
    size_t row_size;
    int64_t *data;
    
public:
    Row(const size_t max_size, const int64_t init_value=0);
    Row& operator=(const Row &row);
    int64_t& operator[](const size_t i);
    const int64_t& operator[](const size_t i) const;
    Row& operator*=(const int64_t value);
    Row operator+(const Row &row) const;
    bool operator==(const Row &row) const;
    bool operator!=(const Row &row) const;
;    
    friend std::ostream& operator<<(std::ostream &out, const Row &row);
    ~Row();
};

class Matrix {
    size_t num_rows;
    size_t num_cols;
    Row **data;

public:
    Matrix(const size_t rows_size, const size_t cols_size, const int64_t init_value=0);
    size_t get_num_rows() const;
    size_t get_num_cols() const;
    Matrix& operator=(const Matrix &matrix);
    Row& operator[](const size_t i);
    const Row& operator[](const size_t i) const;
    Matrix& operator*=(const int64_t value);
    Matrix operator+(const Matrix &matrix) const;
    bool operator==(const Matrix &matrix) const;
    bool operator!=(const Matrix &matrix) const;
    
    friend std::ostream& operator<<(std::ostream &out, const Matrix &matrix);
    ~Matrix();
};
#endif

