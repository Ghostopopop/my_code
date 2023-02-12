#include <stdio.h>
int main()
{
    int a;
    printf("what is value of a :\n");
    scanf("%d", &a);

    if (a >= 7)
    {
        printf("number is 7 ");
    }
    else
    {
        while (a != 7)
        {
            printf(" :(\n ");
        }
    }

    return 0;
}