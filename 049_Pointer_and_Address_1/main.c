/**
 * Pointer and Address test 1
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-25
 * psw7347@gmail.com
 */

#include <stdio.h>

int main()
{
    int a = 7;
    int *ptr = &a;

    printf("%d %d %p\n", a, *ptr, ptr); // 주소는 OS로 결정되어지고, 실행할 때마다 바뀜

    return 0;
}

