/**
 * Input Numbers' SUM Calculating
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
    int num;
    int numbers[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter 5 numbers : ");
        scanf("%d", &num);
        numbers[i] = num;
    }

    for (int j = 0; j < 5; j++)
    {
        sum += numbers[j];
    }

    printf("SUM = %d", sum);

    return 0;
}