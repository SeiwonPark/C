/**
 * Using Switch Statement
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
    char ch;

    while ((ch = getchar()) != '.')
    {
        printf("I think you love ");

        switch (ch) // char, int같은 정수형만 switch 인자로 넣을 수 있다.
        {
            case 'a':
            case 'A':
                printf("apple");
                break; // 이 떄의 break는 while이 아닌, switch문을 나가는 것이다.
            case 'b':
            case 'B':
                printf("ball");
                break;
            case 'c':
                printf("cat");
                break;
            case 'd':
                printf("dog");
                break;
            case 'e':
                printf("egg");
                break;
            case 'f':
                printf("fox");
                break;
            case 'g':
                printf("goat");
                break;
            case 'h':
                printf("cat");
                break;
            case 'i':
                printf("Iron man");
                break;
            case 'j':
                printf("James Din");
                break;
            case 'k':
                printf("Kangaroo");
                break;
            case 'l':
                printf("Love");
                break;
            case 'm':
                printf("mother");
                break;
            case 'n':
                printf("new friends");
                break;
            case 'o':
                printf("octopus");
                break;
            case 'p':
                printf("puppy");
                break;
            case 'q':
                printf("quiet");
                break;
            case 'r':
                printf("robot");
                break;
            case 's':
                printf("scramble");
                break;
            case 't':
                printf("tree");
                break;
            case 'u':
                printf("UFO");
                break;
            case 'v':
                printf("velvet");
                break;
            case 'w':
                printf("women");
                break;
            case 'x':
                printf("xoxo");
                break;
            case 'y':
                printf("yogurt");
                break;
            case 'z':
                printf("Z-Flip");
                break;
        }
        printf("\n");

    }

    return 0;
}




