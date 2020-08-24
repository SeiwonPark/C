/**
 * Dealing with String input/output
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-17
 * psw7347@gmail.com
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char fruit_name[40];  // 1바이트 짜리 저장공간 40개 생성

    printf("What is your favorite fruit?\n");

    scanf("%s", fruit_name); // String에서는 &를 생략한다. 왜냐면 fruit_name이거 자체가 주소라서 그럼

    printf("You like %s!\n", fruit_name);

    return 0;
}