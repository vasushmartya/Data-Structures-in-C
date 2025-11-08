#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void LinkedListTraversal(Node* ptr){
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    Node* head;
    Node* second;
    Node* tail;

    head = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    tail = (Node*)malloc(sizeof(Node));

    if (head == NULL || second == NULL || tail == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    head->data = 11;
    head->next = second;

    second->data = 13;
    second->next = tail;

    tail->data = 17;
    tail->next = NULL;

    LinkedListTraversal(head);

    free(head);
    free(second);
    free(tail);
    
    return 0;
}