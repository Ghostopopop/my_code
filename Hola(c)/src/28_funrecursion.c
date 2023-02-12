#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sum(int k);

int main()
{

    int result = sum(10);
    printf("%d", result);
    return 0;
}

int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1); //% k is 10 so function 10 +(10 -1)
        // % 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0 == 55
    }
    else
    {
        return 0;
    }
}