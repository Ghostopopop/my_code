// `Write a program that defines a structure to represent a point in 2D space.
// ?The structure should have two fields: x and y. The program should
//  @allow the user to input the x and y coordinates of two points,
// ! and then calculate and display the distance between the two points.

#include <iostream>
#include<cmath>
using namespace std;
struct point
{
    int x;
    int y;
};
int main()
{
float diff;
    point pt1, pt2;

    cout << "pt1x";
    cin >> pt1.x;
    cout << "pt1y";
    cin >> pt1.y;
    cout << "pt2x";
    cin >> pt2.x;
    cout << "pt2y";
    cin >> pt2.y ;
  diff =sqrt((pt2.x-pt1.x)*(pt2.x-pt1.x)+(pt2.y-pt1.y)*(pt2.y-pt1.y));
  cout<<diff;

    return 0;
}