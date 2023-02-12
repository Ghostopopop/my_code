#include<stdio.h>
#include<string.h>
#include <stdlib.h>




int main()
{
int s[3];
int *ptr ;
ptr = &s[0];
printf("%d\n",ptr);
ptr =ptr +2;
printf("%d",ptr);



return 0;
}