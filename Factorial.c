#include <stdio.h>

int main()
{
    int fact=1, num;

    printf("Enter a number: ");
    scanf("%d",&num);

    for (int i = 2; i <= num; i++)
    {
        /* code */
        fact = fact*i;
    }

    printf("Factorial of %d is %d.", num, fact);
    return 0;
} 