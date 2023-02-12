#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sub(int maths, int chem, int phy)
{
    int sum = maths + chem + phy;
    return sum;
}

int main()
{
    int x, y, z;
    printf("enter marks of maths chem phy out of 50 :\n");
    scanf("%d%D%D", &x, &y, &z);
    float b = sub(x, y, z);
    float a = (b / 150) * 100;
    if (a <= 33)
    {
        printf("you faild :%f%%", a);
    }
    else if (a <= 40)
    {
        printf("yo pass but wite little maggrine %f%%", a);
    }
    else
        (printf("you passed %f%%", a));

    return 0;
}
