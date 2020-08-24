/**
 * Using Scanf() Return Value
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
    int in = 0;
    int sum = 0;
    int status;

    printf("Enter an integer (q to quit): ");
    status = scanf("%d", &in);

    while (status == 1) // scanf에서 return 값이 1이라는 말은,
                        // 입력에 성공한 항목의 개수가 1개 라는 말이다.
                        // scanf도 함수다. 모든 함수에는 반환형이 있는 법이다!
                        // 비슷하게, int value = printf("Hello World\n");
                        // 하게 되면, value 에는 12가 저장된다.
                        // 출력에 성공한 문자열의 개수를 리턴하기 때문이다.
    {
        sum += in;
        printf("Enter next integer (q to quit): ");
        status = scanf("%d", &in);
    }

    printf("Sum = %d\n", sum);

    return 0;
}

