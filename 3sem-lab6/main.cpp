#include "Businessman.h"
#include "List.h"
#include "List.cpp"

int main() {
    List<Man> manList;
    manList.pushBack(Man("Ruslan", "Alhava"));
    manList.pushBack(Man("Ivan", "Zinovich"));
    manList.pushBack(Man("Aomine", "Daiki"));
    manList.writeToFileText("txtFile.txt");

    List<Man> manListFromFileText;
    manListFromFileText.readFromFileText("txtFile.txt");

    manList.writeToFileBinary("binaryFile.txt");

    List<Man> manListFromFileBinary;
    manListFromFileBinary.readFromFileBinary("binaryFile.txt");

    manList.print();
    manListFromFileText.print();
    manListFromFileBinary.print();
}
