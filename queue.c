#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int a){
    if (rear==SIZE-1){
        printf("oops! queue full!\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    queue[++rear] = a;
}

int dequeue(){
    if (front>=rear){
        printf("\nOops! queue underflow!!\n");
        return;
    }
    int item = queue[front];
    front++;
    return item;
}

void display(){
    for (int i = front; i <= rear; i++){
        if (queue[i] != NULL){
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}

int main(){
    enqueue(1);
    display();
    enqueue(2);
    display();
    enqueue(3);
    display();
    enqueue(4);
    display();
    enqueue(5);
    display();
    enqueue(6);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(7);
    display();
    enqueue(8);
    display();
    return 0;
}