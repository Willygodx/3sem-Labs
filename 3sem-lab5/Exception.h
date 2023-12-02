#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <iostream>

class Exception {
public:
    Exception();
    Exception(int code, const char* message);
    void show() const;

private:
    int code;
    char message[80];
};

class InputNumberException : public Exception {
public:
    InputNumberException();
};

class InvalidArgumentException : public Exception {
public:
    InvalidArgumentException();
};

class IndexOutOfBoundsException : public Exception {
public:
    IndexOutOfBoundsException();
};

class MemoryAllocationException : public Exception {
public:
    MemoryAllocationException();
};

#endif
