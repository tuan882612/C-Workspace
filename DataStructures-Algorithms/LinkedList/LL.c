#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void push(struct node** head_ref, int n)
qq{
    struct node* link = (struct node*)malloc(sizeof(struct node));
    link->data = n;
    link->next = *head_ref;
    *head_ref = link;
}

void insertN(struct node** head_ref, int pos, int n)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = n;
    new_node->next = NULL;
    struct node* temp = *head_ref;
        while(pos!=2)
        {
            temp = temp->next;
            pos--;
        }
    new_node->next = temp->next;
    temp->next = new_node; 
}

void deleteB(struct node** head_ref)
{
    struct node* temp = *head_ref;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
    temp->next = NULL;
}

void sort(struct node** head_ref)
{
    struct node* current = *head_ref, *index = NULL;
    int temp;
        if(*head_ref == NULL)
        {
            return;
        }
        while(current != NULL)
        {
            index = current->next;
            while(index != NULL)
            {
                if(current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;                
        }
}
void insertL(struct node** head_ref, int n)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node*));
    new_node->data = n;
    new_node->next = NULL;
    struct node* last = *head_ref;
        while(last->next != NULL)
        {
            last = last->next;
        }
    new_node->next = last->next;
    last->next = new_node;
}

bool searchNode(struct node** head_ref, int n)
{
    struct node* cur = *head_ref;
        while(cur != NULL)
        {
            if(cur->data == n)
            {
                return true;
                free(cur);
            }
            cur = cur->next;
        }
        if(cur==NULL)
        {
            return false;
            free(cur);
        }
}

void reverse(struct node** head_ref)
{
    struct node* prev = NULL;
    struct node* cur = *head_ref;
    while(cur!=NULL)
    {
        struct node* nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    *head_ref = prev;
}

void out(struct node* node)
{
    while(node!=NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    free(node);
}

int main()
{
    struct node* head = NULL;
    push(&head, 10);
    push(&head, 23);
    push(&head, 15);
    push(&head, 32);
    printf("Linked List: ");
    out(head);
    // (searchNode(&head, 10)==1)? printf("\n10 found"): printf("\n10 not found");
    insertN(&head, 3, 99);
    insertL(&head, 100);
    // deleteB(&head);
    printf("\nNew Linked List: ");
    out(head);
    printf("\nLinked List sorted: ");
    sort(&head);
    out(head);
    printf("\nLinked list reversed: ");
    reverse(&head);
    out(head);
    return 0;
}