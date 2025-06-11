#include "list.hpp"
#include <iostream>
#include <exception>

using namespace blgt;

int main() {
    list l;

    bool passed = false;
    try {
        l.erase_front();  
        passed = l.size() == 0;  
    } catch (...) {
        passed = true;  
    }

    std::cout << "Test erase_front on empty list: ";
    if (passed) {
        std::cout << "[OK]\n";
        return 0;
    } else {
        std::cout << "[FAIL]\n";
        return 1;
    }
}
