#include<stdio.h>

void main()
{
    int m,n,c,d,first[10][10],second[10][10],sum[10][10];

    printf("Enter number of rows and columns of first matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter elements of the first matrix:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d",&first[c][d]);
        }
    }

    printf("Enter number of rows and columns of second matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter elements of the second matrix:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d",&second[c][d]);
        }
    }

    printf("Sum of entered matrices:-\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            sum[c][d]=first[c][d]+second[c][d];
            printf("%d\t",sum[c][d]);
        }
        printf("\n");
    }
}
