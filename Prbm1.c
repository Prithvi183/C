// Calculate the sum of 1st and 2nd last digit of a five digit number taken from the user.

#include <stdio.h>

int main()
{
    int n, first, second, third, fourth, sum;

    printf("Enter a Five digit number: ");
    scanf("%d", &n);
    
    first = n/10000;
    n = n%10000;

    second = n/1000;
    n = n%1000;

    third = n/100;
    n = n%100;

    fourth = n/10;
    n = n%10;

    sum = first + fourth;

    printf("Final Result: %d", sum);
    
    return 0;
}