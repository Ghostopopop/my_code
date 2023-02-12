#include <iostream>
using namespace std;
//// if_else_lader
int main()
{
  int age;
  cout << "plz enter the your age for validity check" << endl;
  cin >> age;
  if ((age < 16) && (age > 0))
  {
    cout << "you are not eligible ";
  }

  else if (age == 0)
  {
    cout << "dude you are  not borned yet";
  }

  else if ((age == 17) || (age == 16))
  {
    cout << "you will get temp card till you turn 18 ";
  }
  else if (age >= 110)
  {
    cout << "we cant provide card to ghost\'s ";
  }

  else
  {
    cout << "you will get your card soon...";
  }
  return 0;
}