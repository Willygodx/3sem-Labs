#include "Man.h"
#include "List.h"
#include "List.cpp"

int main() {
    List<Man> manList;
    manList.pushBack(Man("John", "Duan"));
    manList.pushBack(Man("Benedict", "Lillia"));
    manList.pushBack(Man("William", "Lawson"));
    manList.writeToFileText("txtFile.txt");

    List<Man> manListFromFileText;
    manListFromFileText.readFromFileText("txtFile.txt");

   manList.writeToFileBinary("binaryFile.dat");

    List<Man> manListFromFileBinary;
    manListFromFileBinary.readFromFileBinary("binaryFile.dat");

    manList.print();
    manListFromFileText.print();
    manListFromFileBinary.print();
}
