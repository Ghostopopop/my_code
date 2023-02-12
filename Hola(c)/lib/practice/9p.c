#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float avrage(int a, int b, int c);
float ferari(int t);
float kelvin(int k);
float grva(int G);
int factorial(int f);

int main()
{

    int F;
    printf("enter the no :\n");
    scanf("%d", &F);
    printf("the factorial of no is  %d\n", factorial(F));

    int m;
    printf("enter your mass to get weight\n");
    scanf("%d", &m);
    printf("your wight is %f\n", grva(m));

    int h;
    printf("enter the temp in c\n :");
    scanf("%d", &h);
    printf("the temp in f :%f and temp in k : %f\n", ferari(h), kelvin(h));

    int x, y, z;
    printf("the value of all 3 num \t:");
    scanf("%d%d%d", &x, &y, &z);
    printf("the value is %f\n", avrage(x, y, z));

    return 0;
}
int factorial(int f)
{
    int q;
    if (f == 0 || f == 1)

        return 1;

    else
        q = f * factorial(f - 1);
    return q;
}
float grva(int G)
{
    int l;
    l = G * 9.806;
    return l;
}
float kelvin(int k)

{
    int a;
    a = k + 273.15;
    return a;
}
float ferari(int t)
{
    float f;
    f = (1.800 * t) + 32;
    return f;
}
float avrage(int a, int b, int c)
{
    int d;
    d = (a + b + c) / 3;
    return d;
}
