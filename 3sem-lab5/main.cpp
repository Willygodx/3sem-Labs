#include "List.h"
#include "List.cpp"
#include <iostream>
#include "Exception.h"

int main() {
//    List<bool> boolList;
    List<int> intList(6, 3);
//    List<double> doubleList {2.65, 2.3, 8.5, 3.92};
//    List<double> doubleList2 = doubleList;
//    List<char> charList(5, 'H');
    try {
        int value = intList.peek(-1);
    } catch (const Exception& e) {
        e.show();
        throw;
    }




//    std::cout << "Size of charList: " << charList.size() << std::endl;
//    intList.pushFront(1);
//    intList.pushBack(9);
//    std::cout << "Elements of intList: ";
//    intList.print();
//    intList.popBack();
//    intList.popBack();
//    intList.popFront();
//    std::cout << "Edited intList: ";
//    intList.print();
//    std::cout << "3rd element of doubleList: " << doubleList.peek(2) << std::endl;
//    bool flag = boolList.isEmpty();
//    std::cout << "boolList is empty, flag value: " << flag << std::endl;
//    boolList.pushFront(true);
//    flag = boolList.isEmpty();
//    std::cout << "boolList is not empty, flag value: " << flag << std::endl;
//    doubleList2.resize(2);
//    std::cout << "Resized doubleList2: ";
//    doubleList2.print();
//    charList.pushFront('D');
//    charList.pushFront('L');
//    charList.pushFront('R');
//    charList.pushFront('O');
//    charList.pushFront('W');
//    charList.pushBack('W');
//    charList.pushBack('O');
//    charList.pushBack('R');
//    charList.pushBack('L');
//    charList.pushBack('D');
//    std::cout << "Elements of charList: ";
//    charList.print();
//    intList.resize(15, 9);
//    std::cout << "Resized intList: ";
//    intList.print();



    return 0;
}
