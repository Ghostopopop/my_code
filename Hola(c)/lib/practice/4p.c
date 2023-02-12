#include<stdio.h>
#include<string.h>
#include <stdlib.h>


int main()
{
// 97-122 = a-z ASCII Values


char c;
printf("enter the char ");
scanf("%c",&c);
if(c<=122 && c>=97 ){
    printf("it is a lower case");
}
else
{
    printf("it not lower case ");
}
system("pause");


return 0;
}