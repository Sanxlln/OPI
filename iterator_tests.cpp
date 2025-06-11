#include "list.hpp"
#include <iostream>  

using namespace blgt;
int main() {
    list l;
    l.insert_back(10);
    l.insert_back(20);
    l.insert_back(30);

    int expected[] = {10, 20, 30};
    int index = 0;
    bool passed = true;

    for (auto it = l.begin(); it != l.end(); ++it) {
        if (*it != expected[index++]) {
            passed = false;
            break;
        }
    }

    if (passed) {
        std::cout << "[OK]";
        return 0;
    } else {
        std::cout << "[FAIL]";
        return 1;
    }

}