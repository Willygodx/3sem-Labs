#include <iostream>
#include "Man.h"
#include "Date.h"
#include "Tourist.h"
#include "Enterpreneur.h"
#include "Businessman.h"

int main() {
    const char* countries[] = { "Italy", "Spain", "Germany" };
    Date dates[] = { Date(10, 5, 2009), Date(8, 2, 2013), Date(13, 8, 2016) };
    const char* products[] = { "Tesla", "Rocket" };
    int quantities[] = { 123442, 532143 };
    Man person("John", "Lock");
    Tourist tourist("Ben", "Dodge", 3, countries, dates);
    Entrepreneur entrepreneur("Tony", "Soprano", 2, products, quantities);
    Businessman businessman("Elon", "Musk", 3, countries, dates, 2, products, quantities, 32452.3214);

    person.printInfo();
    std::cout << std::endl;
    tourist.printInfo();
    std::cout << std::endl;
    entrepreneur.printInfo();
    std::cout << std::endl;
    businessman.printInfo();
    Man* m_ptr;
    m_ptr = &businessman;
    m_ptr->printInfo();

    return 0;
}
