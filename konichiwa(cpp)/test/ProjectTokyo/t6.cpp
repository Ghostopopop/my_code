//. SHELL
#include <iostream>
#include <vector>
#include <cstdlib>
#include <windows.h>
using namespace std;
void banner()
{
    HANDLE col;
    col = GetStdHandle(STD_OUTPUT_HANDLE);
    int col_code = 11;
    SetConsoleTextAttribute(col, col_code);

    cout << "         |  \\                         |  \\            |  \\" << endl;
    cout << "  ______ | $$____   ______   _______ _| $$_          _| $$_    ______   ______  ______ ____" << endl;
    cout << " /      \\| $$    \\ /      \\ /       |   $$ \\        |   $$ \\  /      \\ /      \\|      \\    \\ " << endl;
    cout << "|  $$$$$$| $$$$$$$|  $$$$$$|  $$$$$$$\\$$$$$$         \\$$$$$$ |  $$$$$$|  $$$$$$| $$$$$$\\$$$$\\  " << endl;
    cout << "| $$  | $| $$  | $| $$  | $$\\$$    \\  | $$ __         | $$ __| $$    $| $$   \\$| $$ | $$ | $$" << endl;
    cout << "| $$__| $| $$  | $| $$__/ $$_\\$$$$$$\\ | $$|  \\        | $$|  | $$$$$$$| $$     | $$ | $$ | $$" << endl;
    cout << " \\$$    $| $$  | $$\\$$    $|       $$  \\$$  $$         \\$$  $$\\$$     | $$     | $$ | $$ | $$" << endl;
    cout << " _\\$$$$$$$\\$$   \\$$ \\$$$$$$ \\$$$$$$$    \\$$$$           \\$$$$  \\$$$$$$$\\$$      \\$$  \\$$  \\$$" << endl;
    cout << "|  \\__| $$" << endl;
    cout << " \\$$    $$" << endl;
    cout << "  \\$$$$$$ \t";
    col_code = 12;
    SetConsoleTextAttribute(col, col_code);
    cout << " Version  --1.o" << endl;
    col_code = 7;
}
bool alpha = true;
string console(string z)
{
    if ("yo" == z)
    {
        cout << "humm f" << endl;
        return "";
    }
    else if ("whomai" == z)
    {
        cout << "i gess you are compitanten enough to know that, dush bag" << endl;
        return "";
    }
    else if ("cd" == z)
    {
        cout << "cds are old tech " << endl;
        return "";
    }
    else if ("ls" == z)
    {
        cout << "dude ls is a drug stay away " << endl;
        return "";
    }
    else if ("ghost" == z)
    {
        cout << "next time say sir ghost " << endl;
        return "";
    }
    else if ("cls" == z)
    {
        cout << "cls: is invaide command try clear " << endl;
        return "";
    }
    else if ("clear" == z)
    {
        cout << "clear: is invalide command try cls " << endl;
        return "";
    }
    else if ("exit" == z)
    {
        alpha = false;
        return "";
    }

    else
    {
        cout << "erore \"i dont know the speling lol \"" << endl;
        return "";
    }
}

int main()
{
    banner();

    while (alpha == true)
    {
        string str;
        cin >> str;
        console(str);
    }

    return 0;
}