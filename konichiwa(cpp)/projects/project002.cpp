#include <iostream>
using namespace std;
// function
float square(float value)
{
    float a;
    a = value * value;
    return a;
};
int main()
{
    cout << "the value of square is " << square(4);

    return 0;
}