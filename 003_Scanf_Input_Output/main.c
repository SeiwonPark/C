/**
 * Simple test of input/output
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-14
 * psw7347@gmail.com
 */

#define _CRT_SECURE_NO_WARNINGS // uses at visual studio
#include <stdio.h>

int main()
{
    int i = 0, j = 0, sum;

    printf("Input two integers\n");
    scanf("%d %d", &i, &j);

    printf("Values are %d %d\n", i, j);

    sum = i + j;

    printf("%d + %d = %d\n", i, j, sum);

    return 0;
}

