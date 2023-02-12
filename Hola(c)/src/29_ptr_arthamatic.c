#include<stdio.h>
#include<string.h>
#include <stdlib.h>




int main()
{
int a= 5;
int *Ptr = &a;
printf("the address of ptr is %u ",Ptr);
Ptr++;//incriment the address by 4 ppoints in memory same for diccriment

//? we can also use prt = ptr +1
//! depend on data type a char will incress the address size by 1 
//@ for float it is 4 

printf("the address of ptr is %u ",Ptr);





return 0;
}