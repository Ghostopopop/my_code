#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first value:");
    scanf("%d", &a);
    printf("Enter the second value:");
    scanf("%d", &b);
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);
    return 0;
}
    //The scanf function uses the same placeholders as printf:

/*int uses %d
float uses %f
char uses %c
character strings (discussed later) use %s

You must put & in front of the variable used in scanf. 
The reason why will become clear once you learn about pointers. 
It is easy to forget the & sign, and when you forget it 
your program will almost always crash when you run it.b */
