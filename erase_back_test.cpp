#include "list.hpp"
#include <iostream>  

using namespace blgt;
int main() {
    list l;
    l.insert_back(10);
    l.insert_back(20);
    l.insert_back(30);


    l.erase_back();

 
    bool sizeCorrect = (l.size() == 2);


    auto it = l.begin();
    int first = *it;
    ++it;
    int last = *it;

    bool lastIs20 = (last == 20);

    bool passed = sizeCorrect && lastIs20;

      if (passed) {
        std::cout << "Test empty: [OK]";
        return 0;
    } else {
        std::cout << "Test empty: [FAIL]";
     return 1;
    }
}