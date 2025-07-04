#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;

// Function to insert an element at the end of the queue
void enqueue(int value) {
    if (rear == SIZE-1) {
        printf("Queue is full (Overflow)\n");
    } else {
        if (front == -1) front = 0; // first element being inserted
        rear++;
        queue[rear] = value;
        printf("%d inserted into the queue.\n", value);
    }
}

// Function to display the queue
void displayQueue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

// Sample usage
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    displayQueue();
    return 0;
}
