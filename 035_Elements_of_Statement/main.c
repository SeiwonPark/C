/**
 * Determine Elements in Sentence
 * 
 * File name : main.c
 * @version 1.0.0
 * @author Seiwon Park
 * date : 2020-08-01
 * psw7347@gmail.com
 */


#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define LINE_FLAG   '\n'
#define SPACE_FLAG   ' '
#define STOP '.'

int main()
{
    char ch;
    int char_count = 0;
    int line_count = 1;
    int word_count = 1;
    char before = '\0';

    printf("Enter Text : ");

    while ((ch = getchar()) != '.')
    {
        if (ch != LINE_FLAG && ch != SPACE_FLAG){
            char_count++;
        }
        else if (ch == LINE_FLAG){
            line_count++;
        }
        if ((before != LINE_FLAG && before != SPACE_FLAG && before != '\0')
        && (ch == SPACE_FLAG || ch == LINE_FLAG)) {
            word_count++;
        }

        before = ch;
    }

    printf("Characters = %d, Words = %d, Lines = %d\n", char_count, word_count, line_count);

//    char c;
//    int n_chars = 0;
//    int n_lines = 0;
//    int n_words = 0;
//    bool word_flag = false;
//    bool line_flag = false;
//
//    printf("Enter text : ");
//
//    while ( (c = getchar()) != STOP)
//    {
//        if (!isspace(c))
//            n_chars++;
//        if (!isspace(c) && !line_flag)
//        {
//            n_lines++;
//            line_flag = true;
//        }
//        if (c == '\n')
//            line_flag = false;
//        if (!isspace(c) && !word_flag)
//        {
//            n_words++;
//            word_flag = true;
//        }
//        if (isspace(c))
//            word_flag = false;
//    }
//    printf("Characters = %d, Words = %d, Lines = %d\n", n_chars, n_words, n_lines);

    return 0;
}
