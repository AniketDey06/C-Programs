#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node* create();
void insert(node*, node*);
void preorder(node*);
void inorder(node*);
void postorder(node*);


int main()
{
    char ch;
    node *root=NULL, *temp;
    do
    {
        temp=create();
        if(root==NULL)
            root=temp;
        else
            insert(root,temp);
        printf("\nDo you want to enter more (y/n)? :");
        getchar();
        scanf("%c",&ch);
    }while (ch=='y'||ch=='Y');

    printf("\nPreorder traversal :\n");
    preorder(root);
    printf("\nInorder traversal :\n");
    inorder(root);
    printf("\nPostorder traversal :\n");
    postorder(root);
    return 0 ;
}


node* create()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));

    printf("Enter data:");
    scanf("%d",&temp->data);
    temp->left=temp->right=NULL;
    return temp;
}


void insert(node* root, node* temp)
{
    if(temp->data < root->data)
    {
        if(root->left == NULL)
            root->left=temp;
        else
            insert(root->left,temp);
    }
    else if (temp->data > root->data)
    {
        if(root->right == NULL)
            root->right=temp;
        else
            insert(root->right,temp);
    }
}


void preorder(node* t)
{
    if(t!=NULL)
    {
        printf("%d ",t->data);
        preorder(t->left);
        preorder(t->right);
    }
}

void inorder(node* t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        printf("%d ",t->data);
        inorder(t->right);
    }
}

void postorder(node* t)
{
    if(t!=NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%d ",t->data);
    }
}
