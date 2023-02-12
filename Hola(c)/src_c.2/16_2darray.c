#include <stdio.h>
int main()
{

    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
   // to print any no  
    printf("%d\n",matrix[0][1]);

    int i, j;
    // i is row 
    // j is coulombs
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }

    }
        return 0;
}