#include "list.hpp"
#include <iostream>  

using namespace blgt;

int main() {
    list l;
    l.insert_back(1);
    l.insert_back(2);

    auto it = l.begin();
    bool passed = false;

    if (*it == 1) {
        ++it;
        if (*it == 2 && l.size() == 2) {
            passed = true;
        }
    }

    std::cout << "Test insert_back: ";
    if (passed) {
        std::cout << "[OK]\n";
        return 0;  
    } else {
        std::cout << "[FAIL]\n";
        return 1;  
    }
}
