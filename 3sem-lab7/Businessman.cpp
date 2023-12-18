#include <iostream>
#include "Businessman.h"

Businessman::Businessman() {

}

Businessman::Businessman(const char* firstName, const char* lastName, int numberOfCountries, const char** countries, Date* dates, int numberOfProducts, const char** products, int* quantities, double revenue)
        : Man(firstName, lastName), Tourist(firstName, lastName, numberOfCountries, countries, dates),
          Enterpreneur(firstName, lastName, numberOfProducts, products, quantities), revenue(revenue) {
}
double Businessman::getRevenue() const {
    return revenue;
}

void Businessman::setRevenue(double revenue) {
    this->revenue = revenue;
}

void Businessman::printInfo() const {
    std::cout << "Businessman information:" << std::endl;
    std::cout << "First name: " << getFirstName() << std::endl;
    std::cout << "Last name: " << getLastName() << std::endl;
    std::cout << "Countries and border dates:" << std::endl;
    for (int i = 0; i < numberOfCountries; i++) {
        std::cout << "Country: " << countries[i] << ", Border date: " << dates[i].toString() << std::endl;
    }
    std::cout << "Products and quantities:" << std::endl;
    for (int i = 0; i < numberOfProducts; i++) {
        std::cout << "Product: " << products[i] << ", Quantity: " << quantities[i] << std::endl;
    }
    std::cout << "Revenue: " << revenue << std::endl;
}

Businessman::~Businessman() {

}