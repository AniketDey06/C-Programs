#include<stdio.h>
void main()
{
    int data[100],n,temp,i,j;
    printf("Enter the number of element to be sort: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d of %d: ",i+1,n);
        scanf("%d",&data[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=data[i];
        j=i-1;
        while(temp<data[j]&&j>=0)
        {
            data[j+1]=data[j];
            j--;
        }
        data[j+1]=temp;
    }
    printf("\n\nFinal ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
}
