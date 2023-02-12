#include <stdio.h>
#include <time.h>

int main()
{
    clock_t t;
    t = clock();
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("The current date/time is: %s", asctime(timeinfo));
    printf("The current local time is: %s", ctime(&rawtime));
    printf("\n");
    printf("\n");
    printf("delay");
    printf("\n");
    printf("\n");
    t = clock() - t;
    printf("It took me %d clicks (%f seconds).\n", t, ((float)t) / CLOCKS_PER_SEC);

    return 0;
}