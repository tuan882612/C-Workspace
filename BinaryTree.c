#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *new_node(int val)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct node* insert(struct node* node, int val)
{
    if(node == NULL)
    {
        return new_node(val);
    }
    if(val < node->data)
    {
        node->left = insert(node->left, val);
    } 
    else if(val > node->data)
    {
        node->right = insert(node->right, val);
    }
    return node;
}

void out(struct node *root)
{
    if(root != NULL)
    {
        out(root->left);
        printf("%d ", root->data);
        out(root->right);
    }
}

int main(){
    struct node *root = NULL;
    int arr[] = {10,23,29,18,239,392};
    int len = sizeof(arr)/sizeof(arr[0]);
        for(int i = 0; i<len; i++)
        {
            if(i == 0)
            {
                root = insert(root, arr[0]);
            }
            insert(root, arr[i]);
        }
    out(root);
    return 0;
}