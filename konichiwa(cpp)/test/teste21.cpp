#include <iostream>
#include <sstream>
#include <string>
using namespace std;

const int MAX_NUMBERS = 100;
const int NUMBER_LENGTH = 9;

int main()
{
    int numbers[MAX_NUMBERS];
    int count = 0;

    cout << "Enter a long number containing 9-digit numbers: ";
    string input;
    cin >> input;

    istringstream iss(input);
    while (iss)
    {
        string number_str;
        iss >> number_str;
        if (number_str.length() == NUMBER_LENGTH)
        {
            int number = stoi(number_str);
            numbers[count++] = number;
        }
    }

    cout << "You entered " << count << " 9-digit numbers: ";
    for (int i = 0; i < count; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

