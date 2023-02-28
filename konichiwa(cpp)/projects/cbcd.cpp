#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int r;
    cin >> r;
    vector<int> a2{a};

    for (size_t i = 0; i < 50; r++, i++)
    {
        a2.push_back(pow(a,pow(r,a-1)));
        cout << a2[i]<<endl;
        free;
    }
}