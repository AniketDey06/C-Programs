#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bord();
int main()
{
    int dice;
    int high=6,low=1;
    srand(time(NULL));
    dice = (rand()%(high-low+1))+low;
    printf("%d",dice);


}

void bord()
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