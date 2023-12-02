#ifndef LAB1_MATRIX_H
#define LAB1_MATRIX_H


class Matrix {
private:
    int rows;
    int cols;
    int **value;
public:
    Matrix(int count_rows, int count_cols);
    Matrix(const Matrix& original);
    Matrix matrix_multiplication(const Matrix& second) const;
    Matrix matrix_summation(const Matrix& second) const;
    friend Matrix operator *(const Matrix& first, const Matrix& second);
    friend Matrix operator +(const Matrix& first, const Matrix& second);
    friend Matrix operator &(const Matrix& matrix, int number);
    void input() const;
    void print() const;
    ~Matrix();
};


#endif //LAB1_MATRIX_H
