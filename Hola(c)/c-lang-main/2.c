#include <stdio.h>
int main()
{
    int a;
    a = 3;

    float b;
    b = 300.999;

    char yo = 'm'; // charactor must be in ""

    double d;
    d = -999999999999999.73;
    int e = 12;

    printf("a+b is not c hehe %f\n", a + b);
    printf("a-b is not c hehe %f\n", a - b);
    printf("a*b is not c hehe %f\n", a * b);
    printf("a/b is not c hehe %f\n", a / b);
    printf("a/b is not c hehe %d\n", a % e);
    printf("%d\n", ++a);
    printf("%f\n", --b);
    printf("%c\n", yo);
    printf("%lf\n", d);
    printf("%d\n", sizeof d);
    return 0;
}