#include <stdio.h>

void main() 
{
    int n,count=0,lastdig,firstdig;
    printf("\n Enter a number: ");
    scanf("%d",&n);
    lastdig=n%10;
       while(n>=10)
       {
           n=n/10;
           firstdig=n;
       }
       printf("\n The first digit is: %d and the last digit is: %d",firstdig,lastdig);
}