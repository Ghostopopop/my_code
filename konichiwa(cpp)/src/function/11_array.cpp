#include <iostream>
using namespace std;
//
int main()
{
//* in a to totall no of the element's is n-1  */
////  array decleration  
    int marks[4] = {10, 31, 19, 105};
    cout << marks[0]<<endl;
    cout << marks[1]<<endl;
    cout << marks[2]<<endl;
    cout << marks[3]<<endl;
//@ other array decleration 
int rollno[2];
rollno[0]=3;
rollno[1]=8;    

//loop array input output 
int array[4];
cout<<"enter the no ";
for (size_t i = 0; i < 4; i++)
{
    cin>>array[i];
}
cout<<"the no are as follow\n";
for (size_t i = 0; i < 4; i++)
{
    cout<<array[i]<<endl;
}
    return 0;
}