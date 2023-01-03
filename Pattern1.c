/*  * * * *
    * * * *
    * * * *
    * * * * */
#include<stdio.h>
void main()
{
    int i,j,c,r;
    printf("Enter number of columns and rows: ");
    scanf("%d%d",&c,&r);
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
