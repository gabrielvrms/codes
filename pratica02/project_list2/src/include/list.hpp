#ifndef LIST_HPP
#define LIST_HPP

struct tNode {
    int data;
    tNode* next;
};

struct tList {
    tNode* first_elem;
};

tList create_list();
void insert_list(tList* list, int new_data);
void remove_list(tList* list, int del_data);
void free_list(tList* list);
void print_list(const tList* list);

#endif // LIST_HPP
