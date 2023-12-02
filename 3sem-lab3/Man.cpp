#include "Man.h"
#include <iostream>

Man::Man() {

}

Man::Man(const char* firstName, const char* lastName) {
    strcpy(this->firstName, firstName);
    strcpy(this->lastName, lastName);
}

const char* Man::getFirstName() const {
    return firstName;
}

const char* Man::getLastName() const {
    return lastName;
}

void Man::setFirstName(const char* firstName) {
    strcpy(this->firstName, firstName);
}

void Man::setLastName(const char* lastName) {
    strcpy(this->lastName, lastName);
}

void Man::printInfo() const {
    std::cout << "Person information:" << std::endl;
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
}

Man::~Man() {

}
