#include<stdio.h>
int main()
{
    int data[100],n,i,j,max,temp;
    printf("Enter the element to be sorted: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d of %d: ",i+1,n);
        scanf("%d",&data[i]);
    }

    for(i=n-1;i>0;i--)
    {
        max=0;
        for(j=1;j<=i;j++)
        {
            if(data[j]>data[max])
            {
                max=j;
            }
        }
        printf("\nFinding the max element in arr[%d...%d], max value=%d",0,i,data[max]);
        temp=data[max];
        data[max]=data[i];
        data[i]=temp;
    }
    printf("\n\nFinal order: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
    return 0;
}
