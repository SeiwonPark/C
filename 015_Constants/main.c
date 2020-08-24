/**
 * Manifest Constants(= Symbolic Constants)
 *
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-17
 * psw7347@gmail.com
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f  // 전처리기는 그냥 PI가 이 값으로 교체가 된다.
                      // 프로그램 입장에서는 사실 똑같음. 프로그래머한테 좋을 뿐
                      // define으로 선언할 때는 대문자를 씀
                      // C언어에서는 이런 전처리기를 이용하는게 좀더 관습
                      // C++ 에서는 잘 안 씀
                      // = manifest constants = symbolic constants


int main()
{
    float radius, area, circum;
    const float pi = 3.141592f; // 로 사용해도 됨


    printf("Input radius\n");

    scanf("%f", &radius);

    area = PI * radius * radius;
    circum = 2.0f * PI * radius;

    printf("Area is %f\n", area);
    printf("Circumference is %f\n", circum);

    return 0;
}
