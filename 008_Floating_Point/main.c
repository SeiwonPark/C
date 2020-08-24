/**
 * Dealing with floating point
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-14
 * psw7347@gmail.com
 */

#include <stdio.h>
#include <float.h>

int main()
{
    printf("%u\n", sizeof(float));
    printf("%u\n", sizeof(double));
    printf("%u\n", sizeof(long double));

    float f = 123.456f;
    double d = 123.456;

    float f2 = 123.456; // if it's float, use f at the end of number
    double d2 = 123.456f; // save literal, which is float type, into double

    int i = 3;
    float f3 = 3.f;
    double d3 = 3.;

    float f4 = 1.234e10f;

    float f5 = 0x1.1p1;
    double d5 = 1.0625e0;

    printf("%f %F %e %E\n", f, f, f, f);
    printf("%f %F %e %E\n", d, d, d, d);
    printf("%a %A\n", f5, f5);
    printf("%a %A\n", d5, d5);

    return 0;
}
