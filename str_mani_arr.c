#include <stdio.h>
#include <string.h>

int stringlen(char[]);

int stringlen(char str[])
{
    int length = 0;

    for (int i=0; str[i]!='\0'; i++){
    length++;
    }

    return length;
}