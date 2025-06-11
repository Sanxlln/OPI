#include "list.hpp"
#include <iostream>  

using namespace blgt;

int main() {
    list l;
    l.insert_front(42);

    bool passed = false;
    if (l.size() == 1 && *l.begin() == 42) {
        passed = true;
    }

    if (passed) {
        std::cout << "[OK]";
        return 0;
    } else {
        std::cout << "[FAIL]";
        return 1;
    }
}

