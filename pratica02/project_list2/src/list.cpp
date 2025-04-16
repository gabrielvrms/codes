#include <iostream>
#include <cstdlib>
#include "./include/list.hpp"

void insert_list(tList* list, int new_data) {
    tNode* new_node = new(std::nothrow) tNode;
    if (!new_node) {
        std::cerr << "Error: No space left in memory." << std::endl;
        return;
    }

    new_node->data = new_data;
    new_node->next = list->first_elem;
    list->first_elem = new_node;
}

void remove_list(tList* list, int del_data) {
    if (!list->first_elem) {
        std::cerr << "Cannot delete from an empty list." << std::endl;
        return;
    }

    tNode* current = list->first_elem;
    tNode* prev = nullptr;

    while (current && current->data != del_data) {
        prev = current;
        current = current->next;
    }

    if (current) {
        if (!prev) {
            list->first_elem = current->next;
        } else {
            prev->next = current->next;
        }

        delete current;
    } else {
        std::cerr << "Node with data " << del_data << " not found in the list." << std::endl;
    }
}

void free_list(tList* list) {
    tNode* current = list->first_elem;
    while (current) {
        tNode* temp = current;
        current = current->next;
        delete temp;
    }
    list->first_elem = nullptr;
}

void print_list(const tList* list) {
    tNode* current = list->first_elem;
    std::cout << "List elements: ";
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

tList create_list() {
    return tList{nullptr};
}
