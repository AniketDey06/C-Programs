#include <stdio.h>

int main(void)
{
    int t,i=1;
    printf("Enter total number of test case:\n");
    scanf("%d",&t);
    while(t>=i)
    {

        int n,x,p,c=0,num,marks;
        printf("Enter total number of qustion in the exam:");
        scanf("%d",&n);
        printf("Enter the number of questions correct in the exam:");
        scanf("%d",&x);
        printf("Enter the pass marks of the exam:");
        scanf("%d",&p);
        c=n-x;
        num=x*3;
        marks=(num-c);
        if(marks>=p)
        {
            printf("Pass\n\n");
        }
        else
        {
            printf("Fail\n\n");
        }
        i++;
    }
    return 0;
}
