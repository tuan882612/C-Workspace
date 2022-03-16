#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void push(struct node **head_ref, int n){
    struct node* link = (struct node*)malloc(sizeof(struct node));
    link->data = n;
    link->next = *head_ref;
    *head_ref = link;
}

void out(struct node* node){
    struct node* slow = node;
    struct node* fast = slow;
        while(fast && fast->next!=NULL){
            printf("%d ", slow->data);
            slow = slow->next;
            fast = fast->next->next;
        }
}

int main(){
    struct node* head = NULL;
        for(int i=1; i<=6; i++){
            push(&head, i);
        }
    printf("Linked List Printed: ");
    out(head);
    return 0;
}