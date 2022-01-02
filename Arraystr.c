#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    puts("Enter your name: ");
    gets(str);

    puts("Your name is ");
    puts(str);

    printf("Enter your name: ");
    scanf("%s",str);

    printf("Your name is %s.",str);
}