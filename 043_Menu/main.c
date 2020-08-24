/**
 * Make Menu
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-14
 * psw7347@gmail.com
 */

#include <stdio.h>
#include <stdbool.h>

void Menu(void);

int main()
{
    printf("Enter the letter of your choice.\n");
    printf("a. avengers\tb. beep\n");
    printf("c. count\tq.quit\n");
    Menu();

    return 0;
}

void Menu(void) {
    char input;
    int integer;
    bool flag = false;

    while (scanf("%c", &input) == 1)
    {
        switch (input) {
            case 'a' :
                printf("Avengers assemble!\n");
                break;
            case 'b' :
                printf("\a\n");
                break;
            case 'c':
                printf("Enter an integer : ");
                scanf("%d", &integer);
                for (int i = 1; i <= integer; i++) {
                    printf("%d\n", i);
                }
                break;
            case 'q':
                flag = true;
                break;
            default:
                printf("Wrong input. Please try again.\n");
                break;
        }
        if (flag)
            break;
        printf("Enter the letter of your choice.\n");
        printf("a. avengers\tb. beep\n");
        printf("c. count\tq.quit\n");
        scanf("%c", &input);
    }
}