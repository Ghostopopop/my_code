//? A pointer is a variable that stores the address of another variable.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int myAge = 43;         //? an int variable
    printf("%d\n", myAge);  //? Outputs the value of myAge (43)
    printf("%p\n", &myAge); //?Outputs the memory address of myAge (0x7ffe5367e044)
                            // !Here, the *ptr expression retrieves the value stored at the address pointed to by ptr, which is 10.
    int x = 10;
    int *ptr = &x;
    int y = *ptr; // y is now equal to 10

    printf("%d\n", *ptr);
    printf("%p\n", &ptr);
    printf("%p\n", &x);
    printf("%p\n", &y);

    int z = 10, *prt1 = &z;
    int **ptr2;
    ptr2 = &prt1;
    int j = **ptr2; // j is now equal to 10
    printf("%d", j);
    // *Here, the double pointer ptr2 stores
    //* the address of the pointer ptr1, which in turn stores the address of the variable x.

int c, *pc;
/*
// pc is address but c is not
?  pc = c;  // Error

// &c is address but *pc is not
*pc = &c;  // Error

// both &c and pc are addresses
 ? pc = &c;  // Not an error

// both c and *pc are values 
*pc = c;   // Not an error

*/




    free(ptr);//? it is used to free the memory in address

    return 0;
}
