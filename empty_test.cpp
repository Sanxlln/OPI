#include "list.hpp"
#include <iostream>  

using namespace blgt;
int main() {
    list l;           
    bool passed = l.empty();  

    if (passed) {
    std::cout << "Test empty: [OK]";
    return 0;
} else {
    std::cout << "Test empty: [FAIL]";
    return 1;
}

}