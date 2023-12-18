#include "Man.h"
#include "List.cpp"
#include <stack>

int main() {
    std::stack<int> myStack;
    for (int i = 0; i < 10; ++i) {
        myStack.push(i);
    }

    std::cout << myStack.top() << std::endl;

    myStack.pop();
    myStack.pop();
    myStack.pop();


    std::cout << myStack.top() << std::endl;

}
