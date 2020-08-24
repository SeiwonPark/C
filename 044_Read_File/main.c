/**
 * Read File
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-14
 * psw7347@gmail.com
 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    FILE *file = NULL;
    char file_name[] = "C:\\Users\\psw73\\workspace\\C\\044_Read_File\\my_file.txt";

    file = fopen(file_name, "r");
    if (file == NULL) {
        printf("Failed to open file.\n");
        exit(1);
    }

    while ((c = getc(file)) != EOF)
        putchar(c);
    fclose(file);

    return 0;
}

