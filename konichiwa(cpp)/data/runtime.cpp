#include <iostream>
#include  <vector>
using namespace std;
int main(){

char selection {};
do {
double width {},height {};
cout<< "enter w and h seprated by a spcae ";
cin >> width>>height;
double area {width*height};
cout <<"the area is " <<area <<endl;
cout<<"re run";
cin >> selection;
}
  while (selection == 'y'||selection == 'Y');

return 0;
}