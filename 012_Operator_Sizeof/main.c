/**
 * Operator "Sizeof"
 * 
 * File name : main.c
 * @version
 * @author Seiwon Park
 * date : 2020-07-17
 * psw7347@gmail.com
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0;
    unsigned int int_size1 = sizeof a;
    unsigned int int_size2 = sizeof(int);
    unsigned int int_size3 = sizeof(a);

    size_t int_size4 = sizeof(a); // 이식성 높이기 위해서
    size_t float_size = sizeof(float);

    printf("Size of int type is %u  bytes.\n", int_size1);
    printf("Size of int type is %zu  bytes.\n", int_size4);
    printf("Size of int type is %zu  bytes.\n", float_size);



    int int_arr[30];
    int* int_ptr = NULL; // ASCII code로 \0이다.
    int_ptr = (int*) malloc(sizeof(int) * 30); // 4 * 30 = 120 바이트의 저장공간 생성

    printf("Size of array = %zu bytes\n", sizeof(int_arr));
    printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));





    return 0;
}
