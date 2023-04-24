#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    char in{};
    vector<int> vik{1, 2, 3};
    do
    {   cout<<"\n"<<endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "===================" << endl;
        cout << "plz enter the your selection" << endl;
        cin >> in;
        cout<<endl;
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
        else if (in == 'A' || in == 'a')
        {
            cout << "enter the no";
            int z;
            cin >> z;
            vik.push_back(z);
            cout << "sucessfully added " << z << "to list" << endl;
        }
        else if (in == 'm' || in == 'M')
        {
            if (vik.size() == 0)
            {
                cout << "Unable to calculate the mean - no data" << endl;
            }
            else
            {
                cout <<"mean is :"<< (accumulate(vik.begin(), vik.end(), 0)) << endl;
            }
        }

        else if (in == 's' || in == 'S')
        {
            if (vik.size() == 0)
            {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            }
            else
            {
                int small = vik.at(0);
                for (size_t i = 0; i < vik.size(); i++)
                {
                    if (vik[i] < small)
                    {
                        small = vik[i];
                    }
                }
                cout <<" smallest no is :"<< small << endl;
            }
        }
        else if (in == 'l' || in == 'L')
        {
            if (vik.size() == 0)
            {
                cout << "Unable to determine the latgest number - list is empty" << endl;
            }
            else
            {
                int larg = vik.at(0);
                for (size_t i = 0; i < vik.size(); i++)
                {
                    if (vik[i] > larg)
                    {
                        larg = vik[i];
                    }
                }
                cout <<"largest no is :" <<larg << endl;
            }
        }
        else{
            cout<<"input does not meet the parameaters +_+";
            in = 'q';
        }
    } while (!(in == 'Q' || in == 'q'));

    return 0;
}