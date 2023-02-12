#include <stdio.h>
int main()
{
    int i, j;
    for (size_t i = 0; i < 2; i++)
    {
        printf("Outer: %d\n", i);

        for (size_t j = 0; j < 3; j++)

            printf(" Inner: %d\n", j);
    }

    return 0;
}