// Find the reverse of the 3 digit number taken from user.

#include <stdio.h>

int main()
{
    int num, reverse, first, second, third;
     
     printf("Enter a 3 digit number: ");
     scanf("%d", &num);

    first = num / 100;
    num = num % 100;

    second = num /10;
    num = num % 10;

    third = num %10;

    reverse = 100*third + 10*second + first;

    printf("The reversed number is %d.", reverse);

    return 0;
}