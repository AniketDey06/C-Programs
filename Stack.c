#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],top=-1;
void push(int);
int pop();
void display();
int main()
{
	int num,ele;
	while(1)
	{
		printf("\nPress 1 to push\nPress 2 to pop\nPress 3 to display\nPress 4 to exit\n");
		printf("\nEnter your choice:");
		scanf("%d",&num);
		switch(num)
		{
			case 1:
			{
			    //Push
                printf("Enter the element: ");
                scanf("%d",&ele);
                push(ele);
                break;
			}
			case 2:
			{
			    //Pop
                ele=pop();
                if(ele==0)
                {
                    printf("Stack is empty!!\n");
                }
                else
                {
                    printf("Poped element is %d\n",ele);
                }
                break;
			}
			case 3:
			{
			    //Display
                display();
                break;
			}
			case 4:
			{
                exit(0);
			}
			default:
			{
                printf("Invalid input");
			}
		}
	}
	return(0);
}

void push(int n)
{
	if(top==MAX-1)
	{
		printf("Stack is full\n");
	}
	else
	{
		top++;
		stack[top]=n;
		printf("Pushed %d successfully\n",n);
	}
}

int pop()
{
	if(top==-1)
	{
		return 0;
	}
	else
	{
		return stack[top--];
	}
}

void display()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        int i;
        printf("stack elements are:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
