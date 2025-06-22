#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* next;
};

// Declare global head pointer
struct Node* head = NULL;

// Function that uses local ptr (not as a parameter)
void linkedlisttraversal() {
    // Declare ptr inside the function and initialize it with global head
    struct Node* ptr = head;

    // Traverse the linked list
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main() {
    // Allocate and set up nodes
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head = (struct Node*)malloc(sizeof(struct Node)); // allocate for head

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 22;
    third->next = NULL;

    // Call function with no parameters
    linkedlisttraversal();

    return 0;
}