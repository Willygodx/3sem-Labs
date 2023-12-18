#include "Enterpreneur.h"
#include <iostream>
#include <cstring>

Enterpreneur::Enterpreneur()  {

}

Enterpreneur::Enterpreneur(const char* firstName, const char* lastName, int numberOfProducts, const char** products, int* quantities)
        : Man(firstName, lastName), numberOfProducts(numberOfProducts) {
    this->products = new char*[numberOfProducts];
    this->quantities = new int[numberOfProducts];
    for (int i = 0; i < numberOfProducts; i++) {
        this->products[i] = strdup(products[i]);
        this->quantities[i] = quantities[i];
    }
}

const char* Enterpreneur::getProduct(int index) const {
    return products[index];
}

int Enterpreneur::getQuantity(int index) const {
    return quantities[index];
}

void Enterpreneur::setProduct(int index, const char* product) {
    strcpy(products[index], product);
}

void Enterpreneur::setQuantity(int index, int quantity) {
    quantities[index] = quantity;
}

void Enterpreneur::printInfo() const {
    std::cout << "Entrepreneur information:" << std::endl;
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
    std::cout << "Products and quantities:" << std::endl;
    for (int i = 0; i < numberOfProducts; i++) {
        std::cout << "Product: " << products[i] << ", Quantity: " << quantities[i] << std::endl;
    }
}

Enterpreneur::~Enterpreneur() {
    delete[] products;
    delete[] quantities;
}