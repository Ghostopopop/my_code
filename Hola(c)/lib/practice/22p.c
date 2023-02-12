#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printarray(int *ptr, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        printf("the elenments of the array are %d and value are %d \n ", i + 1, *(ptr + i));
    }
}

int main()
{
    int aar[] = {1, 3, 4, 5, 7};
    printarray(aar, 5);

    return 0;
}