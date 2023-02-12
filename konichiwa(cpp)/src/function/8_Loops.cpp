#include <iostream>
using namespace std;
//? there are 3 types of loop
/*
@1.for
!2.while
//3.do while
% loops provide short usable code for repatative tasks
$ and make code more redable..
*/
int main()
{
    // syntax of for loop
    /*
    *for(initialization; condition; updation)
    {
    $   code of execution
    }
    */

    for (size_t i = 0; i < 5; i++)
    {
        /* code */
        cout << i + 1 << endl;
    }
 //@ ******************************************


    cout << "while loop begin's" << endl;
    //? syntax of while loop
    /*    while ( condition )
        {
             code
        }
    */
    int j = 0;
    while (j <= 10)
    {
        cout << j << endl;
        j++;
    }

 //*******************************************
    cout << "do will loop begin's";
    //@ syntax of do while loop
    /*
     do
        {
            code
        } while (condition );*/
    int x = 0;
    do
    {
        cout << x << endl;
        x++;
    } while (x <= 5);
    //$ even false condition loop will run at lest one

    return 0;
}