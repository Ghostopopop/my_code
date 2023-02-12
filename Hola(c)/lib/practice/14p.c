#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *a, int *b);
int main()
{
    int x = 1, y = 7;
    printf("x = 1 , y = 7");
    swap(&x, &y);
    printf("the value of x and y after swap is :%d and %d \n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
     temp = *a;
    *a = *b;
    *b = temp;
}
