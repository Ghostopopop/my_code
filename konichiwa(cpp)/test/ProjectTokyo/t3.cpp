//?------------------------------------------
//! author: hitarth (ghost)
//` date: 2023-06-02 10:49:57
//?------------------------------------------//
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
void yo(long long int *z)
{
    *z *= 2;
}
int main()
{
    long long int m = 1;
    for (size_t i = 0; i < 65; i++)
    {
        yo(&m);
        cout << m << endl;
    }

    return 0;
}