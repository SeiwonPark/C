/**
 * Pointer and Address test (swap)
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-25
 * psw7347@gmail.com
 */

#include <stdio.h>

void swap(int* x, int* y);

int main()
{
    int a = 7;
    int *ptr = &a;

    printf("%d %d %p\n", a, *ptr, ptr); // 주소는 OS로 결정되어지고, 실행할 때마다 바뀜


    int x = 100;
    int y = 200;

    swap(&x, &y);

    printf("%d %d\n", x, y);

    return 0;
}

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}