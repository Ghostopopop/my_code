#include<iostream>
/*
there are 2 types of header files 
1th is system defined which is inbuild in compiler .
#include <....> is system defined
2nd is user defined written by  user it self.
#include "is user defined"
*/
using namespace std;
int main()
{
  int a,b;  
 cin>>a>>b ;
//? operators in c++
//@ arthmatic operators 
cout<<"the value of a + b is "<<a + b<<endl;
cout<<"the value of a - b is "<<a - b<<endl;
cout<<"the value of a * b is "<<a * b<<endl;
cout<<"the value of a / b is "<<a / b<<endl;
cout<<"the value of a % b is "<<a % b<<endl;
cout<<"the value of a++ is "<<    a++ <<endl;
cout<<"the value of a-- is "<<    a-- <<endl;
cout<<"the value of ++a is "<<    ++a <<endl;
cout<<"the value of --a is "<<    --a <<endl;
cout<<endl;

//@ comperasion operators
//? returns bool values 
cout<<"the value of a==b "<<(a==b)<<endl;
cout<<"the value of a!=b "<<(a!=b)<<endl;
cout<<"the value of a<=b "<<(a<=b)<<endl;
cout<<"the value of a>=b "<<(a>=b)<<endl;
cout<<"the value of a<b "<<(a<b)<<endl;
cout<<"the value of a>b "<<(a>b)<<endl;
cout<<endl;

//@ logical opperator 
//# returns bool values 

cout<<"the value of a==b&&a<b "<<((a==b)&&(a<b))<<endl;
cout<<"the value of a>=b||a==b "<<((a>=b)||(a==b))<<endl;
cout<<"the value of !a==b "<<(!(a==b))<<endl;

 return 0;
}