/**
 * Fibonacci Sequence
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-25
 * psw7347@gmail.com
 */


#include <stdio.h>

int Fibonacci(int num);

int main()
{
    printf("Enter number of Fibonacci sequence\n");
    int input;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++) {
        printf("%d ", Fibonacci(i));
    }

    return 0;
}

int Fibonacci(int num) {
    int sum = 0;
    if (num < 1) {
        return 0;
    }

    if (num <= 2) {
        return 1;
    }

    sum += Fibonacci(num - 2) + Fibonacci(num - 1);
    return sum;

}
