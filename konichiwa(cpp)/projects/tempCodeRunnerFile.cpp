#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char in{};
    vector<int> vik;
    do
    {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "===================" << endl;
        cout<<"plz enter the your selection"<<endl;
        cin >> in;
        if (in == 'P' || in == 'p')
        {
            if (vik.size() == 0)
            {
                cout << "[] - the list is empty" << endl;
            }
            else
            {

                for (auto vik : vik)
                {
                    cout << vik << endl;
                }
            }
        }

    } while (in != 'Q' || in != 'q');

    return 0;
}