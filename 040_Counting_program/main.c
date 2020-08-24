/**
 * Counting Program
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-04
 * psw7347@gmail.com
 */

#include <stdio.h>

int main()
{
    int count = 0;

    while (1)
    {
        printf("Current count is %d. Continue? (y/n)\n", count);
        int ch = getchar();

        if (ch == 'n' || ch == 'N')
            break;
        else if (ch == 'y' || ch == 'Y')
        {
            count++;
        } else {
            printf("Please input y or n\n");
        }
        while (getchar() != '\n')
            continue;

    }

    return 0;
}

