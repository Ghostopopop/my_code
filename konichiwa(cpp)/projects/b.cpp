#include <iostream>
#include  <vector>
#include <cctype>
using namespace std;

int main(){
char c= 'c';
isalpha(c); //true if c is a letter
isalnum(c); //true if c is num or letter
isdigit(c);// true if num
islower(c); // true if lower case
isprint(c);// printable or not
ispunct(c);// true if puntuation
isupper(c);// true if uppercase 
isspace(c);// true if whihtspaece


return 0;
}