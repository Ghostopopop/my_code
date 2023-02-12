#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char yo = "hello";
char *ptr = yo;
while (ptr!="\0")
{
    printf("%c",ptr);
    ptr++;
}



    return 0;
}