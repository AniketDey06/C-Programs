#include<stdio.h>
#include<conio.h>
int sum(int,int);
int sub(int,int);
int multi(int,int);
int div(int,int);
void main()
{
	float n1,n2,s,diff,mul,d;
	int ch;
	printf("Enter the two numbers:");
	scanf("%d%d",&n1,&n2);
	printf("Press 1 for addition\n");
	printf("Press 2 for subtraction\n");
	printf("Press 3 for multiplication\n");
	printf("Press 4 for divition\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	diff=sub(n1,n2);
	mul=multi(n1,n2);
	d=div(n1,n2);
	switch(ch)
	{
		case 1:
		{
            s=sum(n1,n2);
			printf("the additon is %.2f",s);
			break;
		}
		case 2:
		{
			printf("the subtraction is %.2f",diff);
			break;
		}
		case 3:
		{
			printf("the multiplication is %.2f",mul);
			break;
		}
		case 4:
		{
			printf("the divition is %.2f",d);
			break;
		}
		default:
		{
			printf("invalid input");
		}
	}
	getch();
}
int sum(int x,int y)
{
	    int z;
	    z=x+y;
	    return z;
}
int sub(int x,int y)
{
	    int z;
	    z=x-y;
	    return z;
}
int multi(int x,int y)
{
	    int z;
	    z=x+y;
	    return z;
}
int div(int x,int y)
{
	    int z;
	    z=x+y;
	return z;
}
