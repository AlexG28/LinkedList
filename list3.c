#include <stdlib.h>
#include <stdio.h>


typedef struct node {
    int value;
    struct node* next;
} node;

void printList(node *head);
void addElem(node *head, int value);
node* init(int value);

int main(){  

    node *head = init(-10);
    for(int i = 0; i < 20; i++){
        addElem(head, i);
    }
    printList(head);
    return 0;
}

node* init(int value){
    node *curr = (node *) malloc(sizeof(node));
    curr->value = value;
    curr->next = NULL;
    return curr; 
}

void addElem(node *head, int value){
    node *curr = head;
    
    while (curr->next != NULL){
        curr = curr->next;
    }

    curr->next = (node *) malloc(sizeof(node));
    curr->next->value = value;
    curr->next->next = NULL;
}



void printList(node *head){
    node *temp = head;

    while(temp != NULL){
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
}