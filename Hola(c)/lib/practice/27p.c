#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int result = 0;
    int array[7] = {-1, -3, 1, 2, 3, 4,-2};
    for (size_t i = 0; i < 7; i++)
    {

        if (array[i] >= 0)
        {
            result++;
        }
    }
    printf("the no of positive int are %d", result);

    return 0;
}