#ifndef DATE_H
#define DATE_H
#include <iostream>

class Date {

protected:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int day, int month, int year);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    std::string toString() const;
};

#endif // DATE_H