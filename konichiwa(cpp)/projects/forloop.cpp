#include <iostream>
#include  <vector>
#include <iomanip>
using namespace std;
int main(){

for (size_t i = 1; i <=100; i++)
{
    cout<<setw(4);
    cout<<i;
    if (i%10==0)
    {
        cout<<endl;
    }
    
    else 
    cout<<"";
}
cout<<endl;
vector <int> yo {10,20,30,40,50,60,70};
for (size_t i = 0; i < yo.size(); i++)
{ //! smust use size_t for vector for unsigned int
    cout<<yo[i]<<endl;

}



return 0;
}