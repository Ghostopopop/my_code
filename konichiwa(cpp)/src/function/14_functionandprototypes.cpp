#include <iostream>
using namespace std;

//% functional prototypes 
//? tell the comipiler to look for 
//? function further in code for exe
int sum(int,int);
void printf(void);
//@ int main is the first function to exe ,
//@ and last to terminate when exe
int main()
{int n1,n2;
     cout<<"enter the no 1";
     cin>>n1; 
     cout<<"enter the no 2"; 
     cin>>n2; 
     cout<<sum(n1,n2)<<endl;
     //$ sum is called the call function for sum function

    return 0;
}
//!function body
int sum(int a,int b){
int c = a+b;
return c;
}
void printf(){
    cout<<"printf == cout ";
}