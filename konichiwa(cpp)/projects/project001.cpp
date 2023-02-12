#include <iostream>
using namespace std;
int main()
{ int a;cin >> a;
for(size_t i = 0; i < 10; i++)
{cout << a << "x" << (i + 1) << "=" << (a * (i + 1)) << endl;}
return 0;}