/**
 * Dealing with Overflow
 * 
 * File name : main.c
 * @version
 * @author Seiwon Park
 * date : 2020-07-17
 * psw7347@gmail.com
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
//    int i;
//    float f;
//    char str[30];
//    scanf("%d %f %s", &i, &f, str); // String 타입에는 &안 붙임
//    printf("%d %f %s", i, f, str);


//    char c;
//    scanf("%c", &c);
//    printf("%i\n", c);



// ############# wrong case ##############
//    double d = 0.0;
//    scanf("%f", &d);   // double(float의 2배) 타입을 float에 넣으려 하니까 에러 발생
                         // 아니면 %lf를 사용하면 되긴 한다.
//    printf("%f\n", d);


// ############# correct case ###############
//    float e = 0.0;  // 이러면 문제 없이 작동함
//    scanf("%f", &e);
//    printf("%f\n", e);

    int a, b;
    scanf("%d,%d", &a, &b); // %d %d 사이에 ',' 가 있으니까 입력에서
                            // ,를 기준으로 2개를 입력받음
    printf("%d %d\n", a, b);



    return 0;
}