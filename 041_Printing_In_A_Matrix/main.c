/**
 * Printing Character In A Matrix
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-04
 * psw7347@gmail.com
 */

#include <stdio.h>

void display(char ch, int row, int col)
{
    for (int i = 0; i < row; i++) {  // for문으로 순차적으로 문자를 출력할 수 있다.
        for (int j = 0; j < col; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main()
{
    char ch;
    int row;
    int col;

    while ((ch = getchar()) != '\n')
    {
        scanf("%d %d", &row, &col);
        while (getchar() != '\n')
            continue;
        display(ch, row, col);
    }

    return 0;
}

