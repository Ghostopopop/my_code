#include<stdio.h>
#include<string.h>
#include <stdlib.h>


// Function declaration
int myFunction(int, int); //! first to run 

// The main method
int main() {
  int result = myFunction(5, 3); // call the function
  printf("Result is = %d", result); //! last to run but first exe in terminal
  return 0;
}

// Function definition
int myFunction(int x, int y) { //! second to run 
  return x + y;
}