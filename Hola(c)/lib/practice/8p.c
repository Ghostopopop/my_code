#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a, i, j;
    printf("enter the table of no you want :");
    scanf("%d", &a);

    for (size_t i = 1; i < 11; i++)
    {

        printf("%d x %d = %d\n", a, i, a * i);
    }

    system("pause");

    return 0;
}