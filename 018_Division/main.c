/**
 * Dealing with Division
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
    int seconds = 0;
    int hour;
    int min;
    int sec;

    printf("Input seconds: ");
    scanf("%d", &seconds);

    while (seconds >= 0)
    {
        hour = seconds / 3600;
        min = (seconds - hour * 3600) / 60;
        sec = seconds - hour * 3600 - min * 60;

        /*
         *  교수님 코드
         *
         *  minutes = seconds / 60;
         *  seconds %= 60;
         *
         *  hours = minutes / 60;
         *  minutes %= 60;
         */

        printf("%d hours, %d minutes, %d seconds\n", hour, min, sec);

        printf("Input seconds: ");
        scanf("%d", &seconds);

    }
    printf("Good bye\n");
    return 0;
}
