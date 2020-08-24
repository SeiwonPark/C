/**
 * Function Return Test
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-30
 * psw7347@gmail.com
 */

#include <stdio.h>

int compute_pow(int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int base, exp, result;

    while (scanf("%d %d", &base, &exp) == 2)
    {
        result = compute_pow(base, exp);
        printf("Result is %d\n", result);
    }

    return 0;
}




