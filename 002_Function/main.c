/**
 * Dealing with functions
 *
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-14
 * psw7347@gmail.com
 */

#include <stdio.h>

void say_hello2(); // 2. 함수를 호출 할 함수 뒤에 쓸 거면 먼저 함수를 선언만 하면 된다.(구현은 나중에)
void say_hello() // 1. 함수는 이렇게 위에다가 선언하는 방법이 있고,
{
    printf("Hello, World!\n");
}

int main()
{
    /* dealing with function */
    say_hello();
    say_hello2();

    return 0;
}

void say_hello2(){ // 2. 함수를 뒤에 구현하고 앞에 선언해준다.
    printf("Hello, World!\n");
}
