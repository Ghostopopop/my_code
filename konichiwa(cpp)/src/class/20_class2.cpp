#include <iostream>
using namespace std;

class agent
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a, int b, int c);
    void getdata()
    {
        cout << "the value of a = " << a << endl;
        cout << "the value of b = " << b << endl;
        cout << "the value of c = " << c << endl;
        cout << "the value of d = " << d << endl;
        cout << "the value of e = " << e << endl;
    }
};
void agent::setdata(int a1, int b1, int c1)
{

    a = a1;
    b = b1;
    c = c1;
};

int main()
{

    agent ghost;
    ghost.setdata(1, 7, 9);
    ghost.getdata();

    return 0;
}