#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int arr[1000],arr2[100],n,m,mul,i,mm,count,j,k;
    printf("Enter value of 'M': ");
    scanf("%d",&m);
    printf("Enter value of 'N': ");
    scanf("%d",&n);
    if((m<n)&&(m>0)&&(n>0)&&(n<=100))
    {
        i=0;
        j=0;
        k=0;
        count=0;
        while(1)
        {
            mul=(pow(2,i)*m);
            mm=mul%n;
            if(mm==0)
            {
                printf("%d ",mm);
                arr[i]=mm;
                break;
            }
            else
            {
                printf("%d ",mm);
            }
            arr[i]=mm;
            count++;
            i++;
        }
        while(j<count)
        {
            if(arr[j]!=arr2[k])
            {
                arr2[k]=arr[j];
                k++;
            }
            j++;
        }
        i=0;
        printf("\nDistinct integers are: \n");
        while(i<k)
        {
            printf("%d  ",arr2[i]);
            i++;
        }
        printf("\nTotal number of Distinct integer is: %d\n",k);
    }
}
