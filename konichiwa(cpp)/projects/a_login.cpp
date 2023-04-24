#include <iostream>
using namespace std;
//

struct user
{
    char name[50];
    int id;
    float acs;
    int cvv;
};

int main()
{
    struct user ghost;
    ghost.name[50];
    ghost.id = 007;
    ghost.acs = 125322.325;
    ghost.cvv = 19;
    int id; 
    cout << "enter your name ";
    cin >> ghost.name;
    cout << "enter the id";
    cin >> id;
    if (id == ghost.id)
    {
        cout << "welcome " << ghost.name << endl;
        cout << "your acount  has " << ghost.acs << "$" << endl;
        cout << "cvv is " << ghost.cvv << endl;
    }
    else
    {
        cout << "try again error 404";
    }

    return 0;
}