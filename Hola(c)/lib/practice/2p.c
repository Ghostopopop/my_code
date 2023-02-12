#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    float s;
    printf("enter your anuual pay check ");
    scanf("%f", &s);
    if (s < 250000)
    {
        puts("no incone tax");
    }
    else
    {

        if (250000 <= s >= 500000)
        {
            printf("the tax on your sallery id 5%% : %f\n", s*1/20);
        }
        else if (500000 >= s >= 1000000)
        {
            printf("the tax on your sallery id 20%% : %f\n", s*1/5);
        }

        else
        {
            printf("the tax on your sallery id 30%% : %f\n", s*3.33);
        }
    }

    return 0;
}