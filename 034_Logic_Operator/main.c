/**
 * Dealing with Logic Operator
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-01
 * psw7347@gmail.com
 */

#include <stdio.h>
#include <stdbool.h>
#include <iso646.h>    // and, or, not

//#define and &&       // 로 내가 직접 정의해도 됨
#define PERIOD  '.'

int main()
{
    bool or_test = 3 > 2 || 5 > 6;  // true
    bool and_test = 3 > 2 && 5 > 6; // false
    bool not_test = !(5 > 6);       // true

    char ch;
    int count = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '\n' && ch != ' ')    // if (ch != '\n' and ch != ' ')
                                        // 로 입력해도 됨 <iso646.h> 때문에
            count++;
    }

    printf("%d", count);

    return 0;
}