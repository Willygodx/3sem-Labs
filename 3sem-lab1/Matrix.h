#ifndef LAB1_MATRIX_H
#define LAB1_MATRIX_H

class Matrix {
    int rows;
    int cols;
    int **value;
public:
    Matrix(int count_rows, int count_cols);
    Matrix(const Matrix& original);
    Matrix matrix_multiplication(const Matrix& second) const;
    Matrix matrix_summation(const Matrix& second) const;
    void input() const;
    void print() const;
    ~Matrix();
};


#endif //LAB1_MATRIX_H
