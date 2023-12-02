#include "List.h"
#include <iostream>

template <typename T>
List<T>::List() : first(nullptr), last(nullptr) {}

template <typename T>
List<T>::List(int size, const T& value) : first(nullptr), last(nullptr) {
    for (int i = 0; i < size; ++i) {
        pushBack(value);
    }
}

template <typename T>
List<T>::List(const List& copyList) : first(nullptr), last(nullptr) {
    Node* currentNode = copyList.first;
    while (currentNode) {
        pushBack(currentNode->data);
        currentNode = currentNode->next;
    }
}

template <typename T>
List<T>& List<T>::operator=(const List& copyList) {
    if (this == &copyList) {
        return *this;
    }

    clear();
    Node* currentNode = copyList.first;
    while (currentNode) {
        pushBack(currentNode->data);
        currentNode = currentNode->next;
    }

    return *this;
}

template <typename T>
List<T>::List(std::initializer_list<T> values) : first(nullptr), last(nullptr) {
    for (const T& value : values) {
        pushBack(value);
    }
}

template <typename T>
void List<T>::pushFront(const T& value) {
    Node* newNode = new Node(value);
    if (!first) {
        first = newNode;
        last = newNode;
    } else {
        newNode->next = first;
        first->prev = newNode;
        first = newNode;
    }
}

template <typename T>
void List<T>::pushBack(const T& value) {
    Node* newNode = new Node(value);
    if (!last) {
        first = newNode;
        last = newNode;
    } else {
        newNode->prev = last;
        last->next = newNode;
        last = newNode;
    }
}

template <typename T>
void List<T>::popFront() {
    if (first) {
        Node* temp = first;
        first = first->next;
        if (first)
            first->prev = nullptr;
        else
            last = nullptr;
        delete temp;
    }
}

template <typename T>
void List<T>::popBack() {
    if (last) {
        Node* temp = last;
        last = last->prev;
        if (last)
            last->next = nullptr;
        else
            first = nullptr;
        delete temp;
    }
}

template <typename T>
T List<T>::peek(int pos) {
    Node* currentNode = first;
    int counter = 0;
    while (currentNode && counter < pos) {
        currentNode = currentNode->next;
        counter++;
    }
    if (currentNode)
        return currentNode->data;
    else
        throw std::out_of_range("Position is out of range");
}

template <typename T>
void List<T>::resize(int newSize) {
    if (newSize < 0) {
        throw std::invalid_argument("Resize size must be non-negative.");
    }
    while (size() > newSize) {
        popBack();
    }
    while (size() < newSize) {
        pushBack(T());
    }
}

template <typename T>
void List<T>::resize(int newSize, const T& value) {
    if (newSize < 0) {
        throw std::invalid_argument("Resize size must be non-negative.");
    }
    while (size() > newSize) {
        popBack();
    }
    while (size() < newSize) {
        pushBack(value);
    }
}

template <typename T>
void List<T>::print() {
    Node* currentNode = first;
    while (currentNode) {
        std::cout << currentNode->data << " ";
        currentNode = currentNode->next;
    }
    std::cout << std::endl;
}

template <typename T>
void List<T>::clear() {
    while (first) {
        Node* temp = first;
        first = first->next;
        delete temp;
    }
    last = nullptr;
}

template <typename T>
int List<T>::size() const {
    int countSize = 0;
    Node* currentNode = first;
    while (currentNode) {
        countSize++;
        currentNode = currentNode->next;
    }
    return countSize;
}

template <typename T>
bool List<T>::isEmpty() const {
    return first == nullptr;
}

template <typename T>
List<T>::~List() {
    while (first) {
        Node* temp = first;
        first = first->next;
        delete temp;
    }
}


