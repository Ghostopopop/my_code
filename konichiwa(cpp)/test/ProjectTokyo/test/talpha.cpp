//?------------------------------------------
//! author: hitarth (ghost)
//` date: 2023-05-20 16:23:55
//?------------------------------------------//
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int temp;
void sort(int array[], int a)
{

    for (size_t i = 0; i < a - 1; i++) //@ loop through the array with index
    {
        for (size_t j = 0; j < a - i - 1; j++) //* it loop through the array index - no of loop run on outer loop
        {
            if (array[j] > array[j + 1]) //. if statement swaps the addjecent element if it's smaller
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << endl;

    for (size_t i = 0; i <= a - 1; i++) // output
   {
        cout << array[i] << endl;
    }
m.cmd([[
  augroup run_file
    autocmd BufEnter *.java let @g=":w |:vsp | terminal java %\ i"
    autocmd BufEnter *.py let @g=":w | :vsp |terminal python %\ i"
    autocmd BufEnter *.cpp let @g=":w | :!g++ -std=c++17 -O3 %\ | :vsp |terminal ./a.out\ i"
    autocmd BufEnter *.c let <F5>=":w | :!gcc -O3 -std=gnu99 -Wno-deprecated-declarations -pedantic -Wall -Wextra %\ | :vsp |terminal ./a.out\ i"
    autocmd BufEnter *.js let @g=":w | :vsp | terminal node % \ i"
    autocmd BufEnter *.html let @g=":w | :silent !chromium % \ "
  augroup end
]])}
int main()
{
    int arry[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arry) / sizeof(arry[0]);

    sort(arry, n);

    return 0;
}
