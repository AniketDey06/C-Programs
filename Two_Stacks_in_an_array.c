#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void push1();
int pop1();
void push2();
int pop2();
void display();

int stk[MAX],top=-1;
int top1=-1,top2=MAX;

void main()
{
	int ch;
	while(1)
	{
		printf("\nChoose operation :");
		printf("\nPress 1 to push-1");
		printf("\npress 2 to pop-1");
		printf("\nPress 3 to push-2");
		printf("\npress 4 to pop-2");
		printf("\npress 5 to display");
		printf("\npress 6 to exit\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
			    //Push element in stack-1
                push1();
                break;
			}
			case 2:
			{
			    //Pop element form stack-1
                pop1();
                break;
			}
			case 3:
			{
                //Push element in stack-2
                push2();
                break;
			}
			case 4:
			{
                //Pop element form stack-2
                pop2();
                break;
			}
			case 5:
            {
                //Display
                display();
                break;
            }
            case 6:
            {
                exit(0);
            }
			default:
			{
                printf("Wrog input");
			}
		}
	}
}

void push1()
{
    int num;
    if(top1<top2-1)
    {
        printf("\nEnter element to be pushed: ");
        scanf("%d",&num);
        top1++;
        stk[top1]=num;
    }
    else
    {
        printf("Stack is full\n");
    }
}

void push2()
{
    int num;
    if(top1<top2-1)
    {
        printf("\nEnter element to be pushed : ");
        scanf("%d",&num);
        top--;
        stk[top2]=num;
    }
    else
    {
        printf("Stack is Full\n");
    }
}

int pop1()
{
    if(top>=0)
    {
        printf("Popped element is = %d \n",stk[top1]);
        top1--;
    }
    else
    {
        printf("Stack is Empty\n");
    }
}

int pop2()
{
    if(top2<MAX)
    {
        printf("Popped element is = %d\n",stk[top2]);
        top2++;
    }
    else
    {
        printf("Stack is Empty");
    }
}

void display()
{
    int i;
    printf("\nElement is stack-1:\n");
    for(i=top1;i>=0;i--)
    {
        printf("%d\n",stk[i]);
    }
    printf("\nElement is Stack-2:\n");
    for(i=top2;i<MAX;i++)
    {
        printf("%d\n",stk[i]);
    }
}
