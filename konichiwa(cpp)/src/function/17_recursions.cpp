#include <iostream>
using namespace std;
int fabu(int a){
    // if (a==0){
    //     return 0;
    // }
    // if (a==1){
    //     return 1;
    // }
    // if (a==2){
    //     return 1;
    // }
    if(a<2){return 1; }
  a = fabu(a-1) + fabu(a-2);
  /*
  `int fib(int n){
  ` if(n<2){return 1; }
  ` return fib(n-2) + fib(n-1);
}*/
}
int factorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    int fac = a * factorial(a - 1);

    return fac;
}
int main()
{
    int i,j;
    cout << "enter the rangr for fabuncahi serice min to  max formate ";
    cin >> i;
    cin >> j;
    
    //`cout << "the value of factorial no is = "<< factorial(i)<<endl;

   for (size_t i = 0; i < j+1; i++)
   {
    cout<<"the value of "<<i<<"th term is = "<<fabu(i)<<endl;
   }
   
    return 0;
}