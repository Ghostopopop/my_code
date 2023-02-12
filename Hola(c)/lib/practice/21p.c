#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int marks[5];
    int *ptr;
    ptr = &marks[0];
    for (size_t i = 0; i < 5; i++)
    {
        printf("enter the value of makes of %d student ", i + 1);
        scanf("%d", ptr);//% as prt = &marks no need of & ptr
        //? also works a ptr = marks         
        ptr++;
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("the makes of student is  %d \n", marks[i]);
    }

    return 0;
}