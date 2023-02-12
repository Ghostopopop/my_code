
//int - stores integers (whole numbers), without decimals, such as 123 or -123
//float - stores floating point numbers, with decimals, such as 19.99 or -19.99
//char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

#include<stdio.h>
int main()
{

//type variableName = value;
//%(char)is Format Specifier
int a = 199;//%d,%i
float b =1.1;//%f
char c = "yo";//%c
double d = 11111.3333333333;//%lf
long e = 1000000000000000000000000;//%li, %ld
long long f = 10000000000000000000000000000000;// %lld %lli
short int g = 3;// %hd
unsigned int h = 2;// %c
signed int i = -2;// %c
long double j = 100000000000000000;// %lf

return 0;
}

/*

Format Specifier              type
%c	                          Character
%d	                          Signed integer
%e or %E	                  Scientific notation of floats
%f	                          Float values
%g or %G	                  Similar as %e or %E
%hi	                          Signed integer (short)
%hu                           Unsigned Integer (short)
%i	                          Unsigned integer
%l or %ld or %li	          Long
%lf	                          Double
%Lf	                          Long double
%lu	                          Unsigned int or unsigned long
%lli or %lld	              Long long
%llu	                      Unsigned long long
%o	                          Octal representation
%p	                          Pointer
%s	                          String
%u	                          Unsigned int
%x or %X	                  Hexadecimal representation
%n	                          Prints nothing
%%	                          Prints % character

*/





