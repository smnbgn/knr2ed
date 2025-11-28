#include <stdio.h>

#define CHAR_START 32 /* first printable character in the ASCII table */
#define CHAR_END 126 /* last printable character in the ASCII table */
#define NCHARS (CHAR_END - CHAR_START + 1)

/* Write a program to print a histogram of the frequencies of different
characters in its input */

int main()
{
    int c, i, j;
    int chars[NCHARS];

    for (i = 0; i < NCHARS; i++)
        chars[i] = 0;

    while((c = getchar()) != EOF) {
        if (c >= CHAR_START && c <= CHAR_END) {
            chars[c - CHAR_START]++;
        }
    }

    for (i = 0; i < NCHARS; i++) {
        if(chars[i] > 0) {
            printf("%c: ", CHAR_START + i);
            for (j = 0; j < chars[i]; j++) {
                putchar('*');
            }
            putchar('\n');
        }
    }

    return 0;
}