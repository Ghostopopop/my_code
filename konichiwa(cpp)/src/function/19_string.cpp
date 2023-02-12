#include <iostream>
#include <string>
//! for mor info (https://en.cppreference.com/w/cpp/header/string)
using namespace std;

int main(){
string greeting = "Hello";
string person = "ghost";

//`cconcatination
string full = greeting + " " + person;
//?   "" '' denots space 
cout << full<<endl;

string firstName = "John ";
string lastName = "Doe";
string fullName = firstName.append(lastName);
cout << fullName<<endl;

//* Numbers and Strings
string x = "10";
string y = "20";
string z = x + y;   //% z will be 1020 (a string)

string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length()<<endl; 
//@ we can use both .length()or .size() as string c++ does not have a null char at the end 

//$ string as array 
string myString = "Hello";
cout << myString[0]<<endl;
myString[0] = 'J';
cout << myString<<endl;
//! string input & output 
string N1ame;
cout << "Type your first name: ";
cin >> N1ame; // get user input from the keyboard
cout << "Your name is: " << N1ame;

string Name2;
cout << "Type your full name: ";
getline (cin, Name2);
cout << "Your name is: " << Name2;

// Type your full name: John Doe
// Your name is: John Doe

// Type your first name: John
// Your name is: John



/*
?      \'	'	Single quote
?      \"	"	Double quote
?      \\	\	Backslash
?      \t	    Tab
*/
return 0;
}