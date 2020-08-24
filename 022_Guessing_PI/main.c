/**
 * Numerical Comparison
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-07-27
 * psw7347@gmail.com
 */

#include <stdio.h>
#include <math.h>

int main()
{
    const double PI = 3.1415926535897932384626433;
    double in;

    printf("Guess PI!\n");
    printf("Your guess: ");
    scanf("%lf", &in);

    while (fabs(PI - in) > 0.00001) {
        printf("Fool!\n");
        printf("Try agian!\n");
        printf("Your guess: ");
        scanf("%lf", &in);
    }

    printf("Great!\n");

    return 0;
}
