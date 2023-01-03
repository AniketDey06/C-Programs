/*  1 2 3 4
    1 2 3
    1 2
    1         */
#include<stdio.h>
void main()
{
    int i,j,r;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    for(i=0;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}


