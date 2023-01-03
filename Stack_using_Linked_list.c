#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *ptr;
}*top,*temp;

void push(int data);
void pop();
void display();
void stack_count();

int count=0;

void main()
{
    int ch,num;
    while(1)
    {
        printf("\n*******************************");
        printf("\n 1-Push");
        printf("\n 2-Pop");
        printf("\n 3-Display");
        printf("\n 4-Stack Count");
        printf("\n 5-Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                printf("Enter a data: ");
                scanf("%d",&num);
                push(num);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                stack_count();
                break;
            }
            case 5:
            {
                exit(0);
            }
            default:
            {
                printf("Invalid input.");
            }
        }
    }
}

void push(int data)
{
    if(top==NULL)
    {
        top=(struct node*)malloc(sizeof(struct node));
        top->info=data;
        top->ptr=NULL;
    }
    else
    {
        temp=(struct node*)malloc(sizeof(struct node));
        top->info=data;
        top->ptr=top;
        top=temp;
    }
    count++;
}

void pop()
{
    if(top==NULL)
    {
        printf("\nUnderflow Error : Trying to pop from empty stack.");
        return;
    }
    else
    {
        temp=top;
        temp=temp->ptr;
    }
    printf("\nPopped value : %d",top->info);
    free(top);
    top=temp;
    count--;
}

void display()
{
    if(top==NULL)
    {
        printf("\nStack is empty.");
        return;
    }
    temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->info);
        temp=temp->ptr;
    }
}

void stack_count()
{
    printf("\nNo. of elementes is stack: %d",count);
}
