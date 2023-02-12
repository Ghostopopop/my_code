#include <iostream>
using namespace std;
int add (int a , float b){
    cout<<"it use 2 arggs"<<endl;
    return a + b ;
}
int add (int a , int b,int c){
    cout<<"it use 3 arggs"<<endl;
    return a + b + c ;
}
float volume (int r ,int h){
    return(3.14/r*r*h);
}
int volume (int a){
    return(a*a*a);
}

int volume (int b , int c, int a){
    return add(a,b,c);
}
int main(){
//%function over loding

cout<<"the sum of 1 and 2 is "<<add(1,2)<<endl;
cout<<"the sum of 1 , 2 and 3  is "<<add(1,3,2);
cout<<"the volume of is  "<<volume(1,3)<<endl;
cout<<"the volume of is  "<<volume(6)<<endl;
cout<<"the volume of is  "<<volume(1,3,2)<<endl;


return 0;
}