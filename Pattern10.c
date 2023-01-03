#include<stdio.h>

int main()
{
    int num=1,c,r,i;
    for(c=0;c<10;c++)
    {
        if(c==0)
        {
            for(r=0;r<10;r++)
            {
                printf("%d   ",num);
                num++;
            }
            printf("\n");
        }
        else
        {
            for(r=0;r<10;r++)
            {
                printf("%d  ",num);
                num++;
            }
            printf("\n");
        }
    }
}
