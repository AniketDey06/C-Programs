#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *ptr;
}*rear,*front,*temp;

void enq(int data);
void deq();
void display();
void queuesize();
int count = 0;

int main()
{
    int num,ch;
    front=rear=NULL;
    while (1)
    {
        printf("\n***********************");
        printf("\n1-Enque");
        printf("\n2-Deque");
        printf("\n3-Display");
        printf("\n4-Queue Size");
        printf("\n5-Exit");
        printf("\nEnter a choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            {
                printf("\nEnter Data: ");
                scanf("%d",&num);
                enq(num);
                break;
            }
            case 2:
            {
                deq();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                queuesize();
                break;
            }
            case 5:
            {
                exit(0);
            }
            default:
            {
                printf("\nInvalid Input.");
            }
        }
    }
}

void enq(int data)
{
    if (rear==NULL)
    {
        rear =(struct node*)malloc(sizeof(struct node));
        rear ->ptr=NULL;
        rear ->info=data;
        front=rear;
    }
    else
    {
        temp=(struct node*)malloc(sizeof(struct node));
        rear->ptr=temp;
        temp->info=data;
        temp->ptr=NULL;

        rear=temp;
    }
    count++;
}

void deq()
{
    if (front==NULL)
    {
        printf("\nError: Trying to display elements from queue.");
        return;
    }
    else
    {
        if (front==rear)
        {
            printf("\nDequeue value : %d",front->info);
            free(front);
            front=NULL;
            rear=NULL;
        }
        else
        {
            printf("\nDequed Value : %d",front->info);
            temp=front->ptr;
            free(front);
            front=temp;
        }
        count--;
    }
}

void display()
{
    if (front==NULL)
    {
        printf("Queue is empty.");
        return;
    }
    temp=front;
    while (temp!=NULL)
    {
        printf("%d ",temp->info);
        temp=temp->ptr;
    }
}

void queuesize()
{
    printf("\nQueue size : %d",count);
}
