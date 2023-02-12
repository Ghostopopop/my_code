#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int arr[10];

    for (size_t i = 0; i < 10; i++)
    {
        printf("enter the value of %d \n",i+1);
        scanf("%d", &arr[i]);
    }

    for (size_t j = 0; j < 10; j++)
    {
        printf("the value of %d \n", arr[j]);
    }

    return 0;
}