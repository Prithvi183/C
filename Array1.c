#include <stdio.h>

int main()
{
    int arr[10];    //declaration of array.

    for(int i=0; i < 10; i++)   //Accepting array elements from user.
    {
        printf("Enter the value%d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<10; i++)     //Display the taken values from user.
    {
        printf("The Value%d for the array is %d at the index(%d).\n", i+1, arr[i], i);
    }

    for(int i=9; i > -1; i--)   //Display the taken values in reverse order.
    {
        printf("The Value%d for the array is %d at the index(%d).\n", i+1, arr[i], i);
    }
    return 0;
}