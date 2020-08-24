/**
 * Dealing with Array Indexing
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-17
 * psw7347@gmail.com
 */

#include <stdio.h>

int main()
{
    int a = 1;
    int int_arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);

//    printf("%i\n", int_arr[1000]); // index overflow

    char c = 'a';
    char str1[10] = "hello"; // 5글자지만 6글자만큼 자리를 차지하고 있다.
    char str2[10] = { 'H', 'i'};

    printf("%c\n", c);
    printf("%s\n", str1);
    printf("%s\n", str2);





    return 0;
}