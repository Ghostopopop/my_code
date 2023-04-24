#include <iostream>
#include  <vector>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
string input;
cin >> input;
for (char i : input);
{
   for (size_t i = 0; i < input.length(); i++)
   {
    cout<<input.at(i)+input.at(i+1);
   }
}




return 0;
}