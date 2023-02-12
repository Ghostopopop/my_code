#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int *j; //? the j is a pointer
    j = &i;
    int **r; //? r is a double pointer
    r = &j;
    printf("the vlaue of i %d \n ", i);
    printf("the vlaue of &i %u\n", &i);
    printf("the vlaue of j %u\n  ", j);
    printf("the vlaue of &j %u \n ", &j);
    printf("the vlaue of *J %d\n ", *j);
    printf("the vlaue of *(&i) %d\n", *(&i));
    printf("the  vlaue of &r = %u \n", &r);
    printf("the  vlaue of r = %d \n", r);
    printf("the  vlaue of *r = %d \n", *r);
    printf("the  vlaue of *(&)r = %u \n", *(&r));

    return 0;
}