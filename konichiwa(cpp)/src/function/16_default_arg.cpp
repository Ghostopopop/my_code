#include <iostream>
using namespace std;
//? inlinr function
//* helps to reduce exe time for short function
//$ it injects function in main location for
//$ reducing exe time .........
inline int product(int a, int b)
{
    //%
    return a * b;
}

//% static int
int satatic(int a, int b)
{
    static int c = 0;
    c = c + 1;
    return a * b + c;
    //@ onec initizized it will retain its value
    //@ even for the next run
}

// # default argument/
//@ plz use default argument at the end in function
float mr(int a, float b = 4.12)
{
    return a * b;
}
//$ constant argumentss 
/*
~ int strlen (const char *p)
*/
int main()
{
    int money;
    //? default argument-----------------
    cout << "enter your money" << endl;
    cin >> money;
    cout << "your money intrest is =" << mr(money) << endl;
    //$ as in function we have 2 arguments but we assigined and returned a single value
    //* but as it is default argument it will use that value untile assigned by user

    int a, b;
    cout << "enter 2 values for product" << endl;
    cin >> a >> b;
    cout << product(a, b);

    return 0;
}