#include<stdio.h>
#include<string.h>
#include <stdlib.h>



int main()
{int year;

printf("plz enter the year :");
scanf("%d",&year);
if (year/4 && year/100 || year/400)
{
    printf("it's leap year");
}
else(printf("it a normal year"));

system("pause");

return 0;
}