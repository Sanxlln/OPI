#include <iostream>
#include "list.hpp"

using namespace blgt;

int main() {
    list myList;

    std::cout << "Adding values to the front: twenty-five, fifteen" << std::endl;
    myList.insert_front(25);
    myList.insert_front(15);

    std::cout << "Adding values to the back: thirty-five, forty-five" <<std::endl;
    myList.insert_back(35);
    myList.insert_back(45);

    std::cout << "\nList contents:" <<std::endl;
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "\nCurrent list size: " << myList.size() << std::endl;
    std::cout << "Is the list empty? " << (myList.empty() ? "Yes" : "No") << std::endl;

    std::cout << "\nRemoving the first element..." << std::endl;
    myList.erase_front();

    std::cout << "Removing the last element..." << std::endl;
    myList.erase_back();

    std::cout << "\nAdding new value to the back: twenty-two" << std::endl;
    myList.insert_back(22);

    std::cout << "\nList contents after changes:" << std::endl;
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "\nFinal list size: " << myList.size() << std::endl;
    std::cout << "Is the list now empty? " << (myList.empty() ? "Yes" : "No") << std::endl;

    return 0;
}
