// Take input of 5 digit number from user and reverse and add them. 

#include <stdio.h>

int main()
{
    int reverse, num, first, second, third, fourth, fiveth;

    printf("Enter a number: ");
    scanf("%d", &num);

    first = num/10000;
    num = num%10000;

    second = num/1000;
    num %= 1000;

    third = num/100;
    num %= 100;

    fourth = num/10;
    num %= 100;

    fiveth = num%10;

    reverse = 10000*fiveth + 1000*fourth + 100*third + 10*second + first;

    printf("The reversed number is %d.", reverse);

    int  sum=0, a;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        a = num % 10;
        sum = sum + a;
        num = num / 10; 
    }

    printf("The Sum of the digits is %d.", sum);

    return 0;
}