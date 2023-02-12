#include <iostream>
using namespace std;
//@ call by type and refrence

void swapptr(int *, int *);
void swap(int,int);

int main()
{
    int x, y;
    x = 10;
    y = 20;
    cout << "the value of a and b are" << x << y << endl;
    // swap(x, y);
    swapptr(&x, &y);
    cout << "the value of a is " << x << "the value of b is " << y << endl;
    return 0;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swapptr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
