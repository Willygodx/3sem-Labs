#ifndef MAN_H
#define MAN_H
#include <iostream>

class Man {

protected:
    char firstName[50];
    char lastName[50];

public:
    Man();
    Man(const char* firstName, const char* lastName);
    virtual ~Man();

    const char* getFirstName() const;
    const char* getLastName() const;
    void setFirstName(const char* firstName);
    void setLastName(const char* lastName);
    virtual void printInfo() const;
    friend std::ostream& operator<<(std::ostream& os, const Man& man);
    friend std::istream& operator>>(std::istream& is, Man& man);
};

#endif // MAN_H