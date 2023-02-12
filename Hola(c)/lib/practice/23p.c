#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int student = 4;
    int subject = 2;

    int marks[4][2];
    for (size_t i = 0; i < student; i++)
    {
        for (size_t j = 0; j < subject; j++)
        {
            printf("student_no %d marks of subject no %d", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (size_t i = 0; i < student; i++)
    {
        for (size_t j = 0; j < subject; j++)
        {
            printf("the student no %d marks in sub %d are =%d", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}