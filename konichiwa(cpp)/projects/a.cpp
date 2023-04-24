#include <iostream>
using namespace std;
//
bool accept(char ans)
{

    if (ans == 'y')
    {
        return true;
    }
    return false;
}
int main()
{
    cout << "enter y/n for downlode \n";
    char c;
    cin >> c;
    cout << accept(c);
auto 
    return 0;
}