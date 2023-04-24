#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int c;
    cin >> c;
    (c % 2 == 0) ? (cout << "the no is even ") : (cout << "the no is odd");
    // low time of eecution
    cout << "the no is" << ((c % 2 == 0) ? "even " : "odd") << endl;

    return 0;
}