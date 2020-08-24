/**
 * Drawing Stars with Function
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-27
 * psw7347@gmail.com
 */

#include <stdio.h>

void draw(int x);

int main()
{
    int i = 5;
    char c = '#';
    float f = 7.1f;

    draw(i);      // 이 때 i는 argument고 value다
    draw(c);
    draw(f);

    return 0;
}

void draw(int x)  // 이미 여기서 int type으로 형변환 돼 있다
                  // 이 때 x는 parameter고 variable이다
{
    int count = 0;
    while (count++ < x)
    {
        printf("*");
    }
    printf("\n");
}
