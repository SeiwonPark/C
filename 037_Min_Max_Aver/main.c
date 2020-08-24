/**
 * Min, Max, Average Calculation
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-03
 * psw7347@gmail.com
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    float min = FLT_MAX;  // 당연히 얘보단 작게
    float max = -FLT_MAX; // 당연히 얘보단 크게 일부러 설정
    float sum = 0;
    float count = 0;

    printf("Enter values\n");
    float input;

    while (scanf("%f", &input) == 1)
    {
        if (input < 0.0f || input > 100.0f) {continue;} // 0보다 작거나, 100보다 크면 무시
        max = (input > max) ? input : max;
        min = (input > min) ? min : input;

        count++;
        sum += input;
    }

    if (count == 0)
    {
        printf("min = %f, max = %f, ave = %f", 0.0, 0.0, 0.0);
        return 0;
    }

    printf("min = %f, max = %f, ave = %f", min, max, sum/count);

    return 0;
}