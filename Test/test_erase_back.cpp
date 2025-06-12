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
    int second = *it;

    bool valuesCorrect = (first == 10 && second == 20);

    bool passed = sizeCorrect && valuesCorrect;

    std::cout << "Test erase_back: ";
    if (passed) {
        std::cout << "[OK]\n";
        return 0;
    } else {
        std::cout << "[FAIL]\n";
        return 1;
    }
}
