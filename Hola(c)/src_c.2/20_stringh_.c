#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char s1[] = "yo ho";
    char s2[50] = "what your name comrade";
    char s3[12] = "welcome";
    char s4[] = "abcdef252ghijklmnopqrstuvwxyz";
    char s5[] = "";
    //  %it concatenation of strings
    // %  in simple word it joining words
    strcat(s2, s3);
    puts(s2);

    printf("\n");
    // % give the length of string without (null char) \0
    printf("%d\n", strlen(s4));
    //  %reverses the string
    printf("%s\n", strrev(s4));
    // % copy the string form one to other
    strcpy(s5, s3);
    puts(s5);
    // % it is used to compare 2 strings
    /*

      %return value	indicates
       <0            the first character that does not match has a lower value in ptr1 than in ptr2
       0	         the contents of both strings are equal
       >0	         the first character that does not match has a greater value in ptr1 than in ptr

     */
    printf("%d\n", strcmp(s4, s5));

    char str1[20];
    char str2[20];
    strcpy(str1, "To be ");
    strcpy(str2, "or not to be");
    // % print the no of digits specified in last
    // %  with respect of second block in function()
    strncat(str1, str2, 2);
    puts(str1);

    char str11[] = "yo he no not to be";
    char str22[40];
    char str33[40];

    /* copy to sized buffer (overflow safe): */
    strncpy(str22, str11, sizeof(str22));

    /* partial copy (only 5 chars): */
    strncpy(str33, str22, 5);
    str33[5] = '\0'; /* null character manually added */

    puts(str11);
    puts(str33);

    printf("\n");

    char str[][5] = {"R2D2", "C3PO", "R2A6"};
    int n;
    puts("Looking for R2 astrometry droids...");
    for (n = 0; n < 3; n++)
        // ? int strncmp ( const char * str1, const char * str2, size_t num );
        if (strncmp(str[n], "C3xx", 2) == 0)
        {
            printf("found %s\n", str[n]);
        }

    printf("\n");
    char a1[] = "helly";
    char b1[] = "helly";
    //! strcoll is same as strcmp but it is based on c locale
    printf("%d", strcoll(a1, b1));
    printf("\n");

    char c3[] = "fcba73";
    char keys[] = "1234567890";
    int i;
    i = strcspn(c3, keys);
    printf("The first number in str is at position %d.\n", i + 1);

    //! it complicated to understand
    //! ghost in future check
    char str7[] = "This is a simple string";
    char *a5;
    a5 = strstr(str7, "simple");
    if (a5 != NULL)
        strncpy(a5, "sample", 6);
    puts(str7);

    // ? strtok

    char gh[] = "- This, a sample string.";
    char *pch;
    pch = strtok(gh, " ,.-");
    while (pch != NULL)
    {
        printf("%s\n", pch);
        pch = strtok(NULL, " ,.-");
    }

    char stz[] = "rg35yfrt5igick";
    memset(stz, '-', 5);
    puts(stz);
    
    // ! strerror
   /*
    ? yo 
    % it needs <errno.h> to function properly
   */ 
   //%char * strerror ( int errnum );

    return 0;
}