#include "Date.h"

Date::Date() {

}

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

void Date::setDay(int day) {
    this->day = day;
}

void Date::setMonth(int month) {
    this->month = month;
}

void Date::setYear(int year) {
    this->year = year;
}

std::string Date::toString() const {
    return std::to_string(day) + "." + std::to_string(month) + "." + std::to_string(year);
}