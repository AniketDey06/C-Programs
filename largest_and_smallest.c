#include<stdio.h>
int main()
{
    int array[100],n,l,s,c,i;
    printf("Enter number of element: ");
    scanf("%d",&n);

    printf("Enter %d integers:\n",n);
    for(c=0;c<n;c++)
    {
        scanf("%d",&array[c]);
    }

    l=array[0];
    s=array[0];
    for(i=0;i<n-1;i++)
    {
        if(l<array[i+1])
        {
            l=array[i+1];
        }

        if(s>array[i+1])
        {
            s=array[i+1];
        }
    }
    printf("\nLargest number: %d",l);
    printf("\nSmallest number: %d",s);
}
