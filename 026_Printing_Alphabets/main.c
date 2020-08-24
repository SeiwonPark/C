/**
 * Printing Alphabets
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-30
 * psw7347@gmail.com
 */


#include <stdio.h>

#define NUM_ROWS    5
#define FIRST_CHAR  'A'
#define LAST_CHAR   'L'

int main()
{
    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (char c = FIRST_CHAR; c <= LAST_CHAR; c++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }

    printf("\n");



    for (int j = 1; j <= 10; j++)
    {
        char d = FIRST_CHAR;

        for (int k = 1; k <= j; k++)
        {
            printf("%c ", d);
            d += 1;
        }
        printf("\n");
    }

    printf("\n");


    for (int i = 0; i < 12; i++)
    {
        for (char c = FIRST_CHAR + i; c <= LAST_CHAR; c++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }


    return 0;
}
