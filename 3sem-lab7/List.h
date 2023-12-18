#ifndef LIST_H
#define LIST_H
#include <fstream>
#include <iostream>
#include <initializer_list>
#include <iterator>

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
    class Iterator {
    private:
        Node* current;

    public:
        Iterator(Node* node) : current(node) {}

        T& operator*() const;
        Iterator& operator++();
        Iterator operator++(int);
        bool operator==(const Iterator& other) const;
        bool operator!=(const Iterator& other) const;
    };

    class ReverseIterator {
    private:
        Node* current;

    public:
        ReverseIterator(Node* node) : current(node) {}

        T& operator*() const;
        ReverseIterator& operator++();
        ReverseIterator operator++(int);
        bool operator==(const ReverseIterator& other) const;
        bool operator!=(const ReverseIterator& other) const;
    };

    class ConstIterator {
    private:
        const Node* current;

    public:
        ConstIterator(const Node* node) : current(node) {}

        const T& operator*() const;
        ConstIterator& operator++();
        ConstIterator operator++(int);
        bool operator==(const ConstIterator& other) const;
        bool operator!=(const ConstIterator& other) const;
    };

    class ConstReverseIterator {
    private:
        const Node* current;

    public:
        ConstReverseIterator(const Node* node) : current(node) {}

        const T& operator*() const;
        ConstReverseIterator& operator++();
        ConstReverseIterator operator++(int);
        bool operator==(const ConstReverseIterator& other) const;
        bool operator!=(const ConstReverseIterator& other) const;
    };

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
    Iterator begin();
    Iterator end();
    ReverseIterator rbegin();
    ReverseIterator rend();
    ConstIterator cbegin() const;
    ConstIterator cend() const;
    ConstReverseIterator crbegin() const;
    ConstReverseIterator crend() const;
};

#endif
