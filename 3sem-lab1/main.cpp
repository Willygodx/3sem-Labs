#include <iostream>
#include "input.h"
#include "Matrix.h"

int main() {
    int count_rows, count_cols;

    std::cout << "Input amount of rows for the first matrix: ";
    check_negative(&count_rows);
    std::cout << "Input amount of columns for the first matrix: ";
    check_negative(&count_cols);
    Matrix matrix1(count_rows, count_cols);
    std::cout << "Input elements of the first matrix:" << std::endl;
    matrix1.input();

    std::cout << "Input amount of rows for the second matrix: ";
    check_negative(&count_rows);
    std::cout << "Input amount of columns for the second matrix: ";
    check_negative(&count_cols);
    Matrix matrix2(count_rows, count_cols);
    std::cout << "Input elements of the second matrix:" << std::endl;
    matrix2.input();

    try
    {
        Matrix result_of_multiplication = matrix1.matrix_multiplication(matrix2);
        std::cout << "Multiplication result:" << std::endl;
        result_of_multiplication.print();
    } catch (const std::invalid_argument& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    try
    {
        Matrix result_of_summation = matrix1.matrix_summation(matrix2);
        std::cout << "Summation result:" << std::endl;
        result_of_summation.print();
    } catch (const std::invalid_argument& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
