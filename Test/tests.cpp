#include "list.hpp"
#include <iostream>
#include <cassert>

using namespace blgt;

void test_insert_front() {
    list l;
    l.insert_front(10);
    l.insert_front(20);
    l.insert_front(30);

    assert(l.size() == 3);
    auto it = l.begin();
    assert(*it == 30);
    ++it; assert(*it == 20);
    ++it; assert(*it == 10);
    ++it; assert(it == l.end());

    std::cout << "Test insert_front multiple elements: [OK]\n";
}

void test_insert_back() {
    list l;
    l.insert_back(5);
    l.insert_back(10);
    l.insert_back(15);

    assert(l.size() == 3);
    auto it = l.begin();
    assert(*it == 5);
    ++it; assert(*it == 10);
    ++it; assert(*it == 15);
    ++it; assert(it == l.end());

    std::cout << "Test insert_back multiple elements: [OK]\n";
}

void test_erase_front_empty() {
    list l;
    l.erase_front();  
    assert(l.size() == 0);
    std::cout << "Test erase_front on empty list: [OK]\n";
}


void test_erase_back() {
    list l;
    l.insert_back(10);
    l.insert_back(20);
    l.insert_back(30);
    l.erase_back();

    assert(l.size() == 2);
    auto it = l.begin();
    assert(*it == 10);
    ++it; assert(*it == 20);

    std::cout << "Test erase_back: [OK]\n";
}

void test_size() {
    list l;
    l.insert_front(1);
    l.insert_front(2);
    l.insert_front(3);
    assert(l.size() == 3);
    std::cout << "Test size: [OK]\n";
}

void test_iterator() {
    list l;
    l.insert_back(10);
    l.insert_back(20);
    l.insert_back(30);

    int expected[] = {10, 20, 30};
    int index = 0;

    for (auto it = l.begin(); it != l.end(); ++it) {
        assert(*it == expected[index++]);
    }

    std::cout << "Test iterator: [OK]\n";
}

void test_insert_front_single() {
    list l;
    l.insert_front(42);
    assert(l.size() == 1);
    assert(*l.begin() == 42);
    std::cout << "Test insert_front single element: [OK]\n";
}

void test_insert_back_two() {
    list l;
    l.insert_back(1);
    l.insert_back(2);
    auto it = l.begin();
    assert(*it == 1);
    ++it;
    assert(*it == 2);
    assert(l.size() == 2);
    std::cout << "Test insert_back two elements: [OK]\n";
}

void test_erase_front() {
    list l;
    l.insert_front(10);
    l.insert_front(20);
    l.erase_front();
    assert(l.size() == 1);
    assert(*l.begin() == 10);
    std::cout << "Test erase_front: [OK]\n";
}

void test_erase_back_two() {
    list l;
    l.insert_back(10);
    l.insert_back(20);
    l.insert_back(30);
    l.erase_back();

    assert(l.size() == 2);
    auto it = l.begin();
    assert(*it == 10);
    ++it;
    assert(*it == 20);

    std::cout << "Test erase_back two elements: [OK]\n";
}

void test_empty() {
    list l;
    assert(l.empty());
    std::cout << "Test empty: [OK]\n";
}

int main() {
    test_insert_front();
    test_insert_back();
    test_erase_front_empty();
    test_erase_back();
    test_size();
    test_iterator();
    test_insert_front_single();
    test_insert_back_two();
    test_erase_front();
    test_erase_back_two();
    test_empty();

    return 0;
}
