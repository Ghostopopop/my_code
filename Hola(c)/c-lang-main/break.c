#include <stdio.h>
 
 int main()
{

    int i = 0;

    while (i < 10)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n", i);
        i++;
    }

    return 0;
}

int main2()
{

    int i;

    for (i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}
//  

//