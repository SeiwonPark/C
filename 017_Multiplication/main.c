/**
 * Dealing with Multiplication
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
    float seed_money;
    int target_money;
    float annual_interest;
    int count = 0;

    printf("Input seed money: ");
    scanf("%f", &seed_money);
    printf("Input target_money: ");
    scanf("%d", &target_money);
    printf("Input annual interest: ");
    scanf("%f", &annual_interest);


    while (seed_money < target_money)
    {
        seed_money *= (1 + annual_interest/100);
        printf("%f\n", seed_money);
        count += 1;
    }

    printf("It takes %d years", count);

    return 0;
}

