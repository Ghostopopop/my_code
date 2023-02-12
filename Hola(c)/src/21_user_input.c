#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
char a[40];
printf("plz input your name\n");
//!scanf("%s",&a);
printf("hello %s\n ",a);
// ? as it is a string  output is not compleat
//! so we use gets function to get out put 

char fullName[30];

printf("Type your full name: \n");
fgets(fullName, sizeof(fullName), stdin);

printf("Hello %s", fullName);

return 0;
}