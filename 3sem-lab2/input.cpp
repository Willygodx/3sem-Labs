#import "input.h"
#include <iostream>

void check_negative(int* value)
{
    while (!(std::cin >> *value) || *value <= 0 || std::cin.get() != '\n')
    {
        std::cout << "Error: wrong input! Try again\n>";
        std::cin.clear();
        rewind(stdin);
    }
}
void check_negative_with_0(int* value)
{
    while (!(std::cin >> *value) || *value < 0 || std::cin.get() != '\n')
    {
        std::cout << "Error: wrong input! Try again\n>";
        std::cin.clear();
        rewind(stdin);
    }
}

void check_int_for_number(int* value)
{
    while (!(std::cin >> *value) || std::cin.get() != '\n')
    {
        std::cout << "Error: wrong input! Try again\n>";
        std::cin.clear();
        rewind(stdin);
    }
}

void check_int(int* value)
{
    std::cin >> *value;
    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error: wrong input! Try again\n>";
        std::cin >> *value;
    }
}