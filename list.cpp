#include "list.hpp"

namespace blgt {

list::list() : _head(nullptr) {}

list::~list() {
    while (!empty()) {
        erase_front();
    }
}

void list::insert_front(std::int32_t value) {
    node* new_node = new node;
    new_node->_data = new std::int32_t(value);
    new_node->_next = _head;
    _head = new_node;
}

void list::insert_back(std::int32_t value) {
    node* new_node = new node;
    new_node->_data = new std::int32_t(value);
    new_node->_next = nullptr;

    if (!_head) {
        _head = new_node;
        return;
    }

    node* temp = _head;
    while (temp->_next != nullptr) {
        temp = temp->_next;
    }
    temp->_next = new_node;
}

void list::erase_front() {
    if (!_head) return;
    node* temp = _head;
    _head = _head->_next;
    delete temp->_data;
    delete temp;
}

void list::erase_back() {
    if (!_head) return;

    if (_head->_next == nullptr) {
        delete _head->_data;
        delete _head;
        _head = nullptr;
        return;
    }

    node* current_node = _head;

    while (current_node->_next->_next != nullptr) {
        current_node = current_node->_next;
    }

    delete current_node->_next->_data;
    delete current_node->_next;
    current_node->_next = nullptr;
}


bool list::empty() {
    return _head == nullptr;
}

std::size_t list::size() {
    std::size_t count = 0;
    node* current = _head;
    while (current != nullptr) {
        ++count;
        current = current->_next;
    }
    return count;
}

list::iterator list::begin() {
    return iterator{_head};
}

list::iterator list::end() {
    return iterator{nullptr};
}

list::iterator list::iterator::operator++() {
    if (_data != nullptr) _data = _data->_next;
    return *this;
}

list::iterator list::iterator::operator++(int) {
    iterator temp = *this;
    ++(*this);
    return temp;
}

std::int32_t& list::iterator::operator*() {
    return *(_data->_data);
}

bool operator==(const list::iterator& lhs, const list::iterator& rhs) {
    return lhs._data == rhs._data;
}

bool operator!=(const list::iterator& lhs, const list::iterator& rhs) {
    return !(lhs == rhs);
}

} 