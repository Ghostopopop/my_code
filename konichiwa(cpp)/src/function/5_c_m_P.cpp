#include <iostream>
#include<iomanip>
using namespace std;

int main()
{

//? constants 
const int a = 3;
//? we cant change its value like a = 30;
   
//@ manipulators
int b = 2,c= 36,d=234;
cout<<"the value of "<<b<<endl;
cout<<"the value of "<<c<<endl;
cout<<"the value of "<<d<<endl;

cout<<"the value of "<<setw(4)<<b<<endl;
cout<<"the value of "<<setw(4)<<c<<endl;
cout<<"the value of "<<setw(4)<<d<<endl;

//***** setw comes form iomanip libs******
//// C++ Operator Precedence
 int x=4,y=6,z=10;
 int sum;
 //# sum = x*y+z*3;
 //in such case we use bdmas
 //// but we use op prec
 sum = (x*y)+(z*3);
 //! beacuse of op prec * is exe then + exe 
cout<<"the value is "<<sum<<endl;
    return 0;
}
