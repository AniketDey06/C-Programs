#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,rev=0,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    printf("\n");
    while(rev)
    {
        i=rev%10;
        switch(i)
        {
            case 0:
            {
                printf("Zero ");
                break;
            }
            case 1:
            {
                printf("One ");
                break;
            }
            case 2:
            {
                printf("Two ");
                break;
            }
            case 3:
            {
                printf("Three ");
                break;
            }
            case 4:
            {
                printf("Four ");
                break;
            }
            case 5:
            {
                printf("Five ");
                break;
            }
            case 6:
            {
                printf("Six ");
                break;
            }
            case 7:
            {
                printf("Seven ");
                break;
            }
            case 8:
            {
                printf("Eight ");
                break;
            }
            case 9:
            {
                printf("Nine ");
                break;
            }
        }
        rev=rev/10;
    }
    return 0;
}
