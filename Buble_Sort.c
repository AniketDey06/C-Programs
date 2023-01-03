#include<stdio.h>
int main()
{
    int data[100],i,n,step,temp,flag;

    printf("Enter the number of elements to be sort: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the number %d of %d: ",i+1,n);
        scanf("%d",&data[i]);
    }

    printf("\nEntered elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }

    for(step=0;step<n-1;step++)
    {
        flag=0;
        for(i=0;i<n-step-1;i++)
        {
            if(data[i]>data[i+1])
            {
                temp=data[i];
                data[i]=data[i+1];
                data[i+1]=temp;
                flag=1;
            }
        }

        if(flag==0)
        {
            printf("\nNo more pass is needed!!");
            break;
        }
        else
        {
            printf("\nAfter pass %d ==> ",step+1);
        }

        for(i=0;i<n;i++)
        {
            printf("%d ",data[i]);
        }
    }
    
    printf("\n\nFinal ascending order: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");
    return 0;
}
