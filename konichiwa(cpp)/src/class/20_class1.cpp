#include <iostream>
using namespace std;
//` inside function
class MyClass
{       // The class
public: // Access specifier
    void myMethod()
    { // Method/function defined inside the class
        cout << "Hello World!";
    }
};
//$ outside class 
class Mybus
{                  // The class
public:            // Access specifier
    void mybus1(); // Method/function declaration
};
//? Method/function definition outside the class
void Mybus::mybus1()
{
    cout << "Hello";
}

int main()
{
    MyClass myObj;    // Create an object of MyClass
    myObj.myMethod(); // Call the method

    Mybus mytruck;    // Create an object of MyClass
    mytruck.mybus1(); // Call the method
    return 0;
}