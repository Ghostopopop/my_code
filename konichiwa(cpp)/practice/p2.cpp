#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;
const float pi = 3.14;
float tri(float b, float h)
{
    cout <<fixed<< setprecision(2);
    float area = 0.5 * b * h;
    cout <<"area is "<<area <<" cm^2"<< endl;
    return area;
}
float reck(float w, float l)
{
    float area = w * l;
    cout <<"area is "<< area<<" cm^2" << endl;
    return area;
}
float cir(float r)
{
    cout <<fixed <<setprecision(2);
    float area = r * r * pi;
    cout <<"area is "<< area<<" cm^2";
    return area;
}

int main()
{
    char a{0};
    bool z(false);
    do
    {
        cout <<"\n";
        cout << "plz chose a shape " << endl;
        cout << "a)  triangle" << endl;
        cout << "b)  circle" << endl;
        cout << "c)  reatangle" << endl;
        cout << "d)  to exit " << endl;
        cin >> a;
        if (a == 'a' || a == 'A')
        {
            float b, h;
            cout << "eneter base of triangle ";
            cin >> b;
            cout << "eneter hight of triangle ";
            cin >> h;
            cout<<"\n";
            tri(b, h);
            
        }
        else if (a == 'b' || a == 'B')
        {
            float r;
            cout << "enter the radius of cirle ";
            cin >> r;
            cout<<"\n";
            cir(r);
            
        }
        else if (a == 'c' || a == 'C')
        {
            float w, l;
            cout << "enter the the wight ";
            cin >> w;
            cout << "enter the length ";
            cin >> l;
            cout<<"\n";
            reck(w, l);
            
        }
        else
            z = true;

    } while (z == false);

    return 0;
}