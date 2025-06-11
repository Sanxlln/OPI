#include "list.hpp"
#include <iostream>  

using namespace blgt;
int main() {
    list l;
    l.insert_front(1);
    l.insert_front(2);
    l.insert_front(3);
    bool passed = l.size() == 3;
    
    if (passed) {
        std::cout << "[OK]";
        return 0;
    } else {
        std::cout << "[FAIL]";
        return 1;
    }
}