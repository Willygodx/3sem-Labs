#include <iostream>
#include "input.h"
#include "string.h"
#include "Matrix.h"

int main() {
//    int count_rows, count_cols, number;
//
//    std::cout << "Input amount of rows for the first matrix: ";
//    check_negative(&count_rows);
//    std::cout << "Input amount of columns for the first matrix: ";
//    check_negative(&count_cols);
//    Matrix matrix1(count_rows, count_cols);
//    std::cout << "Input elements of the first matrix:" << std::endl;
//    matrix1.input();
//
//    std::cout << "Input amount of rows for the second matrix: ";
//    check_negative(&count_rows);
//    std::cout << "Input amount of columns for the second matrix: ";
//    check_negative(&count_cols);
//    Matrix matrix2(count_rows, count_cols);
//    std::cout << "Input elements of the second matrix:" << std::endl;
//    matrix2.input();
//
//    try
//    {
//        Matrix result_of_multiplication = matrix1 * matrix2;
//        std::cout << "Multiplication result:" << std::endl;
//        result_of_multiplication.print();
//    } catch (const std::invalid_argument& e)
//    {
//        std::cerr << "Error: " << e.what() << std::endl;
//    }
//
//    try
//    {
//        Matrix result_of_summation = matrix1 + matrix2;
//        std::cout << "Summation result:" << std::endl;
//        result_of_summation.print();
//    } catch (const std::invalid_argument& e)
//    {
//        std::cerr << "Error: " << e.what() << std::endl;
//    }
//
//    std::cout << "Input number you want to multiply with the first matrix: ";
//    check_int_for_number(&number);
//    Matrix res = matrix1 & number;
//    std::cout << "Result:" << std::endl;
//    res.print();

///////////////////////////////////////////////////////////////////////
//                        STRING WORK                               //

    std::cout << "Input 1st string: ";
    std::string input_string1;
    std::cin >> input_string1;
    std::cout << "Input 2nd string: ";
    std::string input_string2;
    std::cin >> input_string2;

    String string1(input_string1.c_str());
    String string2(input_string2.c_str());
    String string3 = string1 + string2;
    std::cout << "Result of summing strings: " << string3.c_str() << std::endl;

    string1 += string2;
    std::cout << "Result of += strings: " << string1.c_str() << std::endl;

    if (string1 == string2) {
        std::cout << "Strings are equal!" << std::endl;
    } else if (string1 != string2){
        std::cout << "Strings are not equal!" << std::endl;
    }

    try
    {
        int index;
        std::cout << "Input index of element you want to see: ";
        check_negative_with_0(&index);
        char element = string3[index];
        std::cout << "Element: " << element << std::endl;
    } catch (const std::invalid_argument& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try
    {
        int first, second;
        std::cout << "Input the first and the second index for a substring: ";
        check_negative_with_0(&first);
        check_negative_with_0(&second);
        String substring = string3(first, second);
        std::cout << "Substring: " << substring.c_str() << std::endl;
    } catch (const std::invalid_argument& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
