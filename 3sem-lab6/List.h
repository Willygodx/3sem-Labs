#ifndef LIST_H
#define LIST_H
#include <fstream>
#include <iostream>
#include <initializer_list>

template <typename T>
class List {

private:
    struct Node {
        T data;
        Node* next;
        Node* prev;
        Node(const T& value) : data(value), next(nullptr), prev(nullptr) {}
    };
    Node* first;
    Node* last;

public:
    List();
    List(int size, const T& value);
    List(const List& copyList);
    List& operator=(const List& copyList);
    List(std::initializer_list<T> values);
    ~List();

    void pushFront(const T& value);
    void pushBack(const T& value);
    void popFront();
    void popBack();
    T peek(int pos);
    void resize(int newSize);
    void resize(int newSize, const T& value);
    void print();
    void clear();
    int size() const;
    bool isEmpty() const;
    void writeToFileText(const std::string& filename) const;
    void readFromFileText(const std::string& filename);
    void writeToFileBinary(const std::string& filename) const;
    void readFromFileBinary(const std::string& filename);
};

#endif
