#include <stdio.h>
#define SIZE 3

int queue[SIZE];
int front = -1;
int rear = -1;

void insert(int a){
    if ((rear+1)%SIZE == front){
        printf("Queue is full\n");
        return;
    } else if (front == -1){
        front = 0;
    }
    rear = (rear+1)%SIZE;
    queue[rear] = a;
    printf("Inserted successfully\n");
}

int delete(){
    if(front==-1){
        printf("Queue is empty\n");
        return (int)NULL;
    }else if(front==rear){
        int deleted = queue[front];
        front = rear = -1;
        printf("deleted successfully\n");
        return deleted;
    }
    int deleted = queue[front];
    front = (front+1)%SIZE;
    printf("deleted successfully\n");
    return deleted;
}

void display(){
    if(front==-1){
        printf("Queue is empty\n");
    } else if(front <= rear){
        for (size_t i = front; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
    printf("\n");
    } else{
        for (size_t i = front; i < SIZE; i++)
        {
            printf("%d\t", queue[i]);
        }
        for (size_t i = 0; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

int main(){
    insert(1);
    insert(2);
    insert(3);
    delete();
    insert(4);
    display();
    return 0;
}