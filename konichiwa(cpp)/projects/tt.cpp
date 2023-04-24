#include <iostream>
#include  <vector>
using namespace std;
int main(){

for (size_t i = 1; i <= 10; i++)
{
    for (size_t j = 1; j <= 10; j++)
    {
        cout<<j<<"*"<<i<<"="<<j*i<<endl;
    }
    cout<<"=============="<<endl;
}


return 0;
}