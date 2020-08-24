/**
 * (KR) Calculationg Comprehensive Income Tax(한국 종합소득세)
 *
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-01
 * psw7347@gmail.com
 */

#include <stdio.h>

#define BASE1       12000000.0   // 단위: KRW
#define BASE2       46000000.0
#define BASE3       88000000.0
#define BASE4      150000000.0
#define BASE5      300000000.0
#define BASE6      500000000.0

#define RATE1     (6.0 / 100.0)
#define RATE2    (15.0 / 100.0)
#define RATE3    (24.0 / 100.0)
#define RATE4    (35.0 / 100.0)
#define RATE5    (38.0 / 100.0)
#define RATE6    (40.0 / 100.0)
#define RATE7    (42.0 / 100.0)

#define BASIC_DEDUCTION  1500000

//#define DEDUCTION1       1080000
//#define DEDUCTION2       5220000
//#define DEDUCTION3      14900000
//#define DEDUCTION4      19400000
//#define DEDUCTION5      25400000
//#define DEDUCTION6      35400000

int main()
{
    double income = 0.0;
    double tax = 0.0;

    printf("Your Annual Salary : ");
    scanf("%lf", &income);

    income -= BASIC_DEDUCTION;

    if (income <= BASE1)
        tax = income * RATE1;
    else if (income <= BASE2)
        tax = BASE1 * RATE1 + (income - BASE1) * RATE2;
    else if (income <= BASE3)
        tax = BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (income - BASE2) * RATE3;
    else if (income <= BASE4)
        tax = BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (BASE3 - BASE2) * RATE3 + (income - BASE3) * RATE4;
    else if (income <= BASE3)
        tax = BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (BASE3 - BASE2) * RATE3 + (BASE4 - BASE3) * RATE4 + (income - BASE4) * RATE5;
    else if (income <= BASE5)
        tax = BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (BASE3 - BASE2) * RATE3 + (BASE4 - BASE3) * RATE4 + (BASE5 - BASE4) * RATE5 + (income - BASE5) * RATE6;
    else if (income <= BASE6)
        tax = BASE1 * RATE1 + (BASE2 - BASE1) * RATE2 + (BASE3 - BASE2) * RATE3 + (BASE4 - BASE3) * RATE4 + (BASE5 - BASE4) * RATE5 + (BASE6 - BASE5) * RATE6 + (income - BASE6) * RATE7;

    printf("Tax is = %f\n", tax);
    printf("After tax deduction = %f\n", income - tax);
    printf("Monthly Salary = %f\n", (income - tax)/12);



    return 0;
}


