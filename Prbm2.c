// Calculate the sum of 5 digit number taken from the user.

#include <stdio.h>

int main ()
{
    int number, digit, sum=0;

    printf("Enter a 5 digit number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    printf("Sum of the digits are %d.", sum);

    return 0;
}