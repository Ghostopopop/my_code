#include<stdio.h>
int main()
{

int a ;
 
printf("plz enter your age:");
scanf("%d",&a);

if (a<18)
{
    printf("we cant serve you martini");
}
else
   printf("here is your martini");

return 0;
}