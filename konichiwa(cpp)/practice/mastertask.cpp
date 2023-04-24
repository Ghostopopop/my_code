#include <cstdlib>
#include <iostream>
#include <windows.h>

int main()
{
    // Open Spotify in default browser
    ShellExecute(NULL, "open", "https://www.spotify.com", NULL, NULL, SW_SHOWNORMAL);

    // Open VS Code
    system("code");

    // Open File Explorer
    system("explorer");

    // Open Command Prompt
    system("cmd");

    return 0;
}
