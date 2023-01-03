#include<stdio.h>
void main()
{
    int c,n,search,array[100];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(c=0;c<n;c++)
    {
        printf("Enter the element %d of %d : ",c+1,n);
        scanf("%d",&array[c]);
    }
    printf("Enter value to find\n");
    scanf("%d",&search);
    for(c=0;c<n;c++)
    {
        if(array[c]==search)
        {
            printf("%d present at location %d",search,c+1);
            break;
        }
    }
    if(c==n)
    {
        printf("%d isn't present in the array\n",search);
    }
}
