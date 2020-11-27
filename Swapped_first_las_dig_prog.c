#include <stdio.h>

void main() 
{
    int n,lastdig,firstdig,i,t;
    printf("\n Enter a number: ");
    scanf("%d",&n);
    lastdig=n%10;
       while(n>=10)
       {
           n=n/10;
           firstdig=n;
       }
       printf("\n The original first digit is: %d and the last digit is: %d",firstdig,lastdig);
       for(i=0;i<n;i++)
       {
           t=firstdig;
           firstdig=lastdig;
           lastdig=t;
       }
        printf("\n The swapped first digit is: %d and the last digit is: %d",firstdig,lastdig);
}
