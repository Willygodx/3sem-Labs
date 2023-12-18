#include "Tourist.h"
#include <iostream>
#include <cstring>

Tourist::Tourist() {

}

Tourist::Tourist(const char* firstName, const char* lastName, int numberOfCountries, const char** countries, Date* dates)
        : Man(firstName, lastName), numberOfCountries(numberOfCountries) {
    this->countries = new char*[numberOfCountries];
    this->dates = new Date[numberOfCountries];
    for (int i = 0; i < numberOfCountries; i++) {
        this->countries[i] = strdup(countries[i]);
        this->dates[i] = dates[i];
    }
}

const char* Tourist::getCountry(int index) const {
    return countries[index];
}

Date Tourist::getCrossingDate(int index) const {
    return dates[index];
}

void Tourist::setCountry(int index, const char* country) {
    strcpy(countries[index], country);
}

void Tourist::setDate(int index, Date date) {
    dates[index] = date;
}

void Tourist::printInfo() const {
    std::cout << "Tourist information:" << std::endl;
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
    std::cout << "Countries and border dates:" << std::endl;
    for (int i = 0; i < numberOfCountries; i++) {
        std::cout << "Country: " << countries[i] << ", Border date: " << dates[i].toString() << std::endl;
    }
}

Tourist::~Tourist() {
    delete[] countries;
    delete[] dates;
}