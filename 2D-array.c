#include <stdio.h>
#define row 20
#define column 20

int main()
{
    int arr[row][column];       //arr declaration;

    int i, j, m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);

    printf("Enter the number of column: ");
    scanf("%d", &n);

    //  Take input from user.
    for(i=0; i<m; i++)      //row
    {
        for (j=0; j<n; j++)     //column
        {
            printf("Enter the arr[%d][%d] th value ", i+1,j+1);
            scanf("%d", &arr[i][j]);
        } 
    }

    // Display the taken input from user.
    for(i=0; i<m; i++)      //row
    {
        for(j=0; j<n; j++)      //column
        {
            printf("arr[%d][%d]=%d \t", i,j,arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}
