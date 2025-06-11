#include "list.hpp"
#include <iostream>

using namespace blgt;

int main() {
    list l;
    l.insert_back(5);
    l.insert_back(10);
    l.insert_back(15);

    bool passed = true;


    if (l.size() != 3) {
        passed = false;
    }

    auto it = l.begin();
    if (*it != 5) passed = false;
    ++it;
    if (*it != 10) passed = false;
    ++it;
    if (*it != 15) passed = false;
    ++it;


    if (it != l.end()) passed = false;

    std::cout << "Test insert_back multiple elements: ";
    if (passed) {
        std::cout << "[OK]\n";
        return 0;
    } else {
        std::cout << "[FAIL]\n";
        return 1;
    }
}
