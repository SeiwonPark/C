/**
 * Refactoring Using Multiple Functions
 * Parameter vs Argument(= real variable)
 * (receiver)    (giver)
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

#define NAME    "SeiWonPark"
#define PHONE   "010 - 7347 - 7063"
#define WIDTH   50

void printf_multiple_chars(char ch, int length, bool endl);
void printf_centered_str(char str[]);

int main()    // ###########################################
              // int main() 말고 main()만 써도 된다.
              // 즉, 함수의 자료형을 표시 안 해주면 int로 인식한다.
              // ###########################################
{
    printf_multiple_chars('*', WIDTH, true); // 주는 쪽에서는 '*', WIDTH, true가 argument
    printf_multiple_chars(' ', (WIDTH - strlen(NAME)) / 2, false);
    printf_centered_str(NAME);

    printf_multiple_chars(' ', (WIDTH - strlen(PHONE)) / 2, false);
    printf_centered_str(PHONE);
    printf_multiple_chars('*', WIDTH, true);
    return 0;
}

void printf_centered_str(char str[]) { // 받는 쪽에서는 str[]은 parameter
    printf("%s\n", str);
}

void printf_multiple_chars(char ch, int length, bool endl) { // 받는 쪽에서는 ch, length, endl는 parameter
    for (int i = 0; i < length; i++) {
        printf("%c", ch);
    }
    if (endl) {
        printf("\n");
    }
}