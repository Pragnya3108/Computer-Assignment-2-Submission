#include <stdio.h>

void main() 
{
    int i,n,sum=0;
     printf("\n Enter the final limit: ");
      scanf("%d",&n);
    printf("\n Odd numbers from 1 to n are: ");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("\n %d",i);
            sum=sum+i;
        }
    }
     printf("\n Sum of Odd numbers from 1 to n is:%d ",sum);
}
