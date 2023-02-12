#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//! returnType functionName(parameter1, parameter2, parameter3) {
//! code to be executed
//! }
//# it void type examples
void fun(char name[45], int age)//! 1 function 
{
    printf("hello %s your age is %d \n", name, age);
}
void myFunction(int myNumbers[5]) //@ second function
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", myNumbers[i]);
    }
}

int main()
{

//* exe of 1 function
    fun("ghost", 18);
    fun("mk", 17);
    fun("task master", 16);

//? exe second function
    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction(myNumbers);

    return 0;
}