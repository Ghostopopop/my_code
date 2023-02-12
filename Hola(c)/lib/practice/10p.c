//% 28 12 22 (10:49)
//! author $ghost

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fibonacci(int n);

int main()
{
    int a = 2;
    printf("%d%d%d\n", a, a++, ++a);
    //? compiler cant understand mmultipal incriment and decriment opp in one call
    //! it may cause error hence it is not preffered to be used
    system("pause");
    int y;
    printf("enter the no for  the serice :");
    scanf("%d", &y);
    printf("the no is %d", fibonacci(y - 1));

    return 0;
}

int fibonacci(int n)
{
    int x;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        x = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return x;
}