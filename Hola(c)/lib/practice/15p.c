#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int func(int a ){
    printf("the address is %u",&a);
}


int main()
{

int i =100;
  printf("The value of variable i is %d\n", i);
    func(i);
    printf("The address of variable i is %u\n", &i);



return 0;
}
