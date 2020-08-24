/**
 * Dealing with STD Input/Output in Detail 2
 *  1. upper to lower, lower to upper
 *  2. digit to '*'
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-01
 * psw7347@gmail.com
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);

        if (isdigit(ch) != 0)
            ch = '*';

        putchar(ch);
    }

    return 0;
}

