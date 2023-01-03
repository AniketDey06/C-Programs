#include<stdio.h>
#include<stdlib.h>
int main()
{
  	int arr[50],i,n,pos,item;
  	printf("Enter the number elements of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements %d/%d:",i+1,n);
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is:");
    for(i=0;i<=n-1;i++)
    {
        printf("%d ",arr[i]);
    }
  	printf("\nEnter the position where the elements is deleted from this array:");
  	scanf("%d",&pos);
  	item=arr[pos-1];
  	printf("\nThe element  deleted is %d",item);

  	for(i=pos-1;i<=n;i++)
  	{
  		arr[i]=arr[i+1];
	}
  	printf("\nAfter deletion,the array is:");
	for(i=0;i<=n-2;i++)
	{
	    printf("%d ",arr[i]);
	}
    return 0;
}

