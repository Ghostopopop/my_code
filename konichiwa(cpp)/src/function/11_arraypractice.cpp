#include <iostream>
using namespace std;
int main()
{
   int marks[] = {12, 23, 45, 67};
   int i = 0;
   //// while(i<4);
   ////   cout<<"The value of marks"<<i<<"is"<<marks[i]<<endl;
   //// i++;
   ////

   do
   {
      cout << "The value of marks " << i << " is " << marks[i] << endl;
      i++;
   } while (i < 4);
   return 0;
}