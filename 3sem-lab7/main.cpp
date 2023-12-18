#include "Man.h"
#include "List.h"
#include "List.cpp"
#include "algorithm.h"
#include <vector>

bool compare(const int a, const int b) {
    return a > b;
}

int main() {
    List<Man> manList;
    manList.pushBack(Man("John", "Duan"));
    manList.pushBack(Man("Benedict", "Lillia"));
    manList.pushBack(Man("William", "Lawson"));
//    manList.writeToFileText("txtFile.txt");

//    List<Man> manListFromFileText;
//    manListFromFileText.readFromFileText("txtFile.txt");
//
//   manList.writeToFileBinary("binaryFile.dat");
//
//    List<Man> manListFromFileBinary;
//    manListFromFileBinary.readFromFileBinary("binaryFile.dat");
//
//    manList.print();
//    manListFromFileText.print();
//    manListFromFileBinary.print();

    for (List<Man>::Iterator it = manList.begin(); it != manList.end(); ++it) {
        std::cout << *it << "; ";
    }
    std::cout << "\n";

    for (List<Man>::ReverseIterator it = manList.rbegin(); it != manList.rend(); ++it) {
        std::cout << *it << "; ";
    }
    std::cout << "\n";

    for (List<Man>::ConstIterator it = manList.cbegin(); it != manList.cend(); ++it) {
        std::cout << *it << "; ";
    }
    std::cout << "\n";

    for (List<Man>::ConstReverseIterator it = manList.crbegin(); it != manList.crend(); ++it) {
        std::cout << *it << "; ";
    }
    std::cout << "\n";

    List<int> myList = {5, 2, 8, 1, 7, 3};

    auto result = algorithm::search(myList.begin(), myList.end(), [](int x) { return x == 7; });
    if (result != myList.end()) {
        std::cout << "Element found: " << *result << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    std::vector<int> myVector;
    myVector.push_back(-43);
    myVector.push_back(0);
    myVector.push_back(32);
    myVector.push_back(34);
    myVector.push_back(2);
    myVector.push_back(7);

    algorithm::sort(myVector.begin(), myVector.end(), [](const int& a, const int& b) {
        return a > b;
    });

    for (int i : myVector) {
        std::cout << i << std::endl;
    }



}


