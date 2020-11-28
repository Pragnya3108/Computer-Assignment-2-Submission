#include <stdio.h>
void main() 
{
    char ch;
    printf("Enter U to display uppercase alphabets.\n");
    printf("Enter L to display lowercase alphabets. \n");
    scanf("%c", &ch);

    if(ch=='U'||ch=='u') 
    {
        for(ch='A';ch<='Z';ch++)
        {
            printf("%c ", ch);
        }
    } 
    else if(ch=='L'||ch=='l') 
    {
        for(ch='a';ch<='z';ch++)
        {
            printf("%c ", ch);
        }
    } 
    else 
    {
        printf("Error! You have entered an invalid character");
    }

}