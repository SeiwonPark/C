/**
 * (US) Calculationg Comprehensive Income Tax(미국 종합소득세)
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-01
 * psw7347@gmail.com
 */

#include <stdio.h>

#define BASE1       9525   // 단위: USD
#define BASE2       38700
#define BASE3       82500
#define BASE4       157500
#define BASE5       200000
#define BASE6       500000

#define RATE1       (10.0 / 100.0)
#define RATE2       (12.0 / 100.0)
#define RATE3       (22.0 / 100.0)
#define RATE4       (24.0 / 100.0)
#define RATE5       (32.0 / 100.0)
#define RATE6       (35.0 / 100.0)
#define RATE7       (37.0 / 100.0)


int main()
{
    double income;
    double tax;

    printf("Your Annual Salary : ");
    scanf("%lf", &income);

    if (income <= BASE1)
        tax = income * RATE1;
    else if (income <= BASE2)
        tax = BASE1 * RATE1 + (income - BASE1) * RATE2;
    else if (income <= BASE3)
        tax = BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (income - BASE2) * RATE3;
    else if (income <= BASE4)
        tax = BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (BASE3 - BASE2) * RATE3 + (income - BASE3) * RATE4;
    else if (income <= BASE5)
        tax = BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (BASE3 - BASE2) * RATE3 + (BASE4 - BASE3) * RATE4 + (income - BASE4) * RATE5;
    else if (income <= BASE6)
        tax = BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (BASE3 - BASE2) * RATE3 + (BASE4 - BASE3) * RATE4 + (BASE5 - BASE4) * RATE5 + (income - BASE5) * RATE6;
    else
        tax = BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (BASE3 - BASE2) * RATE3 + (BASE4 - BASE3) * RATE4 + (BASE5 - BASE4) * RATE5 + (BASE6 - BASE5) * RATE6 + (income - BASE6) * RATE7;

    printf("Your total Tax is %f\n", tax);
    printf("After tax your Total Salary is %f\n", income - tax);
    printf("Your Monthly Salary is %f\n", (income - tax)/12);

    return 0;
}
