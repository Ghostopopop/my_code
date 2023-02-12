#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
// to use this function you need maths.h libary
int main()
{
    printf("%f\n", sqrt(16));
    printf("%f\n", cbrt(8));
    printf("%f\n", pow(4, 3));
    printf("%f\n", hypot(3, 4));
    printf("%f\n", ceil(1.4)); //*  away from zero
    printf("%f\n", floor(1.4)); //* to zero
    printf("%f\n", round(1.1111)); //! for long  lround and long long llround:
    printf("fmax (100.0, 1.0) = %f\n", fmax(100.0, 1.0));//?  maxima
    printf("fmin (-100.0, 1.0) = %f\n", fmin(-100.0, 1.0));//?  minima
    printf("fdim (5.0, -1.0) = %f\n", fdim(5.0, -1.0)); //% +ve difference
    printf(" log of :%f\n ", log(100));

    //?  Function	   Description
    //*   abs(x)	   Returns the absolute value of x
    //%   acos(x)	   Returns the arccosine of x
    ////   asin(x)	   Returns the arcsine of x
    //@   atan(x)	   Returns the arctangent of x
    //*   cbrt(x)	   Returns the cube root of x
    //%   cos(x)	   Returns the cosine of x
    ////   exp(x)	   Returns the value of Ex
    //@  sin(x)	       Returns the sine of x (x is in radians)
    //*   tan(x)	   Returns the tangent of an angle

    return 0;
}