/**
 * Confirm If Input Is Appropriate
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-14
 * psw7347@gmail.com
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

long get_input(void) ;

int main()
{

    while (true)
    {
        printf("Please Enter Integer.\n");
        long answer = get_input();

        if (0<= answer && answer <= 10000) {
            printf("%ld is an Integer. Thank you.\n", answer);
            break;
        } else {
            printf("Try again. Thank you.\n");
        }
    }

    return 0;
}

long get_input(void) {

    long input;
    char c;
    int wrong_count = 0;
    int size_count = 0;
    int flag_count = 0;

    while (true) {
        while (scanf("%ld", &input) != 1) {
            printf("Your input : ");

            while ((c = getchar()) != '\n') {
                putchar(c);
                wrong_count++;
                size_count++;
            }
            printf(" is not an integer. Please try again.\n");
            wrong_count = 0;   // ... initializing
            size_count = 0;
        }
        if (wrong_count > 0) {
            flag_count++;
        }
        break;  // ###### 입력받은 input 길이 어떻게 알지??
    }
    if (flag_count == 0) {
        return input;
    }

    if (wrong_count > 0)
        return -1;
    else {
        return input;
    }
}