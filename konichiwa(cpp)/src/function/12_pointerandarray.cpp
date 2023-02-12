#include <iostream>
using namespace std;

int main()
{
    int no[4] = {1, 2, 3, 5};
    int *ptr = no;

    //@ cout<<*(ptr++);
    //@ cout<<*(Ptr);
    //? output is 1,2

    cout << "the value of no[0] is =" << *(ptr) << endl;
    cout << "the value of no[1] is =" << *(ptr + 1) << endl;
    cout << "the value of no[2] is =" << *(ptr + 2) << endl;
    cout << "the value of no[3] is =" << *(ptr + 3) << endl;


//? pointer array loop:----
    for (size_t i = 0; i < 4; i++)
    {
        cout << "the value of no["<<i<<"] is = " << *(ptr + i) << endl;
    }

    return 0;
}