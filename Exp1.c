#include<stdio.h>

int main()
{
    int num,a,b,c,x,y;
    printf("Enter the 6 digits number: ");
    scanf("%d",&num);
    c=num%100;
    x=num/100;
    b=x%100;
    y=x/100;
    a=y%10000;
    printf("A=%d b=%d C=%d\n\n",a,b,c);
    if(a>b)
    {
        if(a>c)
        {
            printf("A=%d is the greatest number\n",a);
        }
        else
        {
            printf("C=%d is the greatest number\n",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("B=%d is the greatest number\n",b);
        }
        else
        {
            printf("C=%d is the greatest number\n",c);
        }
    }
    return 0;
}
