#include <iostream>
using namespace std;
//
int main()
{

    cout << "its break statement" << endl;
    for (size_t i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }

    cout << "its continue statement" << endl;
    for (size_t i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }
    
    return 0;
}