#ifndef ENTREPRENEUR_H
#define ENTREPRENEUR_H

#include "Man.h"

class Entrepreneur : public virtual Man {

protected:
    char** products;
    int* quantities;
    int numberOfProducts;

public:
    Entrepreneur();
    Entrepreneur(const char* firstName, const char* lastName, int numberOfProducts, const char** products, int* quantities);
    ~Entrepreneur();

    const char* getProduct(int index) const;
    int getQuantity(int index) const;
    void setProduct(int index, const char* product);
    void setQuantity(int index, int quantity);
    void printInfo() const;
};

#endif // ENTREPRENEUR_H