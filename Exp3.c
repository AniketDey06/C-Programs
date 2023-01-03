#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,odd=0,eve=0,count=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%2==0)
        {
            eve=n/2;
            printf("\n%d.f(%d)=%d",count,n,eve);
            n=eve;
        }
        else
        {
            odd=(3*n)+1;
            printf("\n%d.f(%d)=%d",count,n,odd);
            n=odd;
        }
        count++;
    }
    printf("\n\nTotal runs %d",count-1);
}
