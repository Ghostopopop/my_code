#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//? first function
int myFunction(int x)
{
  return 5 + x;
}
//! second function
int myFun(int x, int y)
{
  return x + y;
}
//% 3rd function
int action(int x, int y)
{
  return x + y;
}

//@ main
int main()
{
  //* first exe
  int z;
  scanf("%d", &z);
  printf("Result is: %d\n", myFunction(z));
  
  //% second exe
  int result = myFun(5, 3);
  printf("Result is = %d\n", result);
  // # 3rd exe
  printf("Result is: %d\n", action(5, 3));
  

  return 0;
}
