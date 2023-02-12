#include <stdio.h>
int main()
{

    int ghost[] = {25, 100, 175, 250, 325};
    int mk[] = {0, 75, 150, 225, 300};
    int myNumbers[] = {25, 50, 75, 100};

    printf("%d", ghost[0] * mk[1] * myNumbers[3]);

    return 0;
}

/*

// Declare an array of four integers:
int myNumbers[4];

// Add elements
myNumbers[0] = 25;
myNumbers[1] = 50;
myNumbers[2] = 75;
myNumbers[3] = 100;


 exception

int myNumbers[] = {25, 50, 75, 100};
myNumbers[0] = 33;

printf("%d", myNumbers[0]);

*/
