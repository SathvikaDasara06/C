#include <stdio.h>
#include <stdlib.h>

// Define a node
struct Node {
    int data;
    struct Node* next;
};

// Top of the stack
struct Node* top = NULL;

// Push operation (insert at beginning)
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack Overflow\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("%d pushed to stack\n", value);
}

// Display the stack
void display() {
    struct Node* temp = top;
    if (temp == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    return 0;
}
