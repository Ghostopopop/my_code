#include<stdio.h>
int main()
{

int myNumber[] = {25, 50, 75, 100};
//printf("%d", myNumbers[0]);
//output is 25 but other way to change array is 
myNumber[0] = 33;
printf("%d", myNumber[0]);
// output is 33

// other way to define array
int yo[4];

yo[0] = 25;
yo[1] = 50;
yo[2] = 75;
yo[3] = 100;


return 0;
}