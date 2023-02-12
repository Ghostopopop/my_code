#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int mul[10];
    int z;
    puts("entrer the no");
    scanf("%d",&z);

    for (size_t i = 0; i < 10; i++)
    {
        mul[i] = z*(i + 1);
    }
    for (size_t i = 0; i < 10; i++)
    {
        printf(" %d x %d = %d\n",z ,i + 1, mul[i]);
        
    }
    return 0;
}