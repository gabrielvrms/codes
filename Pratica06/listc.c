#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} tNode;

typedef struct stack {
    tNode* top;
} tStack;

typedef struct list {
    tNode* first_elem;
} tList;

typedef struct queue {
    tNode* front;
    tNode* rear;
} tQueue;

// Insert push
void push(tStack* stack, int value) {
    tNode* new_node = (tNode*) malloc(sizeof(tNode));
    if(new_node == NULL){
        printf("Error: No space left in memory.\n");
        return;
    }
    new_node->data = value;
    new_node->next = stack->top;
    stack->top = new_node;
}
// Insert pop
int pop(tStack* stack){
    if (stack->top == NULL){
        printf("stack underflow.\n");
        return -1;
    }
    tNode* temp = stack->top;
    int value = temp->data;
    stack->top = temp->next;
    free(temp);
    return value;
}
//Insert queue
void insert_rear(tQueue* queue, int value) {
    tNode* new_node = (tNode*) malloc(sizeof(tNode));
    if (new_node == NULL) {
        printf("Error: No memory available.\n");
        return;
    }
    new_node->data = value;
    new_node->next = NULL;

    if (queue->rear == NULL) {
        // Fila vazia
        queue->front = queue->rear = new_node;
    } else {
        queue->rear->next = new_node;
        queue->rear = new_node;
    }
}


//Remove queue
int remove_front(tQueue* queue) {
    if (queue->front == NULL) {
        printf("Queue underflow.\n");
        return -1;
    }

    tNode* temp = queue->front;
    int value = temp->data;
    queue->front = temp->next;

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(temp);
    return value;
}

// Insert element at the beggining
void insert_list(tList *list, int new_data) {
    tNode* new_node = (tNode*) malloc(sizeof(tNode));
    if (new_node == NULL) {
        printf("Error: No space left in memory.\n");
        return;
    }

    new_node->data = new_data;
    new_node->next = list->first_elem; // Set next of new node
    list->first_elem = new_node; // Update list external pointer to new node
}

// Remove an element of value del_data
void remove_list(tList *list, int del_data) {
    // Check if the list is empty
    if (list->first_elem == NULL) {
        printf("Cannot delete from an empty list.\n");
        return;
    }

    tNode* current = list->first_elem;
    tNode* prev = NULL;

    // Traverse the list to find the node to delete
    while (current != NULL && current->data != del_data) {
        prev = current;
        current = current->next;
    }

    // If the node to delete is found
    if (current != NULL) {
        // If the node to delete is the first node
        if (prev == NULL) {
            list->first_elem = current->next;  // Update list pointer to skip the first node
        } else {
            prev->next = current->next;  // Link the previous node to the next of the current node
        }
    
        free(current);  // Free memory allocated for the node
    } else {
        printf("Node with data %d not found in the list.\n", del_data);
    }
}
//Free queue
void free_queue(tQueue* queue) {
    tNode* current = queue->front;
    tNode* temp;

    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }

    queue->front = NULL;
    queue->rear = NULL;
}


//Free stack
void free_stack(tStack* stack){
    tNode* current = stack->top;
    tNode* temp;

    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }
    stack->top = NULL;
}
// Release allocated memory for the list
void free_list(tList *list) {
    tNode* current = list->first_elem;
    tNode* temp;

    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);  // Free memory allocated for each node
    }

    list->first_elem = NULL;  // Set list pointer to NULL after freeing all nodes
}

// Print all elements of the list
void print_list(tList *list) {
    tNode* current = list->first_elem;

    printf("List elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
// Print stack
void print_stack(tStack* stack) {
    tNode* current = stack->top;
    printf("stack(top to bottom): ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

// Print queue
void print_queue(tQueue* queue) {
    tNode* current = queue->front;
    printf("Queue (front to rear): ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

//Queue constructot
tQueue create_queue() {
    tQueue queue;
    queue.front = NULL;
    queue.rear = NULL;
    return queue;
}

// Stack constructor
tStack create_stack() {
    tStack stack;
    stack.top = NULL;
    return stack;
}
// List constructor
tList create_list() {
    tList list;
    list.first_elem = NULL;  // Initialize the list with NULL pointer
    return list;
}
int main(){
    
    tQueue queue = create_queue();
  
    insert_rear(&queue, 10);
    insert_rear(&queue, 20);
    insert_rear(&queue, 30);
    insert_rear(&queue, 40);

    print_queue(&queue);

    remove_front(&queue);

    print_queue(&queue);

    free_queue(&queue);

    return 0;
}
