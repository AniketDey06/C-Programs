#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *root = NULL;
void append();
void insert_at_beginning();
void insert_at_position();
void traverse();
int count = 0;

int main ()
{
    int input;
    for (;;)
    {
        printf("\n******************************************\n");
        printf("1. Append\n");
        printf("2. Insert at beginning\n");
        printf("3. Traverse\n");
        printf("4. Insert at position\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &input);

        switch (input)
        {
            case 1:
                append();
                break;
            case 2:
                insert_at_beginning();
                break;
            case 3:
                traverse();
                break;
            case 4:
                insert_at_position();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid operation \n");
        }
    }
    return 0;
}





void append()
{
    struct node *t, *temp;
    t = (struct node*)malloc(sizeof(struct node));
    count++;
    printf ("\nEnter element to be pushed : ");
    scanf ("%d", &t->data);
    t->next=NULL;
    if (root == NULL)
    {
        root = t;
    }
    else
    {
        temp = root;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = t;
    }
}





void insert_at_beginning()
{
    struct node *t;
    t = (struct node*)malloc(sizeof(struct node));
    count++;
    printf ("\nEnter element to be pushed : ");
    scanf ("%d", &t->data);
    if (root == NULL)
    {
        root = t;
        t->next=NULL;
    }
    else
    {
        t->next = root;
        root = t;
    }
}



void insert_at_position()
{
    int pos,i;
    struct node *t;
    struct node *temp=root;
    t = (struct node*)malloc(sizeof(struct node));
    printf ("\nEnter element to be pushed : ");
    scanf ("%d", &t->data);
    printf("\nEnter Position: ");
    scanf("%d", &pos);
    if (pos>count+1)
    {
        printf("Invalid position. There are %d elements in the list.",count);
        return;
    }
    count++;
    if (pos==1)
    {
        if (root == NULL)
        {
            root = t;
            t->next=NULL;
        }
        else
        {
            t->next = root;
            root = t;
        }
        return;
    }
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    t->next=temp->next;
    temp->next=t;
    printf("\nNumber has been pushed.");
}

void traverse()
{
    struct node *t;
    t = root;
    if (t == NULL)
    {
        printf("Linked list is empty.\n");
        return;
    }
    printf("There are %d elements in linked list.\n", count);
    while (t!= NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
}
