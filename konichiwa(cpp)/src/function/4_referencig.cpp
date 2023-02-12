#include <iostream>
using namespace std;
int c = 45;
int main()
{
 //@ refrence_variable 
//! how refrence variable works
float y = 450;
//% the & is address of point x and &x == value y 
float &x = y;
cout<<y<<endl<<x<<endl;


//? *****************typecasting ***************************************
int z = 13;
float q =1.31;
cout<<"the value of z is "<<float(z)<<endl;
// it is same asscout<<"the value of z is "<<(float)z;
cout<<"the value of q is "<<int(q)<<endl;

int w = int(q); 
cout<<"the vlaue of w is "<<w<<endl;
cout<<"the vlaue of w+z is "<<w+int(z)<<endl;
cout<<"the vlaue of w+z is "<<w+(int)z<<endl;


//**********data type and basic opperation *************
    int a, b, c;
    cout << "enter the value of no1" << endl;
    cin >> a;
    cout << "enter the value of no2" << endl;
    cin >> b;
    c = a + b;
    cout << "the value of no1+No2 is " << c << endl;
    cout << ::c;

    float d = 3.14f;
    //? to pass vlaue of 3.14 can cause error hence we use a f
    //// to specify that the no passed is a float
    double e = 3.14;
    long int f = 11111;
    cout << d << endl
         << e << endl<< f << endl;

    // # size of operator
    //?size of op declare the size of data in bytes
    cout << "the value of 3.14 is " << sizeof(3.14) << endl;
    cout << "the value of 3.14 is " << sizeof(3.14f) << endl;
    cout << "the value of 3.14 is " << sizeof(3.14F) << endl;
    cout << "the value of 3.14 is " << sizeof(3.14l) << endl;
    cout << "the value of 3.14 is " << sizeof(3.14l) << endl;


    return 0;
}

