#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i1, i2, i3, i4;
    puts("enter the int");
    scanf("%d%d%d%d", &i1, &i2, &i3, &i4);
    
    //! it is called a if loop(unofficialy)

    int g = i1;
    if (i2 > i1)
    g = i2;
    if (i3 > i2)
    g = i3;
    if (i4 > i3)
    g = i4;

    printf("the greatest no is :%d", g);
    system("pause");

    return 0;
}