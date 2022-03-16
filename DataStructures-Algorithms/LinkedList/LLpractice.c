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

void del(struct node** head_ref, int n){ //delete all ourrences of n
    struct node* temp = *head_ref;
    if(*head_ref==NULL){
        return;
    }
        while(temp->next!=NULL){
            if(temp->next->data == n){
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }
    struct node* final = *head_ref;
    if(final->data == n){
        final = final->next;
    }
}

int main(){
    struct node* head = NULL;
    push(&head, 2);
    push(&head, 2);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 2);
    push(&head, 6);

    del(&head, 2);

    out(head);
    return 0;
}