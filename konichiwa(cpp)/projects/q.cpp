#include <iostream>
#include  <vector>
using namespace std;

int main(){
int a{};
cin>>a;
vector<int> data;
for (size_t i = 1; i <= a; i++)
{
    int d;
    cout<<"enter the element";
    cin>>d;
    data.push_back(d);
}
for (auto data:data)
{
  cout<<data<<endl;
}



return 0;
}