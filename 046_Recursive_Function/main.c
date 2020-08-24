/**
 * Recursive Function
 * Factorial Example
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-14
 * psw7347@gmail.com
 */

#include <stdio.h>

int factorial(int num);

int main()
{
    int num = 4;
    printf("%d", factorial(num));

    return 0;
}

int factorial(int num)
{
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

