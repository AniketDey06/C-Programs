/*  97531
    9753
    975
    97
    9  */

#include<stdio.h>
#include<conio.h>
void main()
{
    int i=9,j;
    for(i=1;i<=9;i+=2)
    {
        for(j=9;j>=i;j-=2)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
