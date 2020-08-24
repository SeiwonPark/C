/**
 * Dealing with boolean type
 * 
 * File name : main.c
 * @version
 * @author Seiwon Park
 * date : 2020-07-14
 * psw7347@gmail.com
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("%u\n", sizeof(_Bool));

    _Bool b1;
    b1 = 0;
    b1 = 1;

    printf("%d\n", b1);

    bool b2, b3;
    b2 = true;   // tho it's "true", it's equal to 1
    b3 = false;  // tho it's "false", it's equal to 0

    printf("%d %d\n", b2, b3);

    return 0;
}