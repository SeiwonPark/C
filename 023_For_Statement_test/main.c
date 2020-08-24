/**
 * For Statement Test
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-30
 * psw7347@gmail.com
 */

#include <stdio.h>

int main()
{
    // #1
    int i;
    for (i = 0; i < 10; i++)
        printf("%d ", i);

    // #2
    for (int i = 0; i < 100; i = i + 8)
        printf("%d ", i);

    // #3
    for (char c = 'A'; c <= 'Z'; c++)
        printf("%c ", c);

    // #4
    for (int i = 0; i * i < 10; i++)
        printf("%d ", i);

    // #5
    for(int x = 1, y = 5; y <= 20; y = (++x * 3) + 10)
        printf("%d ", x);

    // #6
    int m, n;
    n = 2;
    for (i = 2; n < 10; )
    {
        n = n * i;
        printf("%d\n", n);
    }

    // #7
//    for ( ; ; )
//        printf("I love you! ");

    return 0;
}

