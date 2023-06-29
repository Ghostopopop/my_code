#include <iostream>
#include <string>
#include <vector>
#define pi 3.14
#define ten 10
#define LOG(x) cout << x << endl;
using namespace std;
#define   num 2
void main()
{
#if num == 2
    cout << ("#if statement compile");
#else
    cout << ("#else statement compile");
#endif
}

