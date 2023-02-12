#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //? pointrer dicralation
    int a = 3;
    int *ptr;
    int **ptr_Ptr;

    // equating pointer to address of a
    ptr = &a;

    // equating pointer to address of pointer

    ptr_Ptr = &ptr;

    printf("%d", **ptr_Ptr);//value of pointer
    

    return 0;
}