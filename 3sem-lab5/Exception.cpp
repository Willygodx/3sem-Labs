#include "Exception.h"

Exception::Exception() : code(0), message("") {
}

Exception::Exception(int code, const char* message) : code(code) {
    strncpy(this->message, message, 80);
}

void Exception::show() const {
    std::cerr << "Error " << code << ": " << message << std::endl;
}

InputNumberException::InputNumberException() : Exception(101, "Invalid input number.") {}

InvalidArgumentException::InvalidArgumentException() : Exception(102, "Invalid argument"){}

IndexOutOfBoundsException::IndexOutOfBoundsException() : Exception(103, "Index out of bounds.") {}

MemoryAllocationException::MemoryAllocationException() : Exception(104, "Memory allocation failed."){}
