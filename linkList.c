#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

void append(struct Node** head, int v){
    struct Node *new=(struct Node*)malloc(sizeof(struct Node));
    new->data=v;
    new->next=*head;
    *head=new;
}

void print(struct Node* head){
    while (head!=NULL)
    {
        printf("%d,",head->data);
        head=head->next;
    }printf("\n");
    
}

int main(){
    struct Node* head=NULL;
    int i=0;
    while ( i!=10)
    {
        append(&head,i);i++;
    }
    
    print(head);
}