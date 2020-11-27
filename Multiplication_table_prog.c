#include <stdio.h>

void main() 
{
    int n,prod,lastdig,firstdig,i,t;
    printf("\n Enter a number: ");
    scanf("%d",&n);
    lastdig=n%10;
       while(n>=10)
       {
           n=n/10;
           firstdig=n;
       }
       printf("\n The multiplication table of %d is: ",n);
       for(i=1;i<=10;i++)
       {
          prod=i*n;
          printf("\n %d ",prod);
       }
       
}