#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main()
{

       for (size_t i = 1; i <= 100; i++)
       {
              if (i % 15 == 0)
              {
                     cout << "fizbuzz" << endl;
              }
              else if (i % 3 == 0)
              {
                     cout << "fiz" << endl;
              }
              else if (i % 5 == 0)
              {
                     cout << "buzz" << endl;
              }
              else
              {
                     cout << i << endl;
              }
       }

       return 0;
}