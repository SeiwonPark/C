/**
 * Dealing with Octal & Hexa decimals
 * 
 * File name : main.c
 * @version
 * @author Seiwon Park
 * date : 2020-07-14
 * psw7347@gmail.com
 */

#include <stdio.h>

int main()
{
    unsigned int decimal = 4294967295;
    unsigned int binary = 0b11111111111111111111111111111111;
    unsigned int oct = 037777777777; // 0 means octal
    unsigned int hex = 0xffffffff;

    printf("%u\n", decimal);
    printf("%u\n", binary);
    printf("%u\n", oct);
    printf("%u\n", hex);

    printf("%o %x %#o %#x %#X", decimal, decimal, decimal, decimal);
    // using # to printf # on console


    return 0;
}