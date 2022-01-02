#include <stdio.h>

int main()
{
    int num[3][4];
    int i,j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            num[i][j]= (i*3)+j+1;
            printf("%3d",num[i][j]);
            printf("\n");
        }
    }
    printf("sizeof(i)=%d",sizeof(i));       //size of (i) = 4 bytes.
    printf("sizeof(num)=%d",sizeof(num));   //size of num[3][4] = 3*4*4 = 48 bytes.
    return 0;
}