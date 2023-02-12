#include<stdio.h>
#include<string.h>
#include <stdlib.h>


void opt(int *a,int *b,int *c);


int main()
{
    int x=1,y=5,z=9;
    opt(&x,&y,&z);

return 0;
}
void opt(int *a,int *b,int *c){
int sum , avg ;
sum = *a + *b +*c;
avg = sum/3;
printf("the sum is %d and avg is %d",sum , avg);
}



