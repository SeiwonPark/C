/**
 * Dealing with STD Input/Output in detail
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-01
 * psw7347@gmail.com
 */

#include <stdio.h>

int main()
{
    char ch;

//    ch = getchar(); // 글자를 가져오는 함수
//    putchar(ch);    // 글자를 화면에 출력하는 함수

    while ((ch = getchar()) != '\n') // 소문자 -> 대문자, 대문자 -> 소문자
        {
            if (ch >= '0' && ch <= '9')
                ch = '*';

            if (ch >= 'a' && ch <= 'z')
            {
                ch -= 32;
            } else if (ch >= 'A' && ch <= 'Z')
            {
                ch += 32;
            }

            putchar(ch);
        }

    putchar(ch);



    return 0;
}

