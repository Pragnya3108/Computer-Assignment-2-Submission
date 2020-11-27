#include <stdio.h>

void main() 
{
    int n,count=0;
    printf("\n Enter the integer ");
    scanf("%d",&n);
       while(n)
       {
       n=n/10;
       count=count+1;
   }
   printf("\n Number of digits are: %d ",count);
}