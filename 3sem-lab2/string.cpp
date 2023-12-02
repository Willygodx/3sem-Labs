#include "String.h"
#include <cstring>
#include <iostream>

String::String() : data(nullptr), length(0) {}

String::String(const char* str) : data(nullptr), length(0) {
    if (str) {
        length = strlen(str);
        data = new char[length + 1];
        strcpy(data, str);
    }
}

String::String(const String& other) : data(nullptr), length(other.length) {
    if (other.data) {
        data = new char[length + 1];
        strcpy(data, other.data);
    }
}

String& String::operator=(const String& other) {
    if (this == &other) {
        return *this;
    }

    delete[] data;

    length = other.length;
    if (other.data) {
        data = new char[length + 1];
        strcpy(data, other.data);
    } else {
        data = nullptr;
    }

    return *this;
}

String operator+(const String& first, const String& second) {
    String result;
    result.length = first.length + second.length;
    result.data = new char[result.length + 1];

    strcpy(result.data, first.data);

    if (second.data) {
        strcat(result.data, second.data);
    }

    return result;
}

String& operator+=(String& first, const String& second) {
    first = first + second;
    return first;
}

bool operator==(const String& first, const String& second) {
    return (first.length == second.length) && (strcmp(first.data, second.data) == 0);
}

bool operator!=(const String& first, const String& second) {
    return !(first == second);
}

char String::operator[](int index) const {
    if (index >= 0 && index < length) {
        return data[index];
    } else {
        throw std::invalid_argument("Index out of bounds!");
    }
}

String String::operator()(int first, int second) const {
    if (first < 0 || first >= length || second < first || second >= length) {
        throw std::invalid_argument("First or second element of the substring is out of bounds!");
    }

    String substring;
    substring.length = second - first + 1;
    substring.data = new char[substring.length + 1];
    strncpy(substring.data, data + first, substring.length);
    substring.data[substring.length] = '\0';

    return substring;
}

const char* String::c_str() const {
    return data ? data : "";
}

String::~String() {
    delete[] data;
}
