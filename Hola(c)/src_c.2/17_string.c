
#include <stdio.h>
int main()
{
    // normal char
    char yo = 'g';
    // strings
    char greetings[/*all string are array*/] = "hola";
    printf("%s\n", greetings);
    greetings[0] = 'b';
    printf("%s\n", greetings);

    // other way to specify a string
    char greeting[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greeting2[] = "Hello World!";

    printf("%lu\n", sizeof(greeting));
    printf("%lu\n", sizeof(greeting2));
    printf("%s\n", greeting);
    printf("%s\n", greeting2);
    return 0;
}