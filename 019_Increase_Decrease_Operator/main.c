/**
 * Dealing with Increasing/Decreasing Operator
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-27
 * psw7347@gmail.com
 */

#include <stdio.h>

int main()
{
    int i = 1, j = 1;
    int i_post, pre_j;

    i_post = i++;  // i_post에 i를 대입하고 나서, i값을 증가 시킴
    pre_j = ++j;   // j의 값을 증가시킨 뒤, pre_j에 대입한다

    printf("%d %d\n", i, j);           // 출력: 2 2
    printf("%d %d\n", i_post, pre_j);  // 출력: 1 2

    return 0;
}
