#include <iostream>
using namespace std;
//
int main()
{
    int n = 3, p = 3;

    for (size_t i = 0; i < n; i++)
    {
        cout << endl;

        for (size_t i = 0; i < p; i++)
        {
            cout << i + 1 << endl;
        }
    }

    return 0;
}