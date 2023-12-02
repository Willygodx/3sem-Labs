#ifndef MAN_H
#define MAN_H

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
};

#endif // MAN_H