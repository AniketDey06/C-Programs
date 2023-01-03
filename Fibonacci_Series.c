#include<stdio.h>

int main()
{
    int fib[100],i,n,j;
    printf("How many nos. you want to generate?\n");
    scanf("%d",&n);
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];

    }
    for(j=0;j<n;j++)
    {
        printf("Fib[%d]=%d\n",j,fib[j]);
    }
    return 0;
}
