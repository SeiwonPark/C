/**
 * Converting Dec to Bin
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-24
 * psw7347@gmail.com
 */

#include <stdio.h>

void printDecToBinary(unsigned long n);

int main()
{
    unsigned long num;
    scanf("%u", &num);
    printDecToBinary(num);

    return 0;
}

void printDecToBinary(unsigned long n)
{
    int remainder = n % 2;

    if (n >= 2) {
        printDecToBinary(n/2);
    }

    printf("%d", remainder);
    return;
}