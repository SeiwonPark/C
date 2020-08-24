/**
 * Fixed width decimal
 * 
 * File name : main.c
 * @version
 * @author Seiwon Park
 * date : 2020-07-14
 * psw7347@gmail.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <inttypes.h>

int main()
{
    int i;
    int32_t i32;     // must have size of 32 bits
    int_least8_t i8; // must have at least size of  8 bits
    int_fast8_t f8;  // must have fastest type with size of 8 bits
    intmax_t imax;   // must have max size of int
    uintmax_t uimax; // must have max size of unsigned int

    i32 = 1004;

    printf("me32 = %d\n", i32);
    printf("me32 = %" "d" "\n", i32); // printf is divided into 3 parts
    printf("me32 = %" PRId32 "\n", i32); // kind of macro which uses 32 bit

    return 0;
}

