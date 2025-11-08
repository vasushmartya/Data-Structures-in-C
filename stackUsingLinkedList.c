#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void LinkedListTraversal(Node* ptr){
    printf("\n");
    if(ptr == NULL){
        printf("Empty Stack");
        return;
    }
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

Node* secondLastNode(Node* ptr){
    if (ptr == NULL)
        return NULL;
    else if(ptr->next == NULL)
        return ptr;
    while (ptr->next->next != NULL) {
        ptr = ptr->next;
    }
    return ptr;
}

void pushToEnd(Node** head){
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

int popFromEnd(Node** head){
    if (*head == NULL) {
        printf("Stack Underflow\n");
        return -1;
    } else if((*head)->next == NULL){
        Node* temp = *head;
        int deleted = temp->data;
        free(temp);
        *head = NULL;
        printf("Deleted %d successfully\n", deleted);
        return deleted;
    } else{
        Node* secondLast = secondLastNode(*head);
        Node* tail = secondLast->next;
        int deleted = tail->data;
        free(tail);
        secondLast->next = NULL;
        printf("Deleted %d successfully\n", deleted);
        return deleted;
    }
}

int main(){
    int choice;
    Node* head = NULL;
    while (1)
    {
        printf("\n***MENU***");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            pushToEnd(&head);
            break;
        case 2:
            popFromEnd(&head);
            break;
        case 3:
            LinkedListTraversal(head);
            break;
        case 4:
            exit(1);
            break;
        
        default:
            printf("Enter right choice\n");
            break;
        }
    }
    
    return 0;
}