#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int n);

int main()
{
    int b;
    printf("enter the sum \n");
    scanf("%d", &b);
    printf("the sum is equal to :%d", sum(b));

    return 0;
}
int sum(int n)
{

    if (n > 0)
    {
        return n + sum(n - 1);
    }
    else
    {

        return 0;
    }
}