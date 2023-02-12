#include <iostream>
using namespace std;
//! structure
//~ typedef is used for reducing syntax
//? it`s memory is == to sum  of all datatype memory
typedef struct agent
{
  int age;
  int code;
  char f;
} a;

//$ union helps for better memory allocation
// @as it use only the memory taken == largest datatype in the union
union money
{
  int dollar;
  int gold;
  float bitcoin;
  char silver;
};

struct name 
{
  int a ;
  float b; 
  char c;
};

int main()
{


  enum Meal
  { breakfast, lunch, dinner};
  Meal m2 = lunch;
  cout << (m2 == 1) << endl;
  cout << breakfast << endl;
  cout << lunch << endl;
  cout << dinner << endl;

  //@ we can also use struct agent 007...
  a oo7;
  oo7.code = 101;
  oo7.age = 69;
  oo7.f = 'b';
  cout << oo7.age << endl;
  cout << oo7.code << endl;
  cout << oo7.f << endl;

  union money m1;
  //! error m1.dollar=100; only one object to be used form union
  m1.silver = 's';

  cout << m1.silver << endl;

  return 0;
}