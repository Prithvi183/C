#include <stdio.h>

int main()
{
    int t1, t2, nextterm, num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    t1 =0;
    t2 =1;
    nextterm = t1 + t2;

    printf("The Fibonacci series is ");

    for (int i=1; i<=num; i++)
    {
        printf("%d ",nextterm);
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }


    return 0;
}