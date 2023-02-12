
#include <iostream>
using namespace std;// mymath.cpp


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main() {
    int a = 5, b = 3;
    int sum = add(a, b);
    int difference = subtract(a, b);
    int product = multiply(a, b);
    int quotient = divide(a, b);
int d = add(1,2) ;


    // cout << "The sum of " << a << " and " << b << " is " << sum << endl;
    cout<<d<<endl;
    cout << "The difference of " << a << " and " << b << " is " << difference << endl;
    cout << "The product of " << a << " and " << b << " is " << product << endl;
    cout << "The quotient of " << a << " and " << b << " is " << quotient << endl;

    return 0;
}

