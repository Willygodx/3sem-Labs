#ifndef BUSINESSMAN_H
#define BUSINESSMAN_H

#include "Tourist.h"
#include "Enterpreneur.h"

class Businessman : public Tourist, public Entrepreneur {

protected:
    double revenue;

public:
    Businessman();
    Businessman(const char* firstName, const char* lastName, int numberOfCountries, const char** countries, Date* dates, int numberOfProducts, const char** products, int* quantities, double revenue);
    ~Businessman();

    double getRevenue() const;
    void setRevenue(double revenue);
    void printInfo() const;
};

#endif // BUSINESSMAN_H