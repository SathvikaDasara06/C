#include <stdio.h>
#define SIZE 500

int queue[SIZE];
int front = -1, rear = -1;

// Function to insert element at the end
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
    } else {
        
            if(front==-1)
            front=0;
            rear++;
        queue[rear]=value;
        printf("%d inserted into the queue\n", value);
    }
}

// Function to display the queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main(){
  enqueue(10);
  enqueue(20);
  enqueue(30);   
  display();


return 0;
}