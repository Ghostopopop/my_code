#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int x = 100;
    int *ptr = &x;
    int *rtp = &x;
    int **z;
    printf("the address of  x is %u\n", ptr);
    ptr = ptr + 1;
    printf("the address of  x is %u\n", ptr);
    ptr = ptr - 1;
    printf("the address of  x is %u\n", ptr);
    rtp = ptr;
    printf("bouth addres is %u and %u\n", rtp, ptr);
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p4 = &array[0]; // p1 points to the first element of the array
    int *p5 = &array[5]; // p2 points to the sixth element of the array

    int diff = p5 - p4; // diff is 5, the number of elements between p1 and p2
    printf("the difference of value of pointer is %d\n", diff);

    int *p1 = &array[0];
    int *p2 = &array[5];

    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);

    if (p1 < p2)
    {
        printf("p1 points to an element before p2\n");
    }

    if (p1 == p2)
    {
        printf("p1 and p2 point to the same element\n");
    }
    return 0;
    }
