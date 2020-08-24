/**
 * Determine Prime Number
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-01
 * psw7347@gmail.com
 */


#include <stdio.h>
#include <stdbool.h>

int main()
{

    unsigned num, div;
    bool isPrime = true;

    scanf("%u", &num);


    for (div = 2; (div * div) < num; div++) {
        if (num % div == 0){
            isPrime = false;
        }
    }

    if (isPrime)
        printf("%u is a prime number.\n", num);
    else
        printf("%u is not a prime number.\n", num);


    return 0;
}

