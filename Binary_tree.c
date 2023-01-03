#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node* create();
void preorder(node*);
void inorder(node*);
void postorder(node*);

void main()
{
    node *root;
    root=create();

    printf("\nThe preorder traversal of tree is:\n");
    preorder(root);
    printf("\nThe inorder traversal of tree is:\n");
    inorder(root);
    printf("\nThe postorder traversal of tree is:\n");
    postorder(root);
}

node* create()
{
    node *p;
    p=(node*)malloc(sizeof(node));

    printf("Enter data(-1 for no data):");
    scanf("%d",&p->data);

    if(p->data==-1)
        return NULL;

    printf("Enter left child of %d:\n",p->data);
    p->left=create();

    printf("Enter right child of %d:\n",p->data);
    p->right=create();

    return p;
}

void preorder(node* t)
{
    if(t!=NULL)
    {
        printf("%d  ",t->data);
        preorder(t->left);
        preorder(t->right);
    }
}

void inorder(node* t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        printf("%d  ",t->data);
        inorder(t->right);
    }
}

void postorder(node* t)
{
    if(t!=NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%d  ",t->data);
    }
}
