/**
 * Dealing with Complex
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-14
 * psw7347@gmail.com
 */

#include <stdio.h>
#include <complex.h>

int main()
{
    double _Complex z = 1 + 2 * I;

    z = 1 / z;

    printf(" 1 / (1.0 + 2.0i) = %.1f%+.1fi\n", creal(z), cimag(z));

    return 0;
}