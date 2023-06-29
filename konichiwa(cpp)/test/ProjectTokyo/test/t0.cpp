// #include <iostream>
// #include <cstdlib>

// int main()
// {
//    // std::system("start cmd.exe /c \"neofetch  && pause\" ");

//     // std::system("start wt.exe");
//     return 0;
// }
#include <iostream>
#include <windows.h> // Needed for Sleep function

int main()
{
    while (true)
    {
        std::cout << "Blink!" << std::endl;
        Sleep(1000);   // Pause program for 500 milliseconds (half a second)
        system("cls"); // Clear console screen
        Sleep(1000);   // Pause program for another 500 milliseconds
    }
    return 0;
}
