#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void LinkedListTraversal(Node* ptr){
    printf("\n");
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

Node* tailNode(Node* ptr){
    if (ptr == NULL)
        return NULL;

    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    return ptr;
}

void insertToEnd(Node** head){
    Node* ptr;
    ptr = (Node*)malloc(sizeof(Node));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    int data;

    printf("\nEnter number to store: ");
    scanf("%d", &data);

    ptr->data = data;
    ptr->next = NULL;

    if (*head == NULL) {
        *head = ptr;
    } else {
        Node* tail = tailNode(*head);
        tail->next = ptr;
    }
    printf("\nInserted Successfully");
}

int main(){
    Node* head = NULL;

    insertToEnd(&head);
    insertToEnd(&head);
    insertToEnd(&head);

    LinkedListTraversal(head);

    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}
