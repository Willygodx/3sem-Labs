#ifndef TOURIST_H
#define TOURIST_H

#include "Man.h"
#include "Date.h"

class Tourist : public virtual Man {

protected:
    char** countries;
    Date* dates;
    int numberOfCountries;

public:
    Tourist();
    Tourist(const char* firstName, const char* lastName, int numberOfCountries, const char** countries, Date* dates);
    ~Tourist();

    const char* getCountry(int index) const;
    Date getCrossingDate(int index) const;
    void setCountry(int index, const char* country);
    void setDate(int index, Date date);
    void printInfo() const;
};

#endif // TOURIST_H