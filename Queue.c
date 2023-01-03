#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX],front=-1,rear=-1;
void enqueue();
void dequeue();
void dispaly();
void main()
{
    int ch;
    while(1)
    {
        printf("\nChoose one option:-\n");
        printf("    1.Enqueue\n");
        printf("    2.Dequeue\n");
        printf("    3.Display\n");
        printf("    4.Exit\n");
        printf("Enter Your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            defult:
                printf("Wrog input");
        }
    }
}

void enqueue()
{
    int num;
    if(rear==(MAX-1))
    {
        printf("The Queue is overflow...\n");
        printf("Front:%d, Rear:%d\n",front,rear);
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        printf("Enter the element to be inserted: ");
        scanf("%d",&num);
        rear++;
        queue[rear]=num;
        printf("Front:%d,Rear:%d\n",front,rear);
    }
}

void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("Queue is empty..");
        printf("Front:%d,Rear:%d\n",front,rear);
    }
    else
    {
        printf("Dequeued element is:%d",front);
        front++;
        printf("Front:%d,Rear:%d\n",front,rear);
    }
}

void display()
{
    int i;
    if(front==-1||front>rear)
    {
        printf("Queue is empty..");
    }
    else
    {
        printf("Status of queue is:\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
