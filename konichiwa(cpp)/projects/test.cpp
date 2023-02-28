#include <iostream>
#include  <vector>
using namespace std;
int main(){
/*
        1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.

*/

int dol{}, q{},dim{},nic{},pen{};
int ball;
cin>>ball;
dol = ball/100;
ball -= dol*100;
q = ball/25;
ball -= q*25;
dim = ball/10;
ball -= dim*10;
nic = ball/5;
ball -= nic*5;
pen = ball ;

cout<<"dol  "<<dol<<endl;
cout<<"q  "<<q<<endl;
cout<<"dim  "<<dim<<endl;
cout<<"nic  "<<nic<<endl;
cout<<"pen  "<<pen<<endl;



return 0;
}