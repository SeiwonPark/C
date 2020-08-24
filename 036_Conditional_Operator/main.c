/**
 * Dealing with Conditional Operators
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-03
 * psw7347@gmail.com
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int temp;
    printf("    #1\n");
    temp = true ? 1024 : 7;   // true면 : 기준 왼쪽이 대입됨
    printf("%d\n", temp);
    temp = false ? 1024 : 7;  // false면 : 기준 오른쪽이 대입됨
    printf("%d\n", temp);


    int number;
    printf("    #2\n");
    scanf("%d", &number);
    (number % 2 == 0) ? printf("Even\n") : printf("Odd\n");


    printf("    #3\n");
    int x = 10, y = 30;
    int max = (x > y) ? x : y; // max, min 계산에 효과적
    printf("%d", max);


    return 0;
}

