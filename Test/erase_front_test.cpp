#include "list.hpp"
#include <iostream>  

using namespace blgt;
int main() {
    list l;
    l.insert_front(10);
    l.insert_front(20);
    l.erase_front();    

   bool passed = false;

    if (l.size() == 1 && *l.begin() == 10) {
        passed = true;
    }

    std::cout << "Test erase_front: ";
    if (passed) {
        std::cout << "[OK]\n";
        return 0; 
    } else {
        std::cout << "[FAIL]\n";
        return 1; 
    }
}