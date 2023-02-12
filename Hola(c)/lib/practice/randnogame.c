#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    int numb, guess, noofg = 1;

    srand(time(0));
    numb = rand() % 100 + 1;
    printf("%d", numb);
    do
    {
        printf("enter yout no between1 to 100:");
        scanf("%d", &guess);
        if (guess > numb)
        {
            printf("guess a higer no\n");
        }
        else if (guess < numb)
        {
            printf("guess a lower no\n");
        }
        else
           printf("you gessed the no in %d attemps", noofg);
        noofg++;

    } while (guess != numb);

    return 0;
}