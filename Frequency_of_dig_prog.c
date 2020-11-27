#include <stdio.h>

void main() 
{
    long long num;
    int i,lastdig,n;
    int a[10];
    
    for(i=0;i<10;i++)
    {
        a[i]=0;
    }
    printf("\n Enter the number: ");
    scanf("%lld",&num);
    n=num;
       while(n)
       {
       lastdig=n%10;
       n=n/10;
       a[lastdig]++;
       }
       printf("\n Frequency of each digit in %lld is: ",num);
       for(i=0;i<10;i++)
    {
       printf("\n Frequency of %d is: %d",i,a[i]);
    }
  }
