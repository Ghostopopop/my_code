#include <iostream>
using namespace std;
  //
int main()
{
int age;
cin>>age;
switch (age)
{
case (18):
    cout<<"welcome";
    break;
case (17):
    cout<<"not so welcome";
    break;

default:
cout<<"plz run again";
    break;
}

    return 0;
}