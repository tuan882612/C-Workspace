#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node* next;
};

void push(struct node** head_ref, int n){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = n;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void out(struct node* node){
    while(node != NULL){
        printf("%d ", node->data);
        node = node->next;
    }
    free(node);
}

void reverse(struct node** head_ref){
    struct node* prev = NULL;
    struct node* cur = *head_ref;
    struct node* next = NULL;
        while(cur!=NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
    *head_ref = prev;
}

int main(){
    struct node* head = NULL;
    push(&head, 10);
    push(&head, 23);
    push(&head, 81);
    push(&head, 19);
    printf("\nOriginal Linked List: ");
    out(head);

    reverse(&head);
    printf("\n\nReversed Linked List: ");
    out(head);
    return 0;
}