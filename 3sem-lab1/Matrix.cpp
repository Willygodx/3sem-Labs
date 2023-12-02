#include "Matrix.h"
#include "input.h"
#include <iostream>

Matrix::Matrix(int count_rows, int count_cols) : rows(count_rows), cols(count_cols) {
    value = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        value[i] = new int[cols];
    }
}

Matrix::Matrix(const Matrix& original) : rows(original.rows), cols(original.cols) {
    value = new int * [rows];
    for (int i = 0; i < rows; i++) {
        value[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++) {
            value[i][j] = original.value[i][j];
        }
    }
}

Matrix Matrix::matrix_multiplication(const Matrix& second) const {
    if (cols != second.rows)
        throw std::invalid_argument("Wrong size of matrix. Unable to multiplicate.");
    Matrix result(rows, second.cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < second.cols; j++) {
            result.value[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result.value[i][j] += value[i][k] * second.value[k][j];
            }
        }
    }
    return result;
}

Matrix Matrix::matrix_summation(const Matrix& second) const {
    if (rows != second.rows || cols != second.cols)
        throw std::invalid_argument("Wrong size of matrix. Unable to sum.");
    Matrix result(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result.value[i][j] = value[i][j] + second.value[i][j];
        }
    }
    return result;
}

void Matrix::input() const {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            check_int(&value[i][j]);
        }
    }
}

void Matrix::print() const {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            std::cout << value[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

Matrix::~Matrix() {
    for (int i = 0; i < rows; i++)
    {
        delete[] value[i];
    }
    delete[] value;
}