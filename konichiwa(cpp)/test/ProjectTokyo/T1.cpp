//?------------------------------------------
//! author: hitarth (ghost)
//` date: 2023-05-12 17:41:40
//?------------------------------------------//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
 void arive()
{
    cout << "system loding" << endl;
    const int total_progress = 100;
    const int bar_width = 50;
    for (int i = 0; i <= total_progress; ++i)
    {
        float progress_percent = static_cast<float>(i) / total_progress;
        int bar_filled = static_cast<int>(progress_percent * bar_width);
        std::cout << '[';
        for (int j = 0; j < bar_width; ++j)
        {
            if (j < bar_filled)
            {
                std::cout << '#';
            }
            
            else
            {
                std::cout << ' ';
            }
        }
        std::cout << "] " << static_cast<int>(progress_percent * 100) << "%\r";
        std::cout.flush();
    }
    std::cout << std::endl;
    std::system("start cmd.exe /c \"neofetch && pause \"");
    cout << "all servers online \t";
    std::system("pause");
}

int main()
{
    string str;
    int i = 0;
    while (i < 3)
    {
        i++;
        cout << "entert the ghost protocall \n ";
        cin >> str;
        if (str == "21mk19")
        {
            cout << "ghost has arived\n";
            arive();
            i = 3;
        }
        else if (i == 1)
        {
            cout << "t-1 \t";
        }
        else if (i == 2)
        {
            cout << "t-2 \"zota standby\" \t";
        }
    }

    return 0;
}