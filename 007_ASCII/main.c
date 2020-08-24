/**
 * Dealing with ASCII
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
    char c = 'A';
    char d = '*';
    char beep = '\a';

    printf("%c %hhd\n", c, c);
    printf("%c %hhd\n", d, d);
    printf("%c %hhd\n", beep, beep);

    float salary;
    printf("$0000000000\b\b\b\b\b\b\b\b\b\b");
    scanf("%f", &salary);

    return 0;
}
