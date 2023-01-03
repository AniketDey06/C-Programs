#include<stdio.h>
int main()
{
    int c,first,last,middle,n,comp_count=0,search,array[100];
    printf("Enter number of element: ");
    scanf("%d",&n);

    printf("Enter %d integers in sorted order:\n",n);
    for(c=0;c<n;c++)
    {
        scanf("%d",&array[c]);
    }
    printf("Enter value: ");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        comp_count++;
        if(array[middle]<search)
        {
            first=middle+1;
        }
        else if(array[middle]==search)
        {
            printf("%d is present at location no.%d\n",search,middle+1);
            break;
        }
        else
        {
            last=middle-1;
        }
        middle=(first+last)/2;
    }
    if(first>last)
    {
        printf("Not found! %d isn't present in the list\n");
    }
    return 0;
}
