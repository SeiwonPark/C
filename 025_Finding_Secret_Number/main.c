/**
 * Finding Secret Number
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
    unsigned int guessing_number;
    const unsigned int correct_number = 337;

    do { // 무조건 한번은 실행이 돼야 할 때
        printf("Enter secret code : ");
        scanf("%d", &guessing_number);
    } while (guessing_number != correct_number);

    printf("That's correct!\n");

    return 0;
}
