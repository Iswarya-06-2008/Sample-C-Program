//Displaying Each Character of string literal
#include<stdio.h>
int main()
{
    char country[10];
    printf("Enter a string : ");
    scanf("%[^\n]",country);

    for(int i=0 ; i<10 ; i++)
    {
        printf(" %c\t",country[i]);
    }
    return 0;
}
