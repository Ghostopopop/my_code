#include <iostream>
using namespace std;
//
int main()
{
    int a = 1;
    int *b = &a;
    int **c = &b; 
    //@  & --> is  address of  operator
    //% * --> is derefrence operator
    //? c++ pointers are inharited from  c
    cout << "the address of a is " << &a << endl;
    cout << "the address of a is " << *(&a) << endl;
    cout << "the value of b is " << b << endl;
    cout << "the value of adress b is " << *b << endl;
    cout << "the address of  b is " << &b << endl;
    //@ pointer to pointer 
    cout << "the value  of  c is " << c << endl;
    cout << "the value  of  *c is " << *c << endl;
    cout << "the value  of  **c is " << *(*c) << endl;

    return 0;
}