#include "list.hpp"
#include <iostream>

using namespace blgt;

int main() {
    list l;
    l.insert_front(10);
    l.insert_front(20);
    l.insert_front(30);

    bool passed = true;

    if (l.size() != 3) passed = false;

    auto it = l.begin();
    if (*it != 30) passed = false;
    ++it;
    if (*it != 20) passed = false;
    ++it;
    if (*it != 10) passed = false;
    ++it;

    if (it != l.end()) passed = false;

    std::cout << "Test insert_front multiple elements: ";
    if (passed) {
        std::cout << "[OK]\n";
        return 0;
    } else {
        std::cout << "[FAIL]\n";
        return 1;
    }
}
